#pragma once

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class CustomDockWidget;
class VideoPlayerWidget;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


    CustomDockWidget* dockWidget();
    QWidget* videoControlWidget();
    VideoPlayerWidget* getPlayer();

private:
    void onFileOpen();

private:
    Ui::MainWindow *ui;
};

MainWindow* getMainWindow();
