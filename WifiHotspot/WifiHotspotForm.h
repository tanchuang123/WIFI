#ifndef WIFIHOTSPOTFORM_H
#define WIFIHOTSPOTFORM_H

#include <QMainWindow>
namespace Ui {
class WifiHotspotForm;
}

class WifiHotspotForm : public QMainWindow
{
    Q_OBJECT

public:
    explicit WifiHotspotForm(QWidget *parent = 0);
    ~WifiHotspotForm();

private slots:
    void on_pushButton_queryConnect_clicked();

    void on_pushButton_SaveChange_clicked();

    void on_pushButton_startHotspot_clicked();

    void on_pushButton_startShared_clicked();

    void on_pushButton_refreshData_clicked();

    void on_pushButton_restart_clicked();

    void on_pushButton_clicked();

private:
    Ui::WifiHotspotForm *ui;
};

#endif // WIFIHOTSPOTFORM_H
