#ifndef BILLETMEASUREMENT_H
#define BILLETMEASUREMENT_H

#include <QtWidgets/QMainWindow>
#include "ui_BilletMeasurement.h"
#include <BaslerCamera.h>
#include "qextserialport/qextserialport.h"
#include "SetTriggerParam.h"
//class BaslerCamera;
//class CamPara;

class BilletMeasurement : public QMainWindow
{
	Q_OBJECT

public:
	BilletMeasurement(QWidget *parent = 0);
	~BilletMeasurement();

private:
	Ui::BilletMeasurementClass ui;
	BaslerCamera cam;
	
	BaslerCamera::CamPara CameraPara;
	QTreeWidgetItem *WidgetItem;
	int ItemCol;
	SetTriggerParam* SetTriggerWindow;
	QextSerialPort *myCom = nullptr;
	bool IsOpen;



public slots :

	//连接相机
	void SlotCamConnect();
	//断开相机
	void SlotCamDisconnect();
	//开始相机采集
	void SlotStartGrab();
	//停止相机采集
	void SlotPauseGrab();
	//控制帧同步板进行相机同步采集
	void SlotOpenSync();
	//控制帧同步板关闭相机采集
	void SlotCloseSync();
	//设置同步板参数-----弹出设置窗口
	void SlotSetSync();
	//双击控件时开启编辑状态
	void TreeWidgetOpenEditor(QTreeWidgetItem *item, int col);
	//控件变化时关闭编辑状态
	void TreeWidgetCloseEditor();

	//void SetUserInputPara();
	void SlotSetExTriggerParam();
	void SlotTriggerBtnOk();
	void SlotTriggerBtnCancel();

	void GetUserData();

	void InitSlot();

signals:
	void aaa();

};

#endif // BILLETMEASUREMENT_H
