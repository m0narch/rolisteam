#ifndef DIRCHOOSER_H
#define DIRCHOOSER_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QtDesigner/QDesignerExportWidget>

/**
 * @brief A LineEdit with a button to choose a directory.
 * @todo Make it private or in its own file.
 */
class QDESIGNER_WIDGET_EXPORT DirChooser : public QWidget
{
    Q_OBJECT


public:
    DirChooser(QWidget * parent = NULL);
    ~DirChooser();

    void setDirName(const QString & dirname);
    QString dirName() const;



private slots:
    void browse();

private:
    QLineEdit   * m_lineEdit;

};

#endif // DIRCHOOSER_H