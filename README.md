Serial Port Assistant
=====================

Author: Kang Lin (kl222@126.com)
--------------------------------

[<img src="Resource/png/China.png" alt="Chinese" title="Chinese" width="16" height="16" />Chinese](README_ZH.md)

1. ![Project: https://github.com/KangLin/SerialPortAssistant](https://github.com/KangLin/SerialPortAssistant)  
This project is a cross-platform serial assistant. It can run on WINDOWS, linux system.

2. Complie status

    |Platform|Status|
    |:---:|:------:|
    |windows、android|[![windows、android](https://ci.appveyor.com/api/projects/status/y77e828ysqc79r9o?svg=true)](https://ci.appveyor.com/project/KangLin/serialportassistant)|
    |linux|[![linux](https://travis-ci.org/KangLin/SerialPortAssistant.svg?branch=master)](https://travis-ci.org/KangLin/SerialPortAssistant)|

3. Multi-language
    * Chinese  
    ![Chinese](Docs/ui-zh.jpg)
    * Englisth  
    ![Englisth](Docs/ui-en.jpg)

4. Multi style

5. ![Release download](https://github.com/KangLin/SerialPortAssistant/releases)  
![Latest release download](https://github.com/KangLin/SerialPortAssistant/releases/latest)

- windows
    + [SerialPortAssistant-Setup-0.3.6.exe](https://github.com/KangLin/SerialPortAssistant/releases/download/0.3.6/SerialPortAssistant-Setup-0.3.6.exe)

- linux
    + [SerialPort_Assistant-0.3.6-x86_64.AppImage](https://github.com/KangLin/SerialPortAssistant/releases/download/0.3.6/SerialPort_Assistant-0.3.6-x86_64.AppImage)

            sudo chmod a+x SerialPort_Assistant-0.3.6-x86_64.AppImage
            ./SerialPort_Assistant-0.3.6-x86_64.AppImage

- ubuntu
    + [serialportassistant_0.3.6_amd64.deb](https://github.com/KangLin/SerialPortAssistant/releases/download/0.3.6/serialportassistant_0.3.6_amd64.deb)

            sudo dpkg -i serialportassistant_0.3.6_amd64.deb

6. Donate  
If you are satisfied, you can donate to me
    * WeChat scan the following two-dimensional code for free donation  
    ![Alipay contribute( More than ￥20 )](Resource/png/zhifubao.png  "Alipay contribute( More than ￥20 )")
    ![WeChat payment( More than ￥20 )](Resource/png/weixinpay.png "WeChat payment( More than ￥20 )")
    * Scan the following two-dimensional code to donate 20 yuan:  
    ![Alipay contribute](Resource/png/zhifubao20.png  "Alipay contribute")
    ![WeChat payment](Resource/png/weixinpay20.png "WeChat payment")
    
7. Dependence
  RabbitCommon: https://github.com/KangLin/RabbitCommon
  
  ```
  git clon https://github.com/KangLin/RabbitCommon.git
  ```
  
8. Compile
    - Compiled with QtCreator
       * Open the project file ![SerialPortAssistant.pro](SerialPortAssistant.pro) with QtCreator
       * Set the parameter RabbitCommon_DIR
       * Direct compilation can generate programs
    - Compile with the command line
       * Build the build directory in the project root directory
       * *qmake* build compilation project
       * *make* install Build the program with the local toolchain
       * The program is generated in the *install* directory

    ```sh
    mkdir build
    cd build
    qmake ../SerialPortAssistant.pro
    make install
    cd install  #The program is generated in the install directory
    ```
