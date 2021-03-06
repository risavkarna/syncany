/*
 * Syncany, www.syncany.org
 * Copyright (C) 2011 Philipp C. Heckel <philipp.heckel@gmail.com> 
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
package org.syncany.gui.wizard;

import java.util.ResourceBundle;

import javax.swing.DefaultComboBoxModel;
import javax.swing.JPanel;

import org.syncany.config.Config;
import org.syncany.config.Profile;
import org.syncany.config.Repository;
import org.syncany.connection.plugins.Connection;
import org.syncany.connection.plugins.PluginInfo;
import org.syncany.connection.plugins.Plugins;
import org.syncany.gui.settings.SettingsPanel;

/**
 *
 * @author pheckel
 */
public class ConnectionPanel extends SettingsPanel {
    private Profile profile;
    private Connection connection;
    private ResourceBundle resourceBundle;
    
    private SettingsPanel pnlConnection;

    /** Creates new form ProfileBasicsPanel2 */
    public ConnectionPanel(Profile profile) {    	
    	resourceBundle = Config.getInstance().getResourceBundle();
    	
        initComponents();
	
        this.profile = profile;
	
        lblConnectionTitle.setText("");	
        pnlConnection = null;
        scrConnection.setViewportView(new JPanel());
    }


    @Override
    public void load() {
        // Fill combo box
        DefaultComboBoxModel cmbModel = new DefaultComboBoxModel();
      
        cmbModel.addElement(new ComboBoxItem(null));
	
        for (PluginInfo pluginInfo : Plugins.list())
            cmbModel.addElement(new ComboBoxItem(pluginInfo));

        cmbPlugins.setModel(cmbModel);
    }

    @Override
    public void save() {
        // Get name
        String newProfileName = resourceBundle.getString("cp_new_profile_name");
        String newProfileNameSyntax = resourceBundle.getString("cp_new_profile_name").concat(" %d");
        int newProfileCount = 1;

        while (config.getProfiles().get(newProfileName) != null) {
            newProfileName = String.format(newProfileNameSyntax, newProfileCount++);
        }

        profile.setName(newProfileName);

        // Connection
        pnlConnection.save(); // saves 'connection'
	
        // Repo
        Repository repository = new Repository();
        repository.setConnection(connection);

        profile.setRepository(repository);
    }

    private class ComboBoxItem {
        private PluginInfo pluginInfo;

        public ComboBoxItem(PluginInfo pluginInfo) {
            this.pluginInfo = pluginInfo;
        }

        public PluginInfo getPluginInfo() {
            return pluginInfo;
        }

        @Override
        public String toString() {
            if (pluginInfo == null) {
                return resourceBundle.getString("connpanel_plugin_chooser_message");
            }

            return pluginInfo.getName();
        }
    }

    /** This method is called from within the constructor to
     * initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is
     * always regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked") 
        // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
        private void initComponents() {

                cmbPlugins = new javax.swing.JComboBox();
                jLabel3 = new javax.swing.JLabel();
                jLabel9 = new javax.swing.JLabel();
                jLabel10 = new javax.swing.JLabel();
                jLabel11 = new javax.swing.JLabel();
                scrConnection = new javax.swing.JScrollPane();
                lblConnectionTitle = new javax.swing.JLabel();

                cmbPlugins.setModel(new javax.swing.DefaultComboBoxModel(new String[] { "Item 1", "Item 2", "Item 3", "Item 4" }));
                cmbPlugins.setName("cmbPlugins"); // NOI18N
                cmbPlugins.addActionListener(new java.awt.event.ActionListener() {
                        public void actionPerformed(java.awt.event.ActionEvent evt) {
                                cmbPluginsActionPerformed(evt);
                        }
                });

                jLabel3.setFont(jLabel3.getFont().deriveFont(jLabel3.getFont().getStyle() | java.awt.Font.BOLD));
                jLabel3.setText(resourceBundle.getString("cp_storage_type"));
                jLabel3.setName("jLabel3"); // NOI18N

                jLabel9.setFont(jLabel9.getFont().deriveFont(jLabel9.getFont().getStyle() | java.awt.Font.BOLD, jLabel9.getFont().getSize()+3));
                jLabel9.setText(resourceBundle.getString("cp_where_to_store"));
                jLabel9.setName("jLabel9"); // NOI18N

                jLabel10.setText(resourceBundle.getString("cp_location_to_store_part1"));
                jLabel10.setName("jLabel10"); // NOI18N

                jLabel11.setText(resourceBundle.getString("cp_location_to_store_part2"));
                jLabel11.setName("jLabel11"); // NOI18N

                scrConnection.setBorder(javax.swing.BorderFactory.createEmptyBorder(1, 1, 1, 1));
                scrConnection.setViewportBorder(javax.swing.BorderFactory.createEmptyBorder(1, 1, 1, 1));
                scrConnection.setName("scrConnection"); // NOI18N

                lblConnectionTitle.setFont(lblConnectionTitle.getFont().deriveFont(lblConnectionTitle.getFont().getStyle() | java.awt.Font.BOLD));
                lblConnectionTitle.setText(resourceBundle.getString("cp_connection_details_temp"));
                lblConnectionTitle.setName("lblConnectionTitle"); // NOI18N

                javax.swing.GroupLayout layout = new javax.swing.GroupLayout(this);
                this.setLayout(layout);
                layout.setHorizontalGroup(
                        layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                        .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                                .addContainerGap()
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                                        .addComponent(scrConnection, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 457, Short.MAX_VALUE)
                                        .addComponent(jLabel9, javax.swing.GroupLayout.Alignment.LEADING)
                                        .addGroup(javax.swing.GroupLayout.Alignment.LEADING, layout.createSequentialGroup()
                                                .addComponent(jLabel3)
                                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                                .addComponent(cmbPlugins, 0, 286, Short.MAX_VALUE))
                                        .addComponent(jLabel10, javax.swing.GroupLayout.Alignment.LEADING)
                                        .addComponent(jLabel11, javax.swing.GroupLayout.Alignment.LEADING)
                                        .addComponent(lblConnectionTitle, javax.swing.GroupLayout.Alignment.LEADING))
                                .addContainerGap())
                );
                layout.setVerticalGroup(
                        layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                        .addGroup(layout.createSequentialGroup()
                                .addContainerGap()
                                .addComponent(jLabel9)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                .addComponent(jLabel10)
                                .addGap(4, 4, 4)
                                .addComponent(jLabel11)
                                .addGap(18, 18, 18)
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                                        .addComponent(jLabel3)
                                        .addComponent(cmbPlugins, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                                .addGap(18, 18, 18)
                                .addComponent(lblConnectionTitle)
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                                .addComponent(scrConnection, javax.swing.GroupLayout.PREFERRED_SIZE, 260, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addContainerGap(21, Short.MAX_VALUE))
                );
        }// </editor-fold>//GEN-END:initComponents

    private void cmbPluginsActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_cmbPluginsActionPerformed
        PluginInfo pluginInfo = ((ComboBoxItem) cmbPlugins.getSelectedItem()).getPluginInfo();
	
    if (pluginInfo == null) {
        connection = null;
        pnlConnection = null;
        scrConnection.setViewportView(new JPanel());	    
        lblConnectionTitle.setText("");
    }
	
    else {
        connection = pluginInfo.createConnection();     
        pnlConnection = connection.createConfigPanel();
        scrConnection.setViewportView(pnlConnection);
        lblConnectionTitle.setText(pluginInfo.getName() + resourceBundle.getString("cp_connection_details"));
    }
    }//GEN-LAST:event_cmbPluginsActionPerformed

        // Variables declaration - do not modify//GEN-BEGIN:variables
        private javax.swing.JComboBox cmbPlugins;
        private javax.swing.JLabel jLabel10;
        private javax.swing.JLabel jLabel11;
        private javax.swing.JLabel jLabel3;
        private javax.swing.JLabel jLabel9;
        private javax.swing.JLabel lblConnectionTitle;
        private javax.swing.JScrollPane scrConnection;
        // End of variables declaration//GEN-END:variables
}
