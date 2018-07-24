#ifndef ELEOVERBOARD_H
#define ELEOVERBOARD_H

#include <QTimer>
#include <QFile>
#include <QTextStream>
#include "gameelement.h"

enum Medal{PLATINICMEDAL = 12,
           GOLDMEDAL = 13,
           SILVERMEDAL = 14,
           COPPERMEDAL = 15,
          NONE = 0};

class EleOverBoard : public GameElement
{
    Q_OBJECT
private:
    int score;
    int highestScore;
    Medal medal;
    QRectF overTextRect;
    QRectF overBoardRect;
    void loadFrame();
    int getHighestScore();
    int randofGameover;
    int currentFrame;
    int y;
    int x;
    bool overBoardisReady;
public:

    explicit EleOverBoard(QObject *parent = 0);
    void init();
    void draw(QPainter *);
    void logic();
    void setScore(int);

signals:
    void buttonVisible(bool,bool,bool);
public slots:
};

#endif // ELEOVERBOARD_H
