import QtQuick 6.0
import QtQuick.Controls 6.0  // это версия библиотеки, содержащей Contol (аналоги виджетов) для версии Qt 5.6
import QtQuick.Layouts 6.0

Rectangle {
    id: cafeItem
    readonly property color evenBackgroundColor: "#E0FFFF"  // цвет для четных пунктов списка
    readonly property color oddBackgroundColor: "#B0C4DE"   // цвет для нечетных пунктов списка
    readonly property color selectedBackgroundColor: "#00FFFF"  // цвет выделенного элемента списка

    property bool isCurrent: cafeItem.ListView.view.currentIndex === index   // назначено свойство isCurrent истинно для текущего (выделенного) элемента списка
    property bool selected: cafeItemMouseArea.containsMouse || isCurrent // назначено свойство "быть выделенным",
    //которому присвоено значение "при наведении мыши,
    //или совпадении текущего индекса модели"

    property variant cafeData: model // свойство для доступа к данным конкретного студента

    width: parent ? parent.width : cafeList.width
    height: 160

    // состояние текущего элемента (Rectangle)
    states: [
        State {
            when: selected
            // как реагировать, если состояние стало selected
            PropertyChanges { target: cafeItem;  // для какого элемента должно назначаться свойство при этом состоянии (selected)
                color: isCurrent ? palette.highlight : selectedBackgroundColor  /* какое свойство целевого объекта (Rectangle)
                                                                                                  и какое значение присвоить*/
            }
        },
        State {
            when: !selected
            PropertyChanges { target: cafeItem;  color: isCurrent ? palette.highlight : index % 2 == 0 ? evenBackgroundColor : oddBackgroundColor }
        }
    ]

    MouseArea {
        id: cafeItemMouseArea
        anchors.fill: parent
        hoverEnabled: true
        onClicked: {
            cafeItem.ListView.view.currentIndex = index
            cafeItem.forceActiveFocus()
        }
    }
    Item {
        id: itemOfCafes
        width: parent.width
        height: 160
        Column{
            id: t2
            anchors.left: parent.left
            anchors.leftMargin: 10
            width: 240
            anchors.verticalCenter: parent.verticalCenter
            Text {
                id: t1
                anchors.horizontalCenter: parent.horizontalCenter
                text: "Название кафе:"
                color: "FloralWhite"
                font.pointSize: 12
            }
            Text {
                id: textName
                anchors.horizontalCenter: parent.horizontalCenter
                text: nameOfCafe
                color: "FloralWhite"
                font.pointSize: 18
                font.bold: true
            }
        }
        Column{
            anchors.left: t2.right
            anchors.leftMargin: 10
            anchors.verticalCenter: parent.verticalCenter
            Text {
                text: "Адрес:"
                color: "FloralWhite"
                font.pointSize: 10
            }
            Text {
                id: textAddress
                text: addressOfCafe
                color: "FloralWhite"
                font.pointSize: 12
                font.bold: true
            }
            Text {
                text: "Тип кухни:"
                color: "FloralWhite"
                font.pointSize: 10
            }
            Text {
                id: textType
                color: "FloralWhite"
                text: typeOfCafe
                font.pointSize: 12
                font.bold: true
            }
            Text {
                text: "Время работы:"
                color: "FloralWhite"
                font.pointSize: 10
            }
            Text {
                id: textTime
                text: timeOfCafe
                color: "FloralWhite"
                font.pointSize: 12
                font.bold: true
            }
        }

    }
}
