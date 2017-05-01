import QtQuick 2.3
import QtQuick.Window 2.2
import com.widget 1.0

Item {
    visible: true
    width: 640
    height: 480
    id: lol
  //  title: qsTr("Hello World")

    CustomWidget {
       // parent: lol
    }


    MouseArea {
        anchors.fill: parent
        onClicked: {
            console.log(qsTr('Clicked on background. Text: "' + textEdit.text + '"'))
        }
    }

    TextEdit {
        id: textEdit
        text: qsTr("Enter some text...")
        verticalAlignment: Text.AlignVCenter
        anchors.top: parent.top
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.topMargin: 20
        Rectangle {
            anchors.fill: parent
            anchors.margins: -10
            color: "transparent"
            border.width: 1
        }
    }
}
