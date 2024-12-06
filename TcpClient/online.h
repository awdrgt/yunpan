#ifndef ONLINE_H
#define ONLINE_H

#include <QWidget>
#include"protocol.h"
namespace Ui {
class Online;
}

class Online : public QWidget
{
    Q_OBJECT

public:
    explicit Online(QWidget *parent = nullptr);
    void showUsr(PDU*pdu);
    ~Online();

private slots:
    void on_addFrined_pd_clicked();

private:
    Ui::Online *ui;
};

#endif // ONLINE_H
