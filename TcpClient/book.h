#ifndef BOOK_H
#define BOOK_H
#include <QListWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QWidget>
#include"protocol.h"
#include<QTimer>
#include <QFileDialog>
#include "opewidget.h"
#include "sharefile.h"
class Book : public QWidget
{
    Q_OBJECT
public:
    explicit Book(QWidget *parent = nullptr);
    void updataFileList(const PDU*pdu);
    void clearEnterDir();
    QString enterDir();
    void setDownloadStatus(bool status);
    qint64 m_iTotal;    // 总的文件大小
    qint64 m_iRecved;   // 已收到多少
    bool getDownloadStatus();
    QString getSaveFilePath();
    QString getShareFileName();
public slots:
    void createDir();
    void flushFile();
    void delDir();
    void renameFile();
    void enterDir(const QModelIndex &index);
    void returnPre();
    void uploadFile();
    void uploadFileData();
    void delRegFile();
    void downloadFile();
    void shareFile();
    void moveFile();
    void selectDestDir();
private:
    QListWidget *m_pBookListW;
    QPushButton *m_pReturnPB;
    QPushButton *m_pCreateDirPB;
    QPushButton *m_pDelDirPB;
    QPushButton *m_pRenamePB;
    QPushButton *m_pFlushFilePB;
    QPushButton *m_pUploadPB;
    QPushButton *m_DownLoadPB;
    QPushButton *m_pDelFilePB;
    QPushButton *m_pShareFilePB;
    QString m_strEnterDir;
    QString m_strUploadFilePath;
    QTimer *m_pTimer;
    QString m_strSaveFilePath;
    bool m_bDownload;
    QString m_strShareFileName;
    QPushButton *m_pMoveFilePB;
    QPushButton *m_pSelectDirPB;
    QString m_strMoveFileName;
    QString m_strMoveFilePath;
    QString m_strDestDir;
signals:

};

#endif // BOOK_H
