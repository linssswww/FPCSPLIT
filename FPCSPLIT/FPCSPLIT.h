#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_FPCSPLIT.h"

class FPCSPLIT : public QMainWindow
{
	Q_OBJECT

public:
	FPCSPLIT(QWidget *parent = Q_NULLPTR);

private:
	Ui::FPCSPLITClass ui;
private slots:
	void Start();

private:
	void GetAllDir();//·����
	void IsBack();
	void LoadMatchTemplate(QString template_path);//ģ�ͱ�
	void Match();//ƥ�����Ŀ��, shapeMatch������
	void SplitImage();
	void SaveImage();

	//���
	//�û�ʹ�ýǶȣ�
	//1���������ñ���·�� 2����������ģ��ƥ���ģ�� 3���ܹ��ж�ģ���Ƿ�ɹ�
	//4���ܹ��洰�ڷŴ����С�� 5���ܹ�ͳһ�������е�ģ�� 6���ܹ��Զ����ǩ

	//demo��������
	//1�����ñ���·�� 2������ƥ��ģ�� 3������ͼƬ(ͼƬ���ְ���һ���Ĺ�������)

	//�ܹ���ƣ�
	//GUI ui��
	//MODEL ҵ�����
};
