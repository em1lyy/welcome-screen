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
    void on_categoryListWidget_currentRowChanged(int currentRow);

    void on_launchButton_1_released();

    void on_launchButton_2_released();

    void on_launchButton_3_released();

    void on_launchButton_5_released();

    void on_launchButton_6_released();

    void on_launchButton_4_released();

    void on_autostartCheckBox_toggled(bool checked);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
