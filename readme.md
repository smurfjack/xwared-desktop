![image](https://github.com/smurfjack/xwared-desktop/blob/master/raw/master/image-folder/yuancheng.png)
![image](https://github.com/smurfjack/xwared-desktop/blob/master/raw/master/image-folder/desktop.png)
![image](https://github.com/smurfjack/xwared-desktop/blob/master/raw/master/image-folder/start.png)
![image](https://github.com/smurfjack/xwared-desktop/blob/master/raw/master/image-folder/stop.png)<br/>
#GUI Version:1.0<br/>
#xwared Version:1.0.31<br/>
#language:QT c++ shell<br/>
#Author:smurfjack<br/>
#Disc:迅雷远程的GUI控制端，通过界面来控制xwared的启动和停止<br/>
#Require:QT5运行库 <br/>
#Note:release版本以64位centos7为典型环境，其他环境可自行编译<br/>
安装步骤:<br/>
1.xwared运行需要32位zlib
yum install zlib.i686
2.拷贝 xwared文件夹到 /opt/   example:  $sudo cp xwared /opt/<br/>
3.拷贝快捷方式文件xwared-desktop.desktop到/usr/share/application/ (或/usr/local/share/application)  <br/>example: $sudo cp xwared-desktop.desktop /usr/share/application/<br/>
4.添加用户组提高安全性 <br/>
example:sudo groupadd thunder;sudo useradd -g thunder thunder<br/>
5.修改xwared程序文件权限及下载目录权限<br/>
example:sudo chown -R thunder:thunder /opt/xwared/;sudo chown -R thunder:thunder /private/TDDOWNLOAD/;sudo chmod -R ug+rw /private/TDDOWNLOAD/<br/>
6.将下载目录绑定为挂载设备以便xwared自动识别<br/>
mkdir /media/TDDOWNLOAD/<br/>
mount --bind /private/TDDOWNLOAD /media/TDDOWNLOAD/<br/>
如果要自动挂载，则编辑/etc/fstab增加行<br/>
    /private/TDDOWNLOAD /media/TDDOWNLOAD none bind 0 0
7.OK<br/>

(可选)如果需要开机自动运行xwared:<br/>
1.将etc/rc.d/init.d/xwared 文件拷贝到本机相应目录 example: $sudo cp xwared /etc/rc.d/init.d/<br/>
2.运行chkconfig配置xwared启动模式为仅在rc3（多用户模式）启动   example:<br/>
    $sudo chkconfig --add xwared <br/>
    $sudo chkconfig xwared on<br/>
    $sudo chkconfig --level 012456 xwared off<br/>
    $sudo chkconfig --level 3 xwared on<br/>
3.重启 OK<br/>





