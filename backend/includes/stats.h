#include <QObject>
#include <iostream>

#include <sstream>
#include <fstream>
#include <map>
#include <QStringListModel>
#include <QProcess>
#include <QDebug>
#include<QMediaPlayer>
using namespace std;


class stats : public QObject {
    Q_OBJECT

private:

public:

    Q_INVOKABLE QString getgpuload();
    Q_INVOKABLE QString getcpuload();
    Q_INVOKABLE uint32_t getddrload();
    Q_INVOKABLE uint32_t getddrtotalbw(); 
};