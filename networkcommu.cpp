#include "networkcommu.h"
#include "ui_networkcommu.h"

NetWorkCommu::NetWorkCommu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NetWorkCommu)
{
    ui->setupUi(this);

    initTCP();
}

NetWorkCommu::~NetWorkCommu()
{
    delete ui;
}

NetWorkCommu::initTCP()
{
    QTcpServer* mp_TCPServer;
}

NetWorkCommu::startTcpServer()
{
    m_tCPServer = new QTcpServer(this);

    m_tCPServer->listen(QHostAddress::Any,19999); // 监听任何连上19999端口的ip

    //新连接信号触发，调用newConnect()槽函数，这个跟信号函数一样，其实你可以随便取。
    connect(m_tCPServer,SIGNAL(newConnection()),this,SLOT(newConnect()));
}

NetWorkCommu::newConnect()
{
    m_tcpSocket = m_tCPServer->nextPendingConnection(); //得到每个连进来的socket
    connect(m_tcpSocket,SIGNAL(readyRead()),this,SLOT(readMessage())); //有可读的信息，触发读函数槽
}

NetWorkCommu::readMessage()
{

}
