#ifndef SEEDIALOG_H
#define SEEDIALOG_H

#include <QDialog>

namespace Ui {
class seeDialog;
}

class seeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit seeDialog(QWidget *parent = nullptr);
    ~seeDialog();

private:
    Ui::seeDialog *ui;
};

#endif // SEEDIALOG_H
