#include "easyrtc_engine.h"

#include <QDebug>


using namespace EasyRTC;


EasyRTCEngine::EasyRTCEngine(QObject *parent) : QObject(parent)
{

}

void EasyRTCEngine::setMediaServerUrl(QString url)
{
    qDebug() << url;
}

bool EasyRTCEngine::connected()
{
    return _isConnected;
}

void EasyRTCEngine::setConnected(bool connect)
{
    _isConnected = connect;
    emit connectedChange();
}
