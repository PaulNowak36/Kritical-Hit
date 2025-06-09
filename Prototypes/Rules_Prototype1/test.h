#ifndef TEST_H
#define TEST_H

#include <QWidget>

namespace Ui {
class Test;
}

class Test : public QWidget
{
    Q_OBJECT

public:
    explicit Test(QWidget *parent = nullptr);
    ~Test();

protected:
    void showEvent(QShowEvent *event) override;

private slots:
    void on_return_Button_clicked();

signals:
    void returnMenu();

private:
    Ui::Test *ui;
};

#endif // TEST_H
