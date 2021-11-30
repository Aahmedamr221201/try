#include "health.h"

Health::Health(int x)
{

    switch(x){
    case 1:{
        QPixmap hearts("sources/heart.png");
        hearts = hearts.scaledToWidth(50);
        hearts = hearts.scaledToWidth(50);
        setPixmap(hearts);
        setPos(50,0);
        break;
    }
    case 2:{

        QPixmap hearts("sources/2hearts.png");
        hearts = hearts.scaledToWidth(50);
        hearts = hearts.scaledToWidth(50);
        setPixmap(hearts);
        setPos(50,0);
        break;
    }
    case 3:{
        QPixmap hearts("sources/3hearts.png");
        hearts = hearts.scaledToWidth(50);
        hearts = hearts.scaledToWidth(50);
        setPixmap(hearts);
        setPos(50,0);
        break;
        qDebug() << "I am constructing the Health";
    }

}
}

Health::~Health()
{

}

