#ifndef EASYRTC_PLUGIN_H
#define EASYRTC_PLUGIN_H

#include <QQmlExtensionPlugin>


namespace EasyRTC {

class EasyRTC_Plugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "rtc.plugin.easyrtc/1.0")

    // QQmlTypesExtensionInterface interface
public:
    void registerTypes(const char *uri);
};

}


#endif // EASYRTC_PLUGIN_H
