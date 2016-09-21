#ifndef QTDXSAMPLE_H
#define QTDXSAMPLE_H

#include <QtWidgets/QMainWindow>
#include <QtCore/QTimer>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTreeWidget>


#include "attrfactory.h"
#include "GeneratedFiles/ui_qtdxsample.h"

class DXWidget;
class QtDXSample : public QMainWindow {
    Q_OBJECT

  public:
    QtDXSample(QWidget* parent = 0);
    ~QtDXSample();

    HRESULT	setCanvas(DXWidget*);
    void	setVisible(bool);

  private slots:
    void	idle();
    void	toggleAnimation( bool pressed );

  private:

    //! Elapsed Time
    float	m_fTime;

    //! Timer
    QTimer	m_timer;

    Ui::QtDXSampleClass ui;
};

#endif // QTDXSAMPLE_H
