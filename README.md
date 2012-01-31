# About This Project
I ported and modified original [Syncany](http://www.syncany.org/) for making it
work with [Swift](http://swift.openstack.org/) as a backend storage.


# Setup Syncany To Work With Swift

## Step 1: Installing Swift
I recommend you to use [Dodai](https://github.com/nii-cloud/dodai) for installing Swift.

## Step 2: Running Swift in S3 Mode
Edit /etc/swift/proxy-server.conf like below.

    [DEFAULT]
    cert_file = /etc/swift/cert.crt
    key_file = /etc/swift/cert.key
    bind_port = 8080
    workers = 8
    user = swift

    [pipeline:main]
    # edited
    pipeline = healthcheck cache swift3 swauth proxy-server

    [app:proxy-server]
    use = egg:swift#proxy
    allow_account_management = true

    [filter:swauth]
    use = egg:swift#swauth
    super_admin_key = swauth
    default_swift_cluster = local#https://127.0.0.1:8080/v1

    [filter:healthcheck]
    use = egg:swift#healthcheck

    [filter:cache]
    use = egg:swift#memcache
    memcache_servers = 127.0.0.1:11211

    # added
    [filter:swift3]
    use = egg:swift#swift3

Restart Swift by running below command.

    % sudo /etc/init.d/swift-proxy restart

## Step 3: Adding user
Let's add a user named 'system:root' and password is testpass.

    % export $KEY=swauth
    % export $HOST=example.com
    % swauth-prep -K $KEY -A https://$HOST:8080/auth/
    % swauth-add-user -K $KEY -A https://$HOST:8080/auth/ -a system root testpass

## Step 4: Creating Empty Conainer
Here we create empty container named syncany by uploading a file and deleting it.

    % touch __foo__
    % swift -A https://$HOST:8080/auth/v1.0 -U system:root -K testpass upload syncany __foo__
    % swift -A https://$HOST:8080/auth/v1.0 -U system:root -K testpass delete syncany __foo__
    % rm __foo__

(I know Syncany shoud automatically create empty container. I'll fix this as soon as I have time to work on this project.)

## Step 5: Installing Syncany Dependencies.

    % sudo add-apt-repository "deb http://archive.canonical.com/ $(lsb_release -sc) partner"
    % sudo apt-get update
    % sudo apt-get install -y sun-java6-jdk sun-java6-javadb ant ant-optional \
        libcommons-codec-java libcommons-cli-java libcommons-lang-java \
        libcommons-collections3-java libcommons-logging-java libcommons-vfs-java \
        libdom4j-java liblog4j1.2-java libjava-gnome-java libappframework-java \
        libcommons-httpclient-java libj2ssh-java libcommons-net2-java openjdk-6-jdk \
        libgtk-3-dev python-gtk2 python-notify

## Step 6: Compiling Syncany Nautilus Extension

    % git clone https://github.com/shouichi/syncany.git
    % cd syncany
    % git checkout origin/nii
    % cd nautilus-syncany
    % make
    % sudo cp dist/Debug/GNU-Linux-x86/libnautilus-syncany.so /usr/lib/nautilus/extensions-2.0/
    % nautilus -q && killall nautilus

## Step 7: Compiling and Running Syncany!

    % cd ../syncany
    % ant
    % ./bin/syncany.sh
