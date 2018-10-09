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
//�������
void BilletMeasurement::SlotCamConnect()
{
	Cam.GetLeftUpLabelAddress(*ui.label_LeftUp);
	Cam.GetRightUpLabelAddress(*ui.label_RightUp);
	//Cam.GetLeftDownLabelAddress(*ui.label_LeftDown);
	//Cam.GetRightDownLabelAddress(*ui.label_RightDown);
	Cam.Connect();
	//ȡ�������ڵ�Qtreewidget��ַ
	Cam.GetCamInfoListAddress(*ui.treeWidget);
	//�����Ϣ��ʾ��Qtreewidget��
	Cam.GetCamInitPara();
	
}
//�Ͽ����
void BilletMeasurement::SlotCamDisconnect()
{
	Cam.Disconnect();
	//���������״̬
	ui.treeWidget->topLevelItem(0)->setText(4, QStringLiteral("�ѶϿ�"));
	ui.treeWidget->topLevelItem(1)->setText(4, QStringLiteral("�ѶϿ�"));

}
//��ʼ����ɼ�
void BilletMeasurement::SlotStartGrab()
{
	Cam.StartGrabbing();
}
//ֹͣ����ɼ�
void BilletMeasurement::SlotPauseGrab()
{
	Cam.StopGrabbing();
}
//�����������-----�������ô���
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

//����֡ͬ����������ͬ���ɼ�
void BilletMeasurement::SlotOpenSync()
{
	cout << "66666666666" << endl;
}
//����֡ͬ����ر�����ɼ�
void BilletMeasurement::SlotCloseSync()
{
	cout << "7777777777777" << endl;
}
//����ͬ�������-----�������ô���
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

	//˫���ɱ༭��״̬
	connect(ui.treeWidget, SIGNAL(itemDoubleClicked(QTreeWidgetItem*, int)), this, SLOT(treeWidgetOpenEditor(QTreeWidgetItem*, int)));   
	//connect(ui.treeWidget, SIGNAL(itemChanged(QTreeWidgetItem*, int)), this, SLOT(treeWidgetCloseEditor()));


}
