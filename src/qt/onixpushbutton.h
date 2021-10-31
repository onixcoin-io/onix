#ifndef ONIXPUSHBUTTON_H
#define ONIXPUSHBUTTON_H
#include <QPushButton>
#include <QStyleOptionButton>
#include <QIcon>

class OnixPushButton : public QPushButton
{
public:
    explicit OnixPushButton(QWidget * parent = Q_NULLPTR);
    explicit OnixPushButton(const QString &text, QWidget *parent = Q_NULLPTR);

protected:
    void paintEvent(QPaintEvent *) Q_DECL_OVERRIDE;

private:
    void updateIcon(QStyleOptionButton &pushbutton);

private:
    bool m_iconCached;
    QIcon m_downIcon;
};

#endif // ONIXPUSHBUTTON_H
