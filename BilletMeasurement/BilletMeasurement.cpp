#include "BilletMeasurement.h"
#include <windows.h>
#include <iostream>


using namespace std;
BilletMeasurement::BilletMeasurement(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//setWindowState(Qt::WindowMaximized);1111111
	AllocConsole();
	freopen("CONOUT$", "w+t", stdout);
	InitSlot();

}

BilletMeasurement::~BilletMeasurement()
{

}
//连接相机
void BilletMeasurement::SlotCamConnect()
{
	cout << "111111111"<<endl ;
}
//断开相机
void BilletMeasurement::SlotCamDisconnect()
{
	cout << "22222222222" << endl;
}
//开始相机采集
void BilletMeasurement::SlotStartGrab()
{
	cout << "333333333333" << endl;
}
//停止相机采集
void BilletMeasurement::SlotPauseGrab()
{
	cout << "444444444444444" << endl;
}
//设置相机参数-----弹出设置窗口
void BilletMeasurement::SlotSetCamPara()
{
	cout << "55555555555" << endl;
}

//控制帧同步板进行相机同步采集
void BilletMeasurement::SlotOpenSync()
{
	cout << "66666666666" << endl;
}
//控制帧同步板关闭相机采集
void BilletMeasurement::SlotCloseSync()
{
	cout << "7777777777777" << endl;
}
//设置同步板参数-----弹出设置窗口
void BilletMeasurement::SlotSetSync()
{
	cout << "8888888888888" << endl;
}
void BilletMeasurement::InitSlot()
{
	connect(ui.toolButton_Connect, SIGNAL(clicked()), this, SLOT(SlotCamConnect()));
	connect(ui.toolButton_Disconnect, SIGNAL(clicked()), this, SLOT(SlotCamDisconnect()));
	connect(ui.toolButton_Start, SIGNAL(clicked()), this, SLOT(SlotStartGrab()));
	connect(ui.toolButton_Pause, SIGNAL(clicked()), this, SLOT(SlotPauseGrab()));
	connect(ui.toolButton_SetCamPara, SIGNAL(clicked()), this, SLOT(SlotSetCamPara()));
	connect(ui.toolButton_OpenSync, SIGNAL(clicked()), this, SLOT(SlotOpenSync()));
	connect(ui.toolButton_CloseSync, SIGNAL(clicked()), this, SLOT(SlotCloseSync()));
	connect(ui.toolButton_SetSync, SIGNAL(clicked()), this, SLOT(SlotSetSync()));

}
