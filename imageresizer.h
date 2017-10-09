#ifndef IMAGERESIZER_H
#define IMAGERESIZER_H

#include <QMainWindow>
#include <QFileDialog>
#include <QImage>
#include <QPixmap>
#include <QLabel>
#include <QScrollArea>
#include <QRect>


namespace Ui {
class ImageResizer;
}

class ImageResizer : public QMainWindow
{
    Q_OBJECT

public:
    explicit ImageResizer(QWidget *parent = 0);
    ~ImageResizer();

private slots:

    void on_horizontalSlider_valueChanged(int value);

    void on_pushButton_clicked();

private:
    Ui::ImageResizer *ui;
    QString filename;
    QLabel *imageLabel;
    QPixmap *img;
    QScrollArea *scrollArea;
};

#endif // IMAGERESIZER_H
