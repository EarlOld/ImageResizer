#include "imageresizer.h"
#include "ui_imageresizer.h"

ImageResizer::ImageResizer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ImageResizer)
{
    ui->setupUi(this);

    imageLabel = new QLabel;
    imageLabel->setScaledContents(true);
    imageLabel->setGeometry(100, 100, 400, 400);
    scrollArea = new QScrollArea(this);

    scrollArea->setBackgroundRole(QPalette::Dark);
    scrollArea->setWidget(imageLabel);
    scrollArea->setGeometry(100, 100, 400, 400);



}

ImageResizer::~ImageResizer()
{
    delete ui;
}

void ImageResizer::on_horizontalSlider_valueChanged(int value)
{
    ui->label->setText(QString::number(value));

    imageLabel->resize(imageLabel->size()*(1+value)*0.1);


}

void ImageResizer::on_pushButton_clicked()
{
    filename =  QFileDialog::getOpenFileName(
              this,
              "Open Document",
              QDir::currentPath(),
              "All files (*.*) ;; Document files (*.doc *.rtf);; PNG files (*.png)");


    img = new QPixmap(filename);

    imageLabel->setPixmap(*img);
}
