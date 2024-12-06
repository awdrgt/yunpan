#ifndef PRIVATECHAT_H
#define PRIVATECHAT_H

#include <QWidget>
#include"protocol.h"
namespace Ui {
class PrivateChat;
}

class PrivateChat : public QWidget
{
    Q_OBJECT

public:
    static PrivateChat &getInstance();
    void setChatName(QString strName);
    void updateMsg(const PDU *pdu);
    explicit PrivateChat(QWidget *parent = nullptr);
    ~PrivateChat();

private slots:
    void on_send_Msg_pd_clicked();

private:
    QString m_strChatName;
    QString m_strLoginName;
    Ui::PrivateChat *ui;
};

#endif // PRIVATECHAT_H
