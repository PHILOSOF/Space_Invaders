#include "score.h"

#include <QFont>

Score::Score(QGraphicsItem* parent) : QGraphicsTextItem(parent)
{
    score = 0;
    setPlainText(QString("Score = ") + QString::number(score));
    setDefaultTextColor(Qt::yellow);
    setFont(QFont("OldEnglish", 12));
}

size_t Score::getScore() const
{
    return score;
}

void Score::increaseScore()
{
    ++score;
    setPlainText(QString("Score = ") + QString::number(score));
}
