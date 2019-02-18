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
	void GetAllDir();//路径变
	void IsBack();
	void LoadMatchTemplate(QString template_path);//模型变
	void Match();//匹配的数目变, shapeMatch参数变
	void SplitImage();
	void SaveImage();

	//设计
	//用户使用角度：
	//1、可以设置保存路径 2、可以设置模板匹配的模板 3、能够判断模板是否成功
	//4、能够随窗口放大和缩小的 5、能够统一管理所有的模板 6、能够自动打标签

	//demo基本功能
	//1、设置保存路径 2、设置匹配模板 3、保存图片(图片名字按照一定的规则命名)

	//架构设计：
	//GUI ui层
	//MODEL 业务层面
};
