#ifndef BILLETMEASUREMENT_H
#define BILLETMEASUREMENT_H

#include <QtWidgets/QMainWindow>
#include "ui_BilletMeasurement.h"
#include <BaslerCamera.h>
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
	

	QTreeWidgetItem *WidgetItem;
	int ItemCol;




public slots :

	//�������
	void SlotCamConnect();
	//�Ͽ����
	void SlotCamDisconnect();
	//��ʼ����ɼ�
	void SlotStartGrab();
	//ֹͣ����ɼ�
	void SlotPauseGrab();
	//�����������-----�������ô���
	void SlotSetCamPara();

	//����֡ͬ����������ͬ���ɼ�
	void SlotOpenSync();
	//����֡ͬ����ر�����ɼ�
	void SlotCloseSync();
	//����ͬ�������-----�������ô���
	void SlotSetSync();

	void TreeWidgetOpenEditor(QTreeWidgetItem *item, int col);

	void TreeWidgetCloseEditor();

	//void SetUserInputPara();

	void GetUserData();

	void InitSlot();

signals:
	void aaa();

};

#endif // BILLETMEASUREMENT_H
