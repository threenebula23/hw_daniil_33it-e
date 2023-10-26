from PyQt5.QtWidgets import QApplication, QWidget, QLabel, QPushButton, QVBoxLayout
from PyQt5 import QtGui
import random
import sys

def display_message():
    label.setStyleSheet(f'color: rgb({random.randint(0,255)}, {random.randint(0,255)}, {random.randint(0,255)});')

app = QApplication(sys.argv)
window = QWidget()
window.setWindowTitle("Работаем с кнопкой и меткой")

label = QLabel("Здраствуй мир!!!")
label.setStyleSheet('color: rgb(125, 120, 255);')
button = QPushButton("Приветствие")
label.setFont(QtGui.QFont("Times", 30, QtGui.QFont.Bold))
button.clicked.connect(display_message)

layout = QVBoxLayout()
layout.addStretch(0)
layout.addWidget(label)
layout.addWidget(button)

window.setLayout(layout)
window.show()

sys.exit(app.exec_())