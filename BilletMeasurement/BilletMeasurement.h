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

	//连接相机
	void SlotCamConnect();
	//断开相机
	void SlotCamDisconnect();
	//开始相机采集
	void SlotStartGrab();
	//停止相机采集
	void SlotPauseGrab();
	//设置相机参数-----弹出设置窗口
	void SlotSetCamPara();

	//控制帧同步板进行相机同步采集
	void SlotOpenSync();
	//控制帧同步板关闭相机采集
	void SlotCloseSync();
	//设置同步板参数-----弹出设置窗口
	void SlotSetSync();

	void treeWidgetOpenEditor(QTreeWidgetItem *item, int col);

	void treeWidgetCloseEditor();

	void InitSlot();
};

#endif // BILLETMEASUREMENT_H
