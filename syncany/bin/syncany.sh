#!/bin/bash
#
# Syncany Start Script 
# Copyright (C) 2011 Philipp C. Heckel <philipp.heckel@gmail.com> 
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#
JAVA=`which java`;

## resolve symlinks
PRG="$0"

while [ -h "$PRG" ] ; do
  ls=`ls -ld "$PRG"`
  link=`expr "$ls" : '.*-> \(.*\)$'`
  if expr "$link" : '/.*' > /dev/null; then
    PRG="$link"
  else
    PRG="`dirname "$PRG"`/$link"
  fi
done

# make it fully qualified
saveddir=`pwd`
PRGDIR=`dirname "$PRG"`/..
PRGDIR=`cd "$PRGDIR" && pwd`
cd "$saveddir"

# paths
BINDIR="$PRGDIR/bin"
LIBDIR="$PRGDIR/lib"
BUILDDIR="$PRGDIR/build/classes"
CLASSPATH=$(echo $(find "$LIBDIR" -name "*.jar") | sed "s|\s$LIBDIR|:$LIBDIR|g")

# add 'build' if existant (for development environment)
if [ -d "$BUILDDIR" ]; then
	echo "Found build directory $BUILDDIR. Adding to classpath."
	CLASSPATH="$BUILDDIR:$CLASSPATH"
fi

# check dependencies
DEPS=(
	# keep these entries in sync with 
	# - 'build.xml'
	# - the line below at (****)
	# - the INSTALL file
#	"/usr/share/java/commons-codec.jar"           # libcommons-codec-java
#	"/usr/share/java/commons-cli.jar"             # libcommons-cli-java
#	"/usr/share/java/commons-lang.jar"            # libcommons-lang-java
#	"/usr/share/java/commons-collections3.jar"    # libcommons-collections3-java
#	"/usr/share/java/commons-logging.jar"         # libcommons-logging-java
#	"/usr/share/java/commons-vfs.jar"             # libcommons-vfs-java
#	"/usr/share/java/commons-net2.jar"            # libcommons-net2-java	
#	"/usr/share/java/commons-httpclient.jar"      # libcommons-httpclient-java
#	"/usr/share/java/swing-worker.jar"            # libswingworker-java
#	"/usr/share/java/swing-layout.jar"            # libswing-layout-java
#	"/usr/share/java/AppFramework.jar"            # libappframework-java	
#	"/usr/share/java/dom4j.jar"                   # libdom4j-java
#	"/usr/share/java/log4j-1.2.jar"               # liblog4j1.2-java
#	"/usr/share/java/gtk.jar"                     # libjava-gnome-java
#	"/usr/share/java/j2ssh-core.jar"	      # libj2ssh-java
#	"/usr/lib/jvm/java-6-sun/db/lib/derby.jar"    # sun-java6-javadb
)	
 
for jar in $DEPS; do 
	if [ ! -e "$jar" ]; then
		echo " "
		echo "ERROR: Could not find library '$jar'. "
		echo "       Make sure you installed all dependencies. Run the following"
		echo "       command to be certain:"
		echo " "
		
		# (****) see above
		echo "  sudo apt-get install libjava-gnome-java"
		echo " "
		exit 1
	fi	
done

SAVE_IFS=$IFS
IFS=":"
DEPS="${DEPS[*]}"
IFS=$SAVE_IFS

# Add deps to classpath
CLASSPATH="$DEPS:$CLASSPATH"

# Call
EXEC="$JAVA -Xms512m -cp $CLASSPATH -Dsyncany.home=$PRGDIR -Djava.library.path=$LIBDIR -Djava.util.logging.config.file=$PRGDIR/conf/logging.conf org.syncany.Syncany $@"

echo $EXEC

exec $EXEC
