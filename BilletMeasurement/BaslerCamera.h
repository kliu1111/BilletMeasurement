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

	//�������
	CBaslerGigEInstantCameraArray CamList;

	//���Ӽ�⵽�����е����
	void Connect();

	//������е�����Ƿ�������
	bool IsConnected();

	//ж�����е��豸��ֹ�������ر�ʱ����
	void DetachDevice();

	//�Ͽ����е�������������²ɼ����������������
	void Disconnect();

	//��������󣬽��вɼ�������
	void StartGrabbing();

	//������е�����Ƿ񶼴��ڲɼ�״̬
	bool IsGrabbing();

	//ֹͣ�ɼ����������²ɼ���ֱ��StartGrabbing��
	void StopGrabbing();

	//ȡ������ĳ�ʼ����
	void GetCamInitPara();

	//�ɼ��߳�
	static void GrabThread(BaslerCamera* pClass);
	void GrabThreadFunction();

	//��������label(ͼ����ʾ)�ؼ��ĵ�ַ
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

