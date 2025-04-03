#include <QCoreApplication>
#include <QDir>
#include <QFileInfo>
#include <QFileInfoList>
#include <QDebug>


void list(QDir& root){
    qInfo() << ".......Listing......" ;

    foreach (QFileInfo fi, root.entryInfoList(QDir::Filter::Dirs)) {

        if(fi.isDir()){
            qInfo() << fi.absoluteFilePath();
        }


    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QDir dir(QCoreApplication::applicationDirPath());

    qInfo() << dir.dirName();
    qInfo() << dir.absolutePath();

    dir.cdUp();
    qInfo() << dir.absolutePath();

    list(dir);

    dir.mkdir("testFolder");
    list(dir);

    return a.exec();
}
