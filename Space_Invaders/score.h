#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsTextItem>

class Score : public QGraphicsTextItem
{
public:
    Score(QGraphicsItem* parent = NULL);
    size_t getScore() const;
    void increaseScore();

private:
    size_t score;
};

#endif // SCORE_H
