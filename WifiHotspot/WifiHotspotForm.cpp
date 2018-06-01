#include "WifiHotspotForm.h"
#include "ui_WifiHotspotForm.h"

WifiHotspotForm::WifiHotspotForm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WifiHotspotForm)
{
    ui->setupUi(this);
}

WifiHotspotForm::~WifiHotspotForm()
{
    delete ui;
}
//查看连接
void WifiHotspotForm::on_pushButton_queryConnect_clicked()
{

}
//保存修改
void WifiHotspotForm::on_pushButton_SaveChange_clicked()
{

}
//开启热点
void WifiHotspotForm::on_pushButton_startHotspot_clicked()
{

}
//启用分享
void WifiHotspotForm::on_pushButton_startShared_clicked()
{

}
//刷新数据
void WifiHotspotForm::on_pushButton_refreshData_clicked()
{

}
//重启ICS服务
void WifiHotspotForm::on_pushButton_restart_clicked()
{

}
//连接状态启用/禁用
void WifiHotspotForm::on_pushButton_clicked()
{

}
