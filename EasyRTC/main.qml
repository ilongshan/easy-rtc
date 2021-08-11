import QtQuick
import QtQuick.Window
import QtQuick.Controls

import plugins.easyrtc as MyPlugin

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    MyPlugin.EasyCall {

    }


    MyPlugin.EasyRTC {
        id: engine
    }

    Button {
        anchors.centerIn: parent
        text: "test rtc engine"
        onClicked: {
            engine.connected = !engine.connected
            console.debug("rtc engine connected: ", engine.connected)
            engine.setMediaServerUrl("wss://127.0.0.1");
        }
    }
}
