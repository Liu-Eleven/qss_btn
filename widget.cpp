#include "widget.h"
#include <QPushButton>
#include <QGridLayout>
#include <QLineEdit>
#include <QLabel>
#include <QCheckBox>
#include <QPixmap>
#include <QBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(500 , 500);




    QPushButton *btn1[5];
    for(int i= 0 ; i<5 ; i++)
    {
        btn1[i] = new QPushButton(this);
        btn1[i]->setGeometry(13 + i*95 , 10 , 90 , 30);
        btn1[i]->setText(QString("Button%1").arg(i+1));

    }
    btn1[0]->setStyleSheet("QPushButton"
                        "{"
                        "background: red;"
                        "border: 0px;"
                        "}");
    btn1[1]->setStyleSheet("QPushButton"
                        "{"
                        "background: green;"
                        "border: 0px;"
                        "}");
    btn1[2]->setStyleSheet("QPushButton"
                        "{"
                        "background: black;"
                        "border: 0px;"
                        "}");
    btn1[3]->setStyleSheet("QPushButton"
                        "{"
                        "background: blue;"
                        "border: 0px;"
                        "}");

    btn1[4]->setStyleSheet("QPushButton"
                        "{"
                        "background: yellow;"
                        "border: 0px;"
                        "}");


    QPushButton *btn2[5];
    for(int i= 0 ; i<5 ; i++)
    {
        btn2[i] = new QPushButton(this);
        btn2[i]->setGeometry(13 + i*95 , 50 , 90 , 30);
        btn2[i]->setText(QString("Button%1").arg(i+1));

    }
    btn2[0]->setStyleSheet("QPushButton#btn2[0]"
                        "{"
                        "color: white"
                        "font-family:Microsoft Yahei;"
                        "background-color: rgb(14 , 150 , 254);"
                        "border: 1px solid rgb(11 , 137 , 234);"
                        "}"
                        "QPushButton#btn2[0]:hover"
                        "{"
                        "color: white;"
                        "background-color: rgb(44 , 137 , 255);"
                        "border: 1px solid rgb(11 , 137 , 234);"
                        "}"
                        "QPushButton#btn2[0]:pressed"
                        "{"
                        "color:white ;"
                        "background-color: rgb(14 , 135 , 228);"
                        "border:1px solid rgb(12 , 138 , 235);"
                        "padding-left: 3px"
                        "padding-top:3px;"
                        "}");



    btn2[1]->setStyleSheet("QPushButton"
                        "{"
                        "background: green;"
                        "border: 0px;"
                        "}");
    btn2[2]->setStyleSheet("QPushButton"
                        "{"
                        "background: black;"
                        "border: 0px;"
                        "}");
    btn2[3]->setStyleSheet("QPushButton"
                        "{"
                        "font-family:Microsoft Yahei;"
                           "color: white;"
                           "background-color: rgb(14 , 150 , 254);"
                           "border-radius: 5px"
                        "}"
                           "QPushButton:hover"
                           "{"
                           "background-color: rgb(44 , 37 , 255);"
                           "}"
                           "QPushButton:pressed"
                           "{"
                           "background-color:rgb(14 , 135 , 228);"
                           "padding-left: 3px;"
                           "padding-top: 3px"
                           "}");

    btn2[4]->setStyleSheet("QPushButton"
                        "{"
                        "background: yellow;"
                        "border: 0px;"
                        "}");

#if 0
    QPushButton *btn2 = new QPushButton(this);
    QPushButton *btn3 = new QPushButton;
    QPushButton *btn4 = new QPushButton;
    QPushButton *btn5 = new QPushButton;
    QPushButton *btn6 = new QPushButton;

    /*addWidget(QWidget*,int row,int column,int rowStretch,int columnStretch,Qt::Alignment),
    * row 表示行
    * column 表示列
    * rowStretch表示行方向占据的宽度
    * columnStretch表示列方向占的宽度，
    * Qt::Alignment表示对齐方式，默认为0
    */
     QGridLayout *layout = new QGridLayout;
    layout->addWidget(btn1 , 0 , 0 , 1 , 1);
    layout->addWidget(btn2 , 0 , 1 , 1 , 1);

    layout->addWidget(btn3 , 1 , 0 , 1 , 1);
    layout->addWidget(btn4 , 1 , 1 , 1 , 1);

    layout->addWidget(btn5 , 2 , 0 , 1 , 1);
    layout->addWidget(btn6 , 2 , 1 , 1 , 1);

    layout->setContentsMargins(10 ,10 , 10 , 10);

    //layout->setRowMinimumHeight(0 , 30);
    // layout->setColumnMinimumWidth(0 , 30);

    /*
    layout->setRowStretch(0 , 1);
    layout->setRowStretch(1 , 1);
    layout->setRowStretch(2 , 1);

    layout->setColumnStretch(0 , 3);
    layout->setColumnStretch(1 , 1);

    */
    setLayout(layout);
#endif

}

Widget::~Widget()
{

}

void Widget::setUi()
{
    // 构建控件 头像、用户名、密码输入框等
    QLabel *pImageLabel = new QLabel(this);
    QLineEdit *pUserLineEdit = new QLineEdit(this);
    QLineEdit *pPasswordLineEdit = new QLineEdit(this);
    QCheckBox *pRememberCheckBox = new QCheckBox(this);
    QCheckBox *pAutoLoginCheckBox = new QCheckBox(this);
    QPushButton *pLoginButton = new QPushButton(this);
    QPushButton *pRegisterButton = new QPushButton(this);
    QPushButton *pForgotButton = new QPushButton(this);

    pLoginButton->setFixedHeight(30);
    pUserLineEdit->setFixedWidth(200);

    // 设置头像
    QPixmap pixmap("D:/1.jpg");
    pImageLabel->setFixedSize(90, 90);
    pImageLabel->setPixmap(pixmap);
    pImageLabel->setScaledContents(true);

    // 设置文本
    pUserLineEdit->setPlaceholderText(QStringLiteral("QQ号码/手机/邮箱"));
    pPasswordLineEdit->setPlaceholderText(QStringLiteral("密码"));
    pPasswordLineEdit->setEchoMode(QLineEdit::Password);
    pRememberCheckBox->setText(QStringLiteral("记住密码"));
    pAutoLoginCheckBox->setText(QStringLiteral("自动登录"));
    pLoginButton->setText(QStringLiteral("登录"));
    pRegisterButton->setText(QStringLiteral("注册账号"));
    pForgotButton->setText(QStringLiteral("找回密码"));

    QGridLayout *pLayout = new QGridLayout();
    // 头像 第0行，第0列开始，占3行1列
    pLayout->addWidget(pImageLabel, 0, 0, 3, 1);
    // 用户名输入框 第0行，第1列开始，占1行2列
    pLayout->addWidget(pUserLineEdit, 0, 1, 1, 2);
    pLayout->addWidget(pRegisterButton, 0, 4);
    // 密码输入框 第1行，第1列开始，占1行2列
    pLayout->addWidget(pPasswordLineEdit, 1, 1, 1, 2);
    pLayout->addWidget(pForgotButton, 1, 4);
    // 记住密码 第2行，第1列开始，占1行1列 水平居左 垂直居中
    pLayout->addWidget(pRememberCheckBox, 2, 1, 1, 1, Qt::AlignLeft | Qt::AlignVCenter);
    // 自动登录 第2行，第2列开始，占1行1列 水平居右 垂直居中
    pLayout->addWidget(pAutoLoginCheckBox, 2, 2, 1, 1, Qt::AlignRight | Qt::AlignVCenter);
    // 登录按钮 第3行，第1列开始，占1行2列
    pLayout->addWidget(pLoginButton, 3, 1, 1, 2);
    // 设置水平间距
    pLayout->setHorizontalSpacing(10);
    // 设置垂直间距
    pLayout->setVerticalSpacing(10);
    // 设置外间距
    pLayout->setContentsMargins(10, 10, 10, 10);
    setLayout(pLayout);
}
