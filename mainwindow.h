#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_archsCombo_currentIndexChanged(int index);

    void on_convertBtn_clicked();

    void on_thumbBox_toggled(bool checked);

    void on_bigEndianBox_toggled(bool checked);

    void on_convertBackBtn_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
