/*++
Copyright (c) Kang Lin studio, All Rights Reserved

Author:
	Kang Lin(kl222@126.com）

Module Name:

    Global.cpp

Abstract:

    This file contains global variable implement.
 */

#include "Global.h"
#include <QSettings>
#include <QLocale>

CGlobal::CGlobal(QObject *parent) :
    QObject(parent)
{
    QSettings conf(RabbitCommon::CDir::Instance()->GetFileUserConfigure(),
                   QSettings::IniFormat);
    m_szLanguage = conf.value("Global/Language",
                              QLocale::system().name()).toString();
    m_szStyleFile = conf.value(
                "UI/StyleSheet", "").toString();
    m_szStyleMenu = conf.value("UI/MenuStyleSheet", "System").toString();
    m_StatusbarVisable = conf.value("UI/Visable/Statusbar", "true").toBool();
    m_ToolbarVisable = conf.value("UI/Visable/Toolbar", "true").toBool();
    m_LeftBarVisable = conf.value("UI/Visable/LeftBar", "true").toBool();
    m_bSendLoop = conf.value("Settings/Send/Loop", "false").toBool();
    m_nSendLoopTime = conf.value("Settings/Send/LoopTime", 1000).toInt();
    m_SendRN = (CGlobal::SEND_R_N)conf.value("Settings/Send/SendRN", 0).toInt();
    m_bReciveDisplayTime = conf.value("Settings/Recive/DisplayTime", "false").toBool();
    m_bReciveDisplaySend = conf.value("Settings/Recive/DisplaySend", "false").toBool();
    m_bSaveFile = conf.value("Settings/Recive/SaveFile", "false").toBool();
    m_ReciveDisplayCode = (ENCODE)conf.value("Settings/Recive/DisplayReciveCode", 0).toInt();
    m_SendDisplayCode = (ENCODE)conf.value("Settings/Recive/DisplaySendCode", 0).toInt();
}

CGlobal::~CGlobal()
{
}

CGlobal* CGlobal::Instance()
{
    static CGlobal* p = NULL;
    if(!p)
        p = new CGlobal;
    return p;
}

QString CGlobal::GetStyle()
{
    return m_szStyleFile;
}

QString CGlobal::GetStyleMenu()
{
    return m_szStyleMenu;
}

int CGlobal::SetStyleMenu(QString szMenu, QString szFile)
{
    m_szStyleMenu = szMenu;
    m_szStyleFile = szFile;
    QSettings conf(RabbitCommon::CDir::Instance()->GetFileUserConfigure(),
                   QSettings::IniFormat);
    conf.setValue("UI/MenuStyleSheet", szMenu);
    conf.setValue("UI/StyleSheet", szFile);
    return 0;
}

bool CGlobal::GetStatusbarVisable()
{
    return m_StatusbarVisable;
}

int CGlobal::SetStatusbarVisable(bool bVisable)
{
    m_StatusbarVisable = bVisable;
    QSettings conf(RabbitCommon::CDir::Instance()->GetFileUserConfigure(),
                   QSettings::IniFormat);
    conf.setValue("UI/Visable/Statusbar", m_StatusbarVisable);
    return 0;
}

bool CGlobal::GetToolbarVisable()
{
    return m_ToolbarVisable;
}

int CGlobal::SetToolbarVisable(bool bVisable)
{
    m_ToolbarVisable = bVisable;
    QSettings conf(RabbitCommon::CDir::Instance()->GetFileUserConfigure(),
                   QSettings::IniFormat);
    conf.setValue("UI/Visable/Toolbar", m_ToolbarVisable);
    return 0;
}

bool CGlobal::GetLeftBarVisable()
{
    return m_LeftBarVisable;
}

int CGlobal::SetLeftBarVisable(bool bVisable)
{
    m_LeftBarVisable = bVisable;
    QSettings conf(RabbitCommon::CDir::Instance()->GetFileUserConfigure(),
                   QSettings::IniFormat);
    conf.setValue("UI/Visable/LeftBar", m_LeftBarVisable);
    return 0;
}

QString CGlobal::GetLanguage()
{
    return m_szLanguage;
}

int CGlobal::SetLanguage(QString szLanguage)
{
    m_szLanguage = szLanguage;
    QSettings conf(RabbitCommon::CDir::Instance()->GetFileUserConfigure(),
                   QSettings::IniFormat);
    conf.setValue("Global/Language", m_szLanguage);
    return 0;
}

bool CGlobal::GetSendLoop()
{
    return m_bSendLoop;
}

int CGlobal::SetSendLoop(bool bLoop)
{
    m_bSendLoop = bLoop;
    QSettings conf(RabbitCommon::CDir::Instance()->GetFileUserConfigure(),
                   QSettings::IniFormat);
    conf.setValue("Settings/Send/Loop", m_bSendLoop);
    return 0;   
}

int CGlobal::GetSendLoopTime()
{
    return m_nSendLoopTime;
}

int CGlobal::SetSendLoopTime(int nTime)
{
    m_nSendLoopTime = nTime;
    QSettings conf(RabbitCommon::CDir::Instance()->GetFileUserConfigure(),
                   QSettings::IniFormat);
    conf.setValue("Settings/Send/LoopTime", m_nSendLoopTime);
    return 0;   
}

CGlobal::SEND_R_N CGlobal::GetSendRN()
{
    return m_SendRN;
}

int CGlobal::SetSendRN(SEND_R_N v)
{
    m_SendRN = v;
    QSettings conf(RabbitCommon::CDir::Instance()->GetFileUserConfigure(),
                   QSettings::IniFormat);
    conf.setValue("Settings/Send/SendRN", m_SendRN);
    return 0;  
}

bool CGlobal::GetReciveDisplayTime()
{
    return m_bReciveDisplayTime;
}

int CGlobal::SetReciveDisplayTime(bool bDisplay)
{
    m_bReciveDisplayTime = bDisplay;
    QSettings conf(RabbitCommon::CDir::Instance()->GetFileUserConfigure(),
                   QSettings::IniFormat);
    conf.setValue("Settings/Recive/DisplayTime", m_bReciveDisplayTime);
    return 0; 
}

bool CGlobal::GetReciveDisplaySend()
{
    return m_bReciveDisplaySend;
}

int CGlobal::SetReciveDisplaySend(bool bDisplay)
{
    m_bReciveDisplaySend = bDisplay;
    QSettings conf(RabbitCommon::CDir::Instance()->GetFileUserConfigure(),
                   QSettings::IniFormat);
    conf.setValue("Settings/Recive/DisplaySend", m_bReciveDisplaySend);
    return 0; 
}

bool CGlobal::GetSaveFile()
{
    return m_bSaveFile;
}

int CGlobal::SetSaveFile(bool bSaveFile)
{
    m_bSaveFile = bSaveFile;
    QSettings conf(RabbitCommon::CDir::Instance()->GetFileUserConfigure(),
                   QSettings::IniFormat);
    conf.setValue("Settings/Recive/SaveFile", m_bSaveFile);
    return 0;
}

CGlobal::ENCODE CGlobal::GetReciveEncode()
{
    return m_ReciveDisplayCode;
}

int CGlobal::SetReciveEncode(ENCODE code)
{
    m_ReciveDisplayCode = code;
    QSettings conf(RabbitCommon::CDir::Instance()->GetFileUserConfigure(),
                   QSettings::IniFormat);
    conf.setValue("Settings/Recive/DisplayReciveCode", m_ReciveDisplayCode);
    return 0; 
}

CGlobal::ENCODE CGlobal::GetSendEncode()
{
    return m_SendDisplayCode;
}

int CGlobal::SetSendEncode(ENCODE code)
{
    m_SendDisplayCode = code;
    QSettings conf(RabbitCommon::CDir::Instance()->GetFileUserConfigure(),
                   QSettings::IniFormat);
    conf.setValue("Settings/Recive/DisplaySendCode", m_SendDisplayCode);
    return 0; 
}
