﻿#ifndef QMLPLOT_H
#define QMLPLOT_H

#include <QtQuick>
#include "Globals.h"
#include "qcustomplot.h"
#include <QMessageBox>


class QCustomPlot;
class QCPAbstractPlottable;


class DDuiBasePlotItem : public QQuickPaintedItem
{
    Q_OBJECT
public:
    DDuiBasePlotItem( QQuickItem* parent = 0 );
    virtual ~DDuiBasePlotItem();
    void paint( QPainter* painter );
    virtual void initCustomPlotUI(){}

    QCustomPlot *getPlot();
protected:
    virtual void hoverMoveEvent(QHoverEvent *event);
    virtual void mousePressEvent( QMouseEvent* event );
    virtual void mouseReleaseEvent( QMouseEvent* event );
    virtual void mouseMoveEvent( QMouseEvent* event );
    virtual void mouseDoubleClickEvent( QMouseEvent* event );
    virtual void wheelEvent( QWheelEvent *event );

    void routeMouseEvents( QMouseEvent* event );
    void routeWheelEvents( QWheelEvent* event );
public slots:
    void graphClicked( QCPAbstractPlottable* plottable );
    void onCustomReplot();
    void updateCustomPlotSize();
private:
    QCustomPlot*         m_CustomPlot;
    QCPItemTracer *tracer;
    QCPItemText *tracerLabel;

    QCPItemTracer *tracer2;
    QCPItemText *tracerLabel2;

};

class CustomPlotItem : public DDuiBasePlotItem
{
    Q_OBJECT
public:
    CustomPlotItem( QQuickItem* parent = 0 );
    virtual ~CustomPlotItem();
    Q_INVOKABLE void initCustomPlot();
    Q_INVOKABLE void upAisleData();
    Q_INVOKABLE void saveData();
    Q_INVOKABLE void clearData();
    Q_INVOKABLE void clearPlot();
    void saveDataToTxt(const QVector<QVector<double>>& data, const QString& filePath);


public slots:
    void setAisleValue(int value);
    void setPluralValue( int value);
    //void mouseMoveEvent(QMouseEvent *event);

signals:
    void aisleValueChanged(int value);
    void pluralValueChanged( int value );

private:
    int m_aisle = 0;
    int m_plural = 0;
    int maxValue = -99999, minValue = 99999;
    double t = 0, UImag = 0, UReal = 0;




};


#endif // QMLPLOT_H
