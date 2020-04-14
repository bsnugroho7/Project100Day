#include <QApplication>
#include <QLabel>

int main(int argc, char* argv[]){
    QApplication app(argc,argv);
    QLabel *labelbaru = new QLabel("Hai Beb");
    labelbaru->setWindowTitle("Percobaan");
    labelbaru->resize(400,400);
    labelbaru->show();
    return app.exec();
}
