from PyQt5.QtWidgets import QVBoxLayout, QListWidget, QWidget,QPushButton,QHBoxLayout, QLabel, QMessageBox, QLineEdit,QCheckBox
from PyQt5 import QtGui, QtWidgets, QtCore
import random
import sys

class App(QWidget):
    def __init__(self):
        super().__init__()
        self.label1 = QLabel("Введите свое имя и нажмите клавишу ввод")

        self.line = QLineEdit()
        self.line.textChanged[str].connect(self.onChange_name)

        self.label2 = QLabel()
        self.label3 =QLabel("Вы хотите работать в ИТ?")
        self.label3.hide()
       
        self.button1 =QPushButton("Да")
        self.button1.clicked.connect(self.yes)
        self.button1.hide()


        self.button2 =QPushButton("Нет")
        self.button2.clicked.connect(self.no)
        self.button2.hide()

        self.label4=QLabel()
        self.label4.hide()

        self.label5=QLabel()
        self.label5.hide()

        layout1 = QVBoxLayout(self)
        layout1.addWidget(self.label1)
        layout1.addWidget(self.line)
        layout1.addWidget(self.label2)
        layout1.addWidget(self.label3)

        layout2 = QHBoxLayout(self)
        layout2.addWidget(self.button1)
        layout2.addWidget(self.button2)

        layout1.addLayout(layout2)

        layout3 = QHBoxLayout(self)
        layout3.addWidget(self.label4)
        layout3.addWidget(self.label5)

        layout1.addLayout(layout3)




    def onChange_name(self,text):        
        self.line.setText(text)
        self.name = text

    def keyPressEvent(self, e):
       k = e.key()
       super().keyPressEvent(e)
       print("QLineEdit:",k)
       if k == 16777220:
           self.label2.setText(f"{self.name}, приятно с Вами познакомиться!")
           self.label2.show()
           self.label3.show()
           self.button1.show()
           self.button2.show()
           self.label4.show()
           self.label5.show()

    def yes(self):
        self.label4.setText(f"Замечательно! Успехов\nв изучении\nинформатики! Она вам\nпонадобится!")

    def no(self):
        self.label5.setText(f"Другие профессии\nтоже требуют\nзнания\nинформатики.")
           
           

if __name__ == '__main__':
    app = QtWidgets.QApplication(sys.argv)
    w = App()
    w.resize(400, 200)
    w.show()
    sys.exit(app.exec_())
