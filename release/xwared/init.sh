#!/bin/sh
XWARE_DIR=/opt/xwared/
USERNAME="thunder"
GROUPNAME="thunder"
DOWN_DIR=/private/TDDOWNLOAD
MOUNT_DIR=/media/TDDOWNLOAD

groupadd $GROUPNAME
useradd --no-create-home -g $GROUPNAME $USERNAME
chown -R $GROUPNAME:$USERNAME $XWARE_DIR
sudo chown -R $USERNAME:$GROUPNAME $DOWN_DIR
sudo chmod -R ug+rw $DOWN_DIR
mkdir $MOUNT_DIR
mount --bind $DOWN_DIR $MOUNT_DIR

