#GUI Version:1.0
#xwared Version:1.0.31
#language:QT c++ shell
#Author:smurfjack
#Home:http://www.123kuai.com
#Disc:迅雷远程的GUI控制端，通过界面来控制xwared的启动和停止
#Require:QT5运行库 
#Note:release版本以64位centos7为典型环境，其他环境可自行编译
安装步骤:
1.拷贝 xwared文件夹到 /opt/     example:  $sudo cp xwared /opt/
2.拷贝快捷方式文件xwared-desktop.desktop到/usr/share/application/ (或/usr/local/share/application)  example: $sudo cp xwared-desktop.desktop /usr/share/application/
3.OK

(可选)如果需要开机自动运行xwared:
1.将etc/rc.d/init.d/xwared 文件拷贝到本机相应目录 example: $sudo cp xwared /etc/rc.d/init.d/
2.运行chkconfig配置xwared启动模式为仅在rc3（多用户模式）启动   example:
    $sudo chkconfig --add xwared
    $sudo chkconfig xwared on
    $sudo chkconfig --level 012456 xwared off
    $sudo chkconfig --level 3 xwared on
3.重启 OK





