#include <QCoreApplication>
#include "test.h"

Test* makeTree(){
    Test* root = new Test(nullptr, "Root");

    for(int i=0; i<5; i++){
        Test* parentObj = new Test(root, "Parent-" + QString::number(i));
        for(int j=0; j<3; j++){
            Test* childObj = new Test(parentObj, "Child-" + QString::number(j));
            Q_UNUSED(childObj);
        }
    }

    return root;
}

void printTree(Test* root, int level=0){

    if(root->children().length() == 0) return;
    QString lead = "-";
    lead.fill('-', level * 5);

    foreach (QObject* obj, root->children()) {
        Test* child = qobject_cast<Test*>(obj);
        if(!child) return;
        qInfo() << lead << child;
        printTree(child, level+1);
    }

}

int main(int argc, char *argv[]){
    QCoreApplication a(argc, argv);

    Test* tree = makeTree();
    printTree(tree);

    return a.exec();
}
