#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <fstream>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:


    void on_enterButton_clicked();

    bool SelectWavFile(void);

    bool CheckWavFile(void);

    bool CallWarningBox(unsigned char textNum);

    bool ReadWavFileData(void);

    void on_exitButton_clicked();

    void on_toolButton_clicked();

private:
    Ui::MainWindow *ui;
    bool isWavFile;
    QString wavFileFullPath;

    std::ifstream wavfile;
    std::ofstream data_file;
};
#endif // MAINWINDOW_H
