#include "BilletMeasurement.h"
#include <windows.h>
#include <iostream>
#include <BaslerCamera.h>


using namespace std;

BaslerCamera Cam;

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
	Cam.GetLeftUpLabelAddress(*ui.label_LeftUp);
	Cam.GetRightUpLabelAddress(*ui.label_RightUp);
	//Cam.GetLeftDownLabelAddress(*ui.label_LeftDown);
	//Cam.GetRightDownLabelAddress(*ui.label_RightDown);
	Cam.Connect();
	//取得主窗口的Qtreewidget地址
	Cam.GetCamInfoListAddress(*ui.treeWidget);
	//相机信息显示在Qtreewidget中
	Cam.GetCamInitPara();
	
}
//断开相机
void BilletMeasurement::SlotCamDisconnect()
{
	Cam.Disconnect();
	//设置相机的状态
	ui.treeWidget->topLevelItem(0)->setText(4, QStringLiteral("已断开"));
	ui.treeWidget->topLevelItem(1)->setText(4, QStringLiteral("已断开"));

}
//开始相机采集
void BilletMeasurement::SlotStartGrab()
{
	Cam.StartGrabbing();
}
//停止相机采集
void BilletMeasurement::SlotPauseGrab()
{
	Cam.StopGrabbing();
}
//设置相机参数-----弹出设置窗口
void BilletMeasurement::SlotSetCamPara()
{
	//ui.treeWidget->setEditTriggers(QAbstractItemView::DoubleClicked);
	cout << "55555555555" << endl;
}


void BilletMeasurement::treeWidgetOpenEditor(QTreeWidgetItem *item, int col)
{
	ui.treeWidget->openPersistentEditor(item, col);
	m_myItem = item;
	m_myCol = col;
}

void BilletMeasurement::treeWidgetCloseEditor()
{
	if (m_myItem != NULL){
		ui.treeWidget->closePersistentEditor(m_myItem, m_myCol);
	}
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

	//双击可编辑的状态
	connect(ui.treeWidget, SIGNAL(itemDoubleClicked(QTreeWidgetItem*, int)), this, SLOT(treeWidgetOpenEditor(QTreeWidgetItem*, int)));   
	//connect(ui.treeWidget, SIGNAL(itemChanged(QTreeWidgetItem*, int)), this, SLOT(treeWidgetCloseEditor()));


}
