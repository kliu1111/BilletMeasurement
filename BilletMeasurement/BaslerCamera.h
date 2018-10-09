#pragma once
#include <QString>
#include <QLabel>
#include <QLineEdit>
#include <QMessageBox>
#include <QString>
#include <QTreeWidget>
#include <QCoreApplication>
#include <pylon/PylonIncludes.h>
#include <pylon/ImageFormatConverter.h>
#include <pylon/gige/BaslerGigEInstantCameraArray.h>
#include <thread>

using namespace std;
using namespace Pylon;

class BaslerCamera
{
public:
	BaslerCamera();
	~BaslerCamera();

	//相机数组
	CBaslerGigEInstantCameraArray CamList;

	//连接检测到的所有的相机
	void Connect();

	//检查所有的相机是否已连接
	bool IsConnected();

	//卸载所有的设备防止非正常关闭时报错
	void DetachDevice();

	//断开所有的相机，如需重新采集，需先连接相机。
	void Disconnect();

	//连接相机后，进行采集工作。
	void StartGrabbing();

	//检查所有的相机是否都处于采集状态
	bool IsGrabbing();

	//停止采集，如需重新采集，直接StartGrabbing。
	void StopGrabbing();

	//取得相机的初始参数
	void GetCamInitPara();

	//采集线程
	static void GrabThread(BaslerCamera* pClass);
	void GrabThreadFunction();

	//主窗口中label(图像显示)控件的地址
	QLabel* LeftUpLabelAdd;
	QLabel* RightUpLabelAdd;
	QLabel* LeftDownLabelAdd;
	QLabel* RightDownLabelAdd;
	void GetLeftUpLabelAddress(QLabel &LeftUpLabelPointer);
	void GetRightUpLabelAddress(QLabel &RightUpLabelPointer);
	void GetLeftDownLabelAddress(QLabel &LeftDownLabelPointer);
	void GetRightDownLabelAddress(QLabel &RightDownLabelPointer);
	//QLineEdit* LeftUpCamIp;
	//QLineEdit* RightUpCamIp;
	//QLineEdit* LeftDownCamIp;
	//QLineEdit* RightDownCamIp;
	//void GetLeftUpIpAddress(QLineEdit &LeftUpIpPointer);
	//void GetRightUpIpAddress(QLineEdit &RightUpIpPointer);
	//void GetLeftDownIpAddress(QLineEdit &LeftDownIpPointer);
	//void GetRightDownIpAddress(QLineEdit &RightDownIpPointer);
	QTreeWidget* CamInfo;
	void GetCamInfoListAddress(QTreeWidget &CamInfoListPointer);

private:
	CGrabResultPtr LeftUpptrGrabResult;
	CGrabResultPtr RightUpptrGrabResult;

};

