#include "BilletMeasurement.h"
#include <windows.h>
#include <iostream>
#include <BaslerCamera.h>
//#include <QMetaType>

using namespace std;



BilletMeasurement::BilletMeasurement(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	//setWindowState(Qt::WindowMaximized);1111111
	AllocConsole();
	freopen("CONOUT$", "w+t", stdout);

	cam.GetLeftUpLabelAddress(*ui.label_LeftUp);
	cam.GetRightUpLabelAddress(*ui.label_RightUp);
	//cam.GetLeftDownLabelAddress(*ui.label_LeftDown);
	//cam.GetRightDownLabelAddress(*ui.label_RightDown);

	//cam.Connect();
	//取得主窗口的Qtreewidget地址
	cam.GetCamInfoListAddress(*ui.treeWidget);
	//相机信息显示在Qtreewidget中
	//cam.GetCamInitPara();
	WidgetItem = NULL;
	//qRegisterMetaType<CamPara>("CamPara*");

	InitSlot();

}

BilletMeasurement::~BilletMeasurement()
{
	cam.DetachDevice();
	PylonTerminate();
}

void BilletMeasurement::SlotCamConnect()
{
	cam.Connect();
	if (cam.IsConnected())
	{
		int n = ui.treeWidget->topLevelItemCount();
		if (n)
		{
			for (int i = 0; i < n; i++)
			{
				ui.treeWidget->topLevelItem(i)->setText(4, QStringLiteral("已连接"));
			}
		} 
		else
		{
			//相机信息显示在Qtreewidget中
			cam.GetCamInitPara();
		}

	}
}

void BilletMeasurement::SlotCamDisconnect()
{
	cam.Disconnect();
	//当前treeWidget中的所有可见行数
	int n = ui.treeWidget->topLevelItemCount();
	for (int i = 0; i < n;i++)
	{
		ui.treeWidget->topLevelItem(i)->setText(4, QStringLiteral("已断开"));
	}
}

void BilletMeasurement::SlotStartGrab()
{
	cam.StartGrabbing();
}

void BilletMeasurement::SlotPauseGrab()
{
	cam.StopGrabbing();
}

void BilletMeasurement::TreeWidgetOpenEditor(QTreeWidgetItem *item, int col)
{
	ui.treeWidget->openPersistentEditor(item, col);
	WidgetItem = item;
	ItemCol = col;
}

void BilletMeasurement::TreeWidgetCloseEditor()
{
	if (WidgetItem != NULL)
	{
		//CameraPara.LeftUpCamIp = ui.treeWidget->topLevelItem(0)->text(3);
		ui.treeWidget->closePersistentEditor(WidgetItem, ItemCol);
	}
}

void BilletMeasurement::GetUserData()
{
	if (cam.IsGrabbing())
	{
		QMessageBox::about(NULL, QStringLiteral("提示"), QStringLiteral("请关闭相机采集后在进行相机参数的设置！！！"));
		return;
	}
	if (WidgetItem != NULL)
	{
		//para.LeftUpCamIp = ui.treeWidget->topLevelItem(0)->text(3);
		CameraPara.LeftUpImageFrequency = ui.treeWidget->topLevelItem(0)->text(5).toInt();
		CameraPara.LeftUpExposureTime = ui.treeWidget->topLevelItem(0)->text(6).toInt();
		CameraPara.LeftUpImageWidth = ui.treeWidget->topLevelItem(0)->text(7).toInt();
		CameraPara.LeftUpImageHeight = ui.treeWidget->topLevelItem(0)->text(8).toInt();

		CameraPara.RightUpImageFrequency = ui.treeWidget->topLevelItem(1)->text(5).toInt();
		CameraPara.RightUpExposureTime = ui.treeWidget->topLevelItem(1)->text(6).toInt();
		CameraPara.RightUpImageWidth = ui.treeWidget->topLevelItem(1)->text(7).toInt();
		CameraPara.RightUpImageHeight = ui.treeWidget->topLevelItem(1)->text(8).toInt();
		//emit aaa();
		cam.SetCamPara(CameraPara);
	}

}

void BilletMeasurement::SlotOpenSync()
{
	if (myCom == nullptr)
	{
		myCom = new QextSerialPort("COM4", QextSerialPort::Polling);
		IsOpen = myCom->open(QIODevice::ReadWrite);
	}
	if (IsOpen)
	{
		myCom->write("EnableOutput 1\n");

	}
}

void BilletMeasurement::SlotCloseSync()
{
	if (myCom == nullptr)
	{
		myCom = new QextSerialPort("COM4", QextSerialPort::Polling);
		IsOpen = myCom->open(QIODevice::ReadWrite);
	}
	if (IsOpen)
	{
		myCom->write("EnableOutput 0\n");
	}
}

void BilletMeasurement::SlotSetSync()
{
	cout << "8888888888888" << endl;
}

//void BilletMeasurement::SetUserInputPara()
//{
//	cam.SetCamPara(para);
//}
void BilletMeasurement::InitSlot()
{
	connect(ui.toolButton_Connect, SIGNAL(clicked()), this, SLOT(SlotCamConnect()));
	connect(ui.toolButton_Disconnect, SIGNAL(clicked()), this, SLOT(SlotCamDisconnect()));
	connect(ui.toolButton_Start, SIGNAL(clicked()), this, SLOT(SlotStartGrab()));
	connect(ui.toolButton_Pause, SIGNAL(clicked()), this, SLOT(SlotPauseGrab()));
	//connect(ui.toolButton_SetCamPara, SIGNAL(clicked()), this, SLOT(SlotSetCamPara()));
	connect(ui.toolButton_OpenSync, SIGNAL(clicked()), this, SLOT(SlotOpenSync()));
	connect(ui.toolButton_CloseSync, SIGNAL(clicked()), this, SLOT(SlotCloseSync()));
	connect(ui.toolButton_SetSync, SIGNAL(clicked()), this, SLOT(SlotSetSync()));
	//双击可编辑的状态
	connect(ui.treeWidget, SIGNAL(itemDoubleClicked(QTreeWidgetItem*, int)), this, SLOT(TreeWidgetOpenEditor(QTreeWidgetItem*, int)));
	connect(ui.treeWidget, SIGNAL(itemChanged(QTreeWidgetItem*, int)), this, SLOT(TreeWidgetCloseEditor()));

	connect(ui.treeWidget, SIGNAL(itemChanged(QTreeWidgetItem*, int)), this, SLOT(GetUserData()));

	//connect(this, SIGNAL(aaa()), this, SLOT(SetUserInputPara()));
}
