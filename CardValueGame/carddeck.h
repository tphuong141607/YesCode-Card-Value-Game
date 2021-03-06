#ifndef CARDDECK_H
#define CARDDECK_H

#include "card.h"
#include "cardhand.h"
#include <QString>
#include <QList>

class CardDeck : public QList <Card*> {
    public:
        CardDeck();
        CardHand deal(int handSize);
        QString toString();
        int getCardsLeft();
        void restoreDeck();
};

#endif // CARDDECK_H
