# ArduinoBoard_Manager
Arduino Boards Definetion of Duinopeak
# Duinopeak hardware Package Lists for the Arduino v1.6.4+ Board Manager 

This repo contains the custom `package_*_index.json` files that can be used to add new
third party boards to the Arduino v1.6.4+ IDE.

To add Duinopeak to Boards Manager list, go to IDE preferences, and at the bottom of the dialog add the following URL into "Additional boards managers URLs:" field and hit OK:

https://github.com/duinopeak/ArduinoBoard_Manager/raw/master/package_duinopeak_index.json

![Arduino preferences dialog](/screenshot/arduino-preferences-dialog.png?raw=true "Arduino preferences dialog")

# 国内客户如果不方便科学上网的，请下载离线文件包安装，更方便！

不管在线安装还是离线安装都需要正确设置Arduino IDE的Additional boards managers URLs:
https://github.com/duinopeak/ArduinoBoard_Manager/raw/master/package_duinopeak_index.json

然后下载 离线安装包文件，为了节省时间，分成了两种离线包，可以根据需要选择：
仅AVR板卡：https://github.com/duinopeak/ArduinoBoard_Manager/raw/master/offline/DuinopeakBoardFiles_Offline_v1.10.zip 
全部板卡包含AVR和SAMD：
解压到本地硬盘，双击offline-install.bat文件，自动安装Duinopeak板子支持文件。

重启Arduino IDE, 载入Duinopeak板卡，选择相应型号板块，即可编程！
