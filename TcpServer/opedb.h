#ifndef OPEDB_H
#define OPEDB_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include<QStringList>
class OpeDB : public QObject
{
    Q_OBJECT

public:
    bool handleLogin(const char *name,const char *pwd);
    bool handleRegist(const char*name,const char *pwd);
    bool handleDelFriend(const char *name,const char *friendName);
    QStringList handleAllOnline();
    QStringList handleFlushFriend(const char *name);
    int handleSearchUsr(const char*name);
    int handleAddFriend(const char *pername,const char *name);
    void handleAgreeAddFriend(const char *pername, const char *name);
    explicit OpeDB(QObject *parent = nullptr);
    static OpeDB& getInstance();
    void init();
    void handleOffline(const char *name);
    ~OpeDB();

signals:

public slots:

private:
    QSqlDatabase m_db; // 连接数据库

};

#endif // OPEDB_H

