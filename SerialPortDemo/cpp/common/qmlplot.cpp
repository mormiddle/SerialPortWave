#include "qmlplot.h"
#include "qcustomplot.h"
#include <QDebug>
DDuiBasePlotItem::DDuiBasePlotItem( QQuickItem* parent ) : QQuickPaintedItem( parent )
    , m_CustomPlot( new QCustomPlot() )
{
    setFlag( QQuickItem::ItemHasContents, true );
    setAcceptedMouseButtons( Qt::AllButtons );
    setAcceptHoverEvents(true);

    //游标
    tracer = new QCPItemTracer(getPlot());
    //tracer->setInterpolating(false);
    tracer->setStyle(QCPItemTracer::tsCircle);
    tracer->setPen(QPen(Qt::red));
    tracer->setBrush(Qt::red);
    tracer->setSize(6);

    //游标说明
    //游标说明
    tracerLabel = new QCPItemText(getPlot()); //生成游标说明
    tracerLabel->setLayer("overlay");//设置图层为overlay，因为需要频繁刷新
    tracerLabel->setPen(QPen(Qt::black));//设置游标说明颜色
    tracerLabel->setBrush(Qt::cyan);//设置游标说明背景
    tracerLabel->setPositionAlignment(Qt::AlignLeft | Qt::AlignTop);//左上
    tracerLabel->position->setParentAnchor(tracer->position);//将游标说明锚固在tracer位置处，实现自动跟随

    //游标
    tracer2 = new QCPItemTracer(getPlot());
    //tracer->setInterpolating(false);
    tracer2->setStyle(QCPItemTracer::tsCircle);
    tracer2->setPen(QPen(Qt::red));
    tracer2->setBrush(Qt::red);
    tracer2->setSize(6);

    //游标说明
    //游标说明
    tracerLabel2 = new QCPItemText(getPlot()); //生成游标说明
    tracerLabel2->setLayer("overlay");//设置图层为overlay，因为需要频繁刷新
    tracerLabel2->setPen(QPen(Qt::black));//设置游标说明颜色
    tracerLabel2->setBrush(Qt::cyan);//设置游标说明背景
    tracerLabel2->setPositionAlignment(Qt::AlignLeft | Qt::AlignTop);//左上
    tracerLabel2->position->setParentAnchor(tracer2->position);//将游标说明锚固在tracer位置处，实现自动跟随


    //游标的槽连接语句
    connect( getPlot(), SIGNAL(mousePress(QMouseEvent*)), this, SLOT(mousePressEvent(QMouseEvent*)));


    connect( this, &QQuickPaintedItem::widthChanged, this, &DDuiBasePlotItem::updateCustomPlotSize );
    connect( this, &QQuickPaintedItem::heightChanged, this, &DDuiBasePlotItem::updateCustomPlotSize );
}

DDuiBasePlotItem::~DDuiBasePlotItem()
{
    delete m_CustomPlot;
    m_CustomPlot = nullptr;
}

void DDuiBasePlotItem::paint( QPainter* painter )
{
    if (m_CustomPlot)
    {
        QPixmap    picture( boundingRect().size().toSize() );
        QCPPainter qcpPainter( &picture );

        m_CustomPlot->toPainter( &qcpPainter );

        painter->drawPixmap( QPoint(), picture );
    }
}

QCustomPlot *DDuiBasePlotItem::getPlot()
{
    if( !m_CustomPlot){
        m_CustomPlot = new QCustomPlot;
    }
    return m_CustomPlot;
}

void DDuiBasePlotItem::mousePressEvent( QMouseEvent* event )
{
    int x = getPlot()->xAxis->pixelToCoord(event->pos().x());
    //double y = getPlot()->yAxis->pixelToCoord(event->pos().y());
//    tracer->position->setCoords(x, y);//设置游标位置
//    tracerLabel->setText(QString("x = %1, y = %2").arg(x).arg(y));//设置游标说明内容
//    getPlot()->replot();//绘制器一定要重绘，否则看不到游标位置更新情况


    tracer->setGraph(getPlot()->graph(0)); //将游标和该曲线图层想连接
    tracer->setGraphKey(x); //将游标横坐标设置成刚获得的横坐标数据x
    tracer->setInterpolating(true); //游标的纵坐标可以通过曲线数据线性插值自动获得
    tracer->updatePosition(); //使得刚设置游标的横纵坐标位置生效
    //更新游标说明的内容
    int xValue = tracer->position->key();
    int yValue = tracer->position->value();
    tracerLabel->setText(QString("(%1, %2)").arg(xValue).arg(yValue));

    tracer2->setGraph(getPlot()->graph(1)); //将游标和该曲线图层想连接
    tracer2->setGraphKey(x); //将游标横坐标设置成刚获得的横坐标数据x
    tracer2->setInterpolating(true); //游标的纵坐标可以通过曲线数据线性插值自动获得
    tracer2->updatePosition(); //使得刚设置游标的横纵坐标位置生效
    //更新游标说明的内容
    int xValue2 = tracer2->position->key();
    int yValue2 = tracer2->position->value();
    tracerLabel2->setText(QString("(%1, %2)").arg(xValue2).arg(yValue2));

    getPlot()->replot();//绘制器一定要重绘，否则看不到游标位置更新情况

    qDebug() << Q_FUNC_INFO;
    routeMouseEvents( event );
}

void DDuiBasePlotItem::mouseReleaseEvent( QMouseEvent* event )
{
    qDebug() << Q_FUNC_INFO;
    routeMouseEvents( event );
}

void DDuiBasePlotItem::mouseMoveEvent( QMouseEvent* event )
{
    qDebug() << Q_FUNC_INFO;
    routeMouseEvents( event );
}

void DDuiBasePlotItem::mouseDoubleClickEvent( QMouseEvent* event )
{
    qDebug() << Q_FUNC_INFO;
    routeMouseEvents( event );
}

void DDuiBasePlotItem::wheelEvent( QWheelEvent *event )
{
    routeWheelEvents( event );
}
void DDuiBasePlotItem::graphClicked( QCPAbstractPlottable* plottable )
{
    qDebug() << Q_FUNC_INFO << QString( "Clicked on graph '%1 " ).arg( plottable->name() );
}

void DDuiBasePlotItem::routeMouseEvents( QMouseEvent* event )
{
    if (m_CustomPlot)
    {
        QMouseEvent* newEvent = new QMouseEvent( event->type(), event->localPos(), event->button(), event->buttons(), event->modifiers() );
        QCoreApplication::postEvent( m_CustomPlot, newEvent );
    }
}

void DDuiBasePlotItem::routeWheelEvents( QWheelEvent* event )
{
    if (m_CustomPlot)
    {
        QWheelEvent* newEvent = new QWheelEvent( event->pos(), event->delta(), event->buttons(), event->modifiers(), event->orientation() );
        QCoreApplication::postEvent( m_CustomPlot, newEvent );
    }
}

void DDuiBasePlotItem::hoverMoveEvent(QHoverEvent *event)
{
    //qDebug() << Q_FUNC_INFO<<event->pos();
}

void DDuiBasePlotItem::updateCustomPlotSize()
{
    if (m_CustomPlot)
    {
        m_CustomPlot->setGeometry(0, 0, (int)width(), (int)height());
        m_CustomPlot->setViewport(QRect(0, 0, (int)width(), (int)height()));
    }
}

void DDuiBasePlotItem::onCustomReplot()
{
    //qDebug() << Q_FUNC_INFO;
    update();
}
////
/// \brief CustomPlotItem::CustomPlotItem
/// \param parent
///
CustomPlotItem::CustomPlotItem( QQuickItem* parent ) : DDuiBasePlotItem( parent )
{
}

CustomPlotItem::~CustomPlotItem()
{
}

void CustomPlotItem::initCustomPlot()
{
    updateCustomPlotSize();
    getPlot()->addGraph();
    getPlot()->graph( 0 )->setPen( QPen( Qt::red ) );
    getPlot()->addGraph();
    getPlot()->graph( 1 )->setPen( QPen( Qt::blue ) );
    getPlot()->xAxis->setLabel( "t" );
    getPlot()->yAxis->setLabel( "S" );
    getPlot()->xAxis->setRange( 0, 100 );
    getPlot()->yAxis->setRange( 0, 5 );
    getPlot() ->setInteractions( QCP::iRangeDrag | QCP::iRangeZoom );

    //startTimer(500);

//    //游标
//    tracer = new QCPItemTracer(getPlot());
//    //tracer->setInterpolating(false);
//    tracer->setStyle(QCPItemTracer::tsCircle);
//    tracer->setPen(QPen(Qt::red));
//    tracer->setBrush(Qt::red);
//    tracer->setSize(6);

//    //游标说明
//    //游标说明
//    tracerLabel = new QCPItemText(getPlot()); //生成游标说明
//    tracerLabel->setLayer("overlay");//设置图层为overlay，因为需要频繁刷新
//    tracerLabel->setPen(QPen(Qt::black));//设置游标说明颜色
//    tracerLabel->setPositionAlignment(Qt::AlignLeft | Qt::AlignTop);//左上
//    tracerLabel->position->setParentAnchor(tracer->position);//将游标说明锚固在tracer位置处，实现自动跟随


    //信号-槽连接语句
    //connect( getPlot(), SIGNAL(mouseMove(QMouseEvent*)), this, SLOT(mouseMoveEvent(QMouseEvent*)));
    connect( getPlot(), &QCustomPlot::afterReplot, this, &CustomPlotItem::onCustomReplot );

    getPlot()->replot();
}

void CustomPlotItem::setAisleValue(int value)
{
    m_aisle = value;
    emit aisleValueChanged(value);
    qDebug() << "aisle = " << m_aisle;
}

void CustomPlotItem::setPluralValue(int value)
{
    m_plural = value;
    emit pluralValueChanged(value);

}

//void CustomPlotItem::mouseMoveEvent(QMouseEvent *event)
//{
//    double x = getPlot()->xAxis->pixelToCoord(event->pos().x());
//    double y = getPlot()->yAxis->pixelToCoord(event->pos().y());


//    tracer->position->setCoords(x, y);//设置游标位置
//    tracerLabel->setText(QString("x = %1, y = %2").arg(x).arg(y));//设置游标说明内容
//    getPlot()->replot();//绘制器一定要重绘，否则看不到游标位置更新情况


//}


void CustomPlotItem::upAisleData()
{
//    static double t, U;
//    U = ((double)rand() / RAND_MAX) * 5;
//    getPlot()->graph(0)->addData(t, U);
//    //qDebug() << Q_FUNC_INFO << QString("Adding dot t = %1, S = %2").arg(t).arg(U);
//    t++;
//    getPlot()->replot();

    if( m_plural == 0 )
    {
        if( t < checkedDataImag.count()  )
        {
            UImag = checkedDataImag[t][m_aisle];
            //UReal = checkedDataReal[t][m_aisle];

//            maxValue = qMax( qMax( (int)UImag, (int)UReal), maxValue) ;
//            minValue = qMin( qMin( (int)UImag, (int)UReal), minValue) ;

            if( UImag > maxValue )
                maxValue = UImag;
            if( UImag < minValue )
                minValue = UImag;
            getPlot()->graph(0)->addData(t, UImag);
            //getPlot()->graph(1)->addData(t, UReal);
            t++;


            // 计算曲线的最大值和最小值
            if( t > 100 )
                getPlot()->xAxis->setRange( t-100, t);
            else {
                getPlot()->xAxis->setRange( 0, 100);
            }
            if( maxValue > minValue )
              getPlot()->yAxis->setRange(minValue - 10, maxValue + 10);


            getPlot()->replot();
        }

        qDebug() << Q_FUNC_INFO << QString("Adding dot t = %1, S = %2, count = %3").arg(t).arg(UImag).arg(checkedDataImag.count());

    }

    if( m_plural == 1)
    {
        if( t < checkedDataReal.count()  )
        {
            //UImag = checkedDataImag[t][m_aisle];
            UReal = checkedDataReal[t][m_aisle];

//            maxValue = qMax( qMax( (int)UImag, (int)UReal), maxValue) ;
//            minValue = qMin( qMin( (int)UImag, (int)UReal), minValue) ;

            if( UReal > maxValue )
                maxValue = UReal;
            if( UReal < minValue )
                minValue = UReal;
            //getPlot()->graph(0)->addData(t, UImag);
            getPlot()->graph(1)->addData(t, UReal);
            t++;


            // 计算曲线的最大值和最小值
            if( t > 100 )
                getPlot()->xAxis->setRange( t-100, t);
            else {
                getPlot()->xAxis->setRange( 0, 100);
            }
            if( maxValue > minValue )
              getPlot()->yAxis->setRange(minValue - 10, maxValue + 10);


            getPlot()->replot();
        }

        qDebug() << Q_FUNC_INFO << QString("Adding dot t = %1, S = %2, count = %3").arg(t).arg(UImag).arg(checkedDataImag.count());
    }

    if( m_plural == 2 )
    {
        if( t < checkedDataImag.count()  )
        {
            UImag = checkedDataImag[t][m_aisle];
            UReal = checkedDataReal[t][m_aisle];

            maxValue = qMax( qMax( (int)UImag, (int)UReal), maxValue) ;
            minValue = qMin( qMin( (int)UImag, (int)UReal), minValue) ;

    //        if( UImag > maxValue )
    //            maxValue = UImag;
    //        if( UImag < minValue )
    //            minValue = UImag;
            getPlot()->graph(0)->addData(t, UImag);
            getPlot()->graph(1)->addData(t, UReal);
            t++;


            // 计算曲线的最大值和最小值
            if( t > 100 )
                getPlot()->xAxis->setRange( t-100, t);
            else {
                getPlot()->xAxis->setRange( 0, 100);
            }
            if( maxValue > minValue )
              getPlot()->yAxis->setRange(minValue - 10, maxValue + 10);


            getPlot()->replot();
        }

        qDebug() << Q_FUNC_INFO << QString("Adding dot t = %1, S = %2, count = %3").arg(t).arg(UImag).arg(checkedDataImag.count());

    }


}

void CustomPlotItem::saveData()
{

    QString filePathReal = QFileDialog::getSaveFileName(NULL, "保存实部数据文件", "", "文本文件 (*.txt);;所有文件 (*)");
    QString filePathImag = QFileDialog::getSaveFileName(NULL, "保存虚部数据文件", "", "文本文件 (*.txt);;所有文件 (*)");

    if (filePathReal.isEmpty() || filePathImag.isEmpty()) {
        // 用户取消了选择
        return;
    }

    saveDataToTxt(checkedDataReal, filePathReal);
    saveDataToTxt(checkedDataImag, filePathImag);

    QMessageBox::information(NULL, tr("保存成功"), tr("实部数据已保存至文件: %1\n虚部数据已保存至文件: %2").arg(filePathReal).arg(filePathImag));


//    QString filePath = "C:/data.txt";
    //    saveDataToTxt(checkedData, filePath);
}

void CustomPlotItem::clearData()
{
    checkedDataImag.clear();
    checkedDataReal.clear();
    t = 0;
    maxValue = -99999, minValue = 99999;
    getPlot()->replot();
}

void CustomPlotItem::clearPlot()
{
    checkedDataImag.clear();
    checkedDataReal.clear();
    t = 0;
    maxValue = -99999, minValue = 99999;
    getPlot()->graph(0)->data().data()->clear();
    getPlot()->replot();
}

void CustomPlotItem::saveDataToTxt(const QVector<QVector<double> > &data, const QString &filePath)
{
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "Failed to open file for writing: " << filePath;
        return;
    }

    QTextStream out(&file);
    for (int i = 0; i < data.size(); i++) {
        out << QString::number(data[i][m_aisle]) << " ";
    }

    if (file.flush()) {
            // 成功
            QMessageBox::information(NULL, tr("保存成功"), tr("数据已保存至文件: %1").arg(filePath));
        } else {
            // 失败
            QMessageBox::warning(NULL, tr("保存失败"), tr("数据保存失败，请重试"));
        }

    file.close();
    qDebug() << "Data saved to file: " << filePath;


}




