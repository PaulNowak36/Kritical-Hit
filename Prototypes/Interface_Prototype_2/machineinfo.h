#ifndef MACHINEINFO_H
#define MACHINEINFO_H

#include <QWidget>

namespace Ui {
class MachineInfo;
}

class MachineInfo : public QWidget
{
    Q_OBJECT

public:
    explicit MachineInfo(QWidget *parent = nullptr);
    ~MachineInfo();

private:
    Ui::MachineInfo *ui;

signals:
    void HomeClicked();

private slots:
    void on_pushButton_4_clicked();
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
};

#endif // MACHINEINFO_H
