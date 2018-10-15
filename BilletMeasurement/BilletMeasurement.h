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

	//�������
	void SlotCamConnect();
	//�Ͽ����
	void SlotCamDisconnect();
	//��ʼ����ɼ�
	void SlotStartGrab();
	//ֹͣ����ɼ�
	void SlotPauseGrab();
	//����֡ͬ����������ͬ���ɼ�
	void SlotOpenSync();
	//����֡ͬ����ر�����ɼ�
	void SlotCloseSync();
	//����ͬ�������-----�������ô���
	void SlotSetSync();
	//˫���ؼ�ʱ�����༭״̬
	void TreeWidgetOpenEditor(QTreeWidgetItem *item, int col);
	//�ؼ��仯ʱ�رձ༭״̬
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
