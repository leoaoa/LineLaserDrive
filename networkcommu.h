#ifndef NETWORKCOMMU_H
#define NETWORKCOMMU_H

#include <QMainWindow>
#include <QTcpServer>

namespace Ui {
class NetWorkCommu;
}

class NetWorkCommu : public QMainWindow
{
    Q_OBJECT

public:
    explicit NetWorkCommu(QWidget *parent = 0);
    ~NetWorkCommu();

    initTCP();
    startTcpServer();
    newConnect();
    readMessage();

    QTcpServer* m_tCPServer;
    QTcpSocket* m_tcpSocket;

private:
    Ui::NetWorkCommu *ui;
};

#endif // NETWORKCOMMU_H
