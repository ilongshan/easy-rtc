#ifndef EASYRTCENGINE_H
#define EASYRTCENGINE_H

#include <QObject>


namespace EasyRTC {


class EasyRTCEngine : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool connected READ connected WRITE setConnected NOTIFY connectedChange)
public:
    explicit EasyRTCEngine(QObject *parent = nullptr);

    Q_INVOKABLE
    void setMediaServerUrl(QString url);

    bool connected();
    void setConnected(bool connect);

signals:
    void connectedChange();


private:
    bool _isConnected = false;

};


}


#endif // EASYRTCENGINE_H
