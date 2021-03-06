﻿#ifndef ADMINOPER_H
#define ADMINOPER_H

#include <QDialog>
#include <QMouseEvent>
#include <QStandardItemModel>

namespace Ui {
    class AdminOper;
}

class AdminOper : public QDialog
{
    Q_OBJECT

public:
    explicit AdminOper(QWidget *parent = 0);
    ~AdminOper();
    void closeEvent(QCloseEvent *);
    QStandardItemModel *infosend, *inforeci;
    void get_title(QString word);

private slots:
    void on_PBMin_clicked();

    bool closeWidget();

    void on_PBReturn_clicked();

    void on_PBAdd_clicked();

    void on_PBDelete_clicked();

    void on_PBMessage_clicked();

    void on_PBSend1_clicked();

    void on_PBSend2_clicked();

    void on_PBSend3_clicked();

    void on_PBMy1_clicked();

    void on_PBMy2_clicked();

    void on_PBMy3_clicked();

    void on_PBGet1_clicked();

    void on_PBGet2_clicked();

    void on_PBGet3_clicked();

    void on_PBLogin_clicked();

    void on_PBDele_clicked();

    void on_PBSend_clicked();

    void on_PBSendDel_clicked();

    void on_PBSendClear_clicked();

    void on_PBReciDel_clicked();

    void on_PBReciClear_clicked();

    void on_PBAdd2_clicked();

    void on_PBMessage2_2_clicked();

    void on_PBMessage2_clicked();

private:
    Ui::AdminOper *ui;
    int flag, flag2;
    QPoint last;
    QPoint judge;

protected:
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);

};

#endif // ADMINOPER_H
