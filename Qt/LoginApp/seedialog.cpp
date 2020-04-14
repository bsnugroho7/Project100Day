#include "seedialog.h"
#include "ui_seedialog.h"

seeDialog::seeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::seeDialog)
{
    ui->setupUi(this);
}

seeDialog::~seeDialog()
{
    delete ui;
}
