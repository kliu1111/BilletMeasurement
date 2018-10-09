#ifndef BILLETMEASUREMENT_H
#define BILLETMEASUREMENT_H

#include <QtWidgets/QMainWindow>
#include "ui_BilletMeasurement.h"

class BilletMeasurement : public QMainWindow
{
	Q_OBJECT

public:
	BilletMeasurement(QWidget *parent = 0);
	~BilletMeasurement();

private:
	QTreeWidgetItem *m_myItem;
	int m_myCol;
	Ui::BilletMeasurementClass ui;


private slots:

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

	void treeWidgetOpenEditor(QTreeWidgetItem *item, int col);

	void treeWidgetCloseEditor();

	void InitSlot();
};

#endif // BILLETMEASUREMENT_H
