#include <QStringList>
#include <QString>
#include <iostream>
using namespace std;
QStringList listQt_String(QString a, QString b){
    QStringList mOldList;
    mOldList.append("1");
    mOldList.append("2");
    mOldList.append("10");
    return mOldList;
}
int main_test_qstringlist(){
    QStringList mNewList;
    mNewList.append("1");
    mNewList.append("2");
    mNewList.append("15");
    QString a = "a", b = "b";
    QStringList mOldList = listQt_String(a, b);
    // qSort(mNewList); qSort(mOldList);
    if(mNewList == mOldList){
        cout << "same";
    }
    else {
        cout << "not same";
    }
}