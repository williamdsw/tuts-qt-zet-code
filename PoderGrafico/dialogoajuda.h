#ifndef DIALOGOAJUDA_H
#define DIALOGOAJUDA_H

#include <QDialog>

namespace Ui {
class DialogoAjuda;
}

class DialogoAjuda : public QDialog
{
    Q_OBJECT

public:
    explicit DialogoAjuda(QWidget *parent = 0);
    ~DialogoAjuda();

private:
    Ui::DialogoAjuda *ui;
};

#endif // DIALOGOAJUDA_H
