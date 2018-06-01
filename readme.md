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
4.OK<br/>

(可选)如果需要开机自动运行xwared:<br/>
1.将etc/rc.d/init.d/xwared 文件拷贝到本机相应目录 example: $sudo cp xwared /etc/rc.d/init.d/<br/>
2.运行chkconfig配置xwared启动模式为仅在rc3（多用户模式）启动   example:<br/>
    $sudo chkconfig --add xwared <br/>
    $sudo chkconfig xwared on<br/>
    $sudo chkconfig --level 012456 xwared off<br/>
    $sudo chkconfig --level 3 xwared on<br/>
3.重启 OK<br/>





