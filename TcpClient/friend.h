#ifndef FRIEND_H
#define FRIEND_H

#include <QWidget>
#include <QTextEdit>
#include <QListWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include "online.h"



class Friend : public QWidget
{
    Q_OBJECT
public:
    explicit Friend(QWidget *parent = nullptr);
    void updateFriendList(PDU *pdu);
    void updateGroupMsg(PDU *pdu);
    QString m_strSearchName;
    QListWidget *getFriendList();
public slots:
    void showOnline();
    void showAllOnlineUsr(PDU*pdu);
    void searchUsr();
    void  flushFriend();
    void deleteFriend();
    void privateChat();
    void groupChat();


private:
    QTextEdit *m_pShowMsgTE;
    QListWidget *m_pFriendListWidget;
    QLineEdit *m_pInputMsgLE;
    QPushButton *m_pDelFriendPB;
    QPushButton *m_pFlushFriendPB;
    QPushButton *m_pShowOnlineUsrPB;
    QPushButton *m_pSearchUsrPB;
    QPushButton *m_pMsgSendPB;
    QPushButton *m_pPrivateChatPB;
    Online *m_pOnline;

signals:

};

#endif // FRIEND_H
