#ifndef TEMPLATEMENUINFO_H
#define TEMPLATEMENUINFO_H

#include <QWidget>

namespace Ui {
class TemplateMenuInfo;
}

class TemplateMenuInfo : public QWidget
{
    Q_OBJECT

public:
    explicit TemplateMenuInfo(QWidget *parent = nullptr);
    ~TemplateMenuInfo();

private:
    Ui::TemplateMenuInfo *ui;

signals:
    void HomeClicked();

private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_clicked();
};

#endif // TEMPLATEMENUINFO_H
