#include "easyrtc_plugin.h"

#include <QtQml/QtQml>

#include <easyrtc_engine.h>


namespace EasyRTC {

void EasyRTC_Plugin::registerTypes(const char *uri)
{
    // Register our 'EasyRTCEngine' in qml engine
    qmlRegisterType<EasyRTCEngine>(uri, 1, 0, "EasyRTCEngine");
}

}
