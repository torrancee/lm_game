import QtQuick 2.7
import io.qt.examples.backend 1.0

Page1Form {

    textField.onTextChanged: {
        newObject.userName = textField.text
    }

    BackEnd{
        id: newObject
    }

}
