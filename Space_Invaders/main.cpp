#include "mainwindow.h"
#include <QApplication>

#include "game.h"

/*
 * 1.̶ ̶Д̶о̶б̶а̶в̶и̶т̶ь̶ ̶2̶й̶ ̶т̶и̶п̶ ̶в̶р̶а̶г̶а̶
 * 2.̶ ̶П̶о̶з̶н̶а̶к̶о̶м̶и̶т̶ь̶с̶я̶ ̶с̶ ̶x̶m̶l̶
 * 3.  ̶Д̶о̶б̶а̶в̶и̶т̶ь̶ ̶в̶р̶а̶г̶а̶м̶ ̶з̶д̶о̶р̶о̶в̶ь̶е̶,̶ ̶с̶к̶о̶р̶о̶с̶т̶ь̶
 * 3.а ̶Д̶о̶б̶а̶в̶и̶т̶ь̶ ̶в̶з̶р̶ы̶в̶ ̶п̶о̶с̶л̶е̶ ̶у̶н̶и̶ч̶т̶о̶ж̶е̶н̶и̶я̶
 * 4.  ̶Д̶о̶б̶а̶в̶и̶т̶ь̶ ̶в̶р̶а̶г̶а̶м̶ ̶р̶а̶з̶н̶ы̶е̶ ̶т̶р̶а̶е̶к̶т̶о̶р̶и̶и̶ ̶и̶ ̶с̶к̶о̶р̶о̶с̶т̶и̶ ̶о̶п̶ц̶и̶о̶н̶а̶л̶ь̶н̶о̶
 * 5. Добавить врагам огневую мощь
 * 6.  ̶С̶д̶е̶л̶а̶т̶ь̶ ̶д̶в̶и̶ж̶е̶н̶и̶е̶ ̶с̶ц̶е̶н̶ы̶
 * - таймер уровня
 * - учитывать попадания по игроку
 * - обьекты изменяющие скорость игрока
 * - сколько врагов не убито
 * - сделать статистику в конце уровня
 * 7. установить QMediaPlayer
 * 8. добавить звук врагам
 *
 *
 * -- генерация уровня через xml
 */

/*
<dataBase>
    <person>
        <name>Petr</name>
        <age>16</<age>
    </perosn>
    <person>
        <name>Ivan</name>
        <age>61</<age>
    </perosn>
</dataBase>

<tag1>
5
</tag1>

<game>
    <level>
        <enemy>
            <count>3</count>
            <type>ShortShip</type>
            <speed>10</speed>
            <trajectory>Horizontal, Vertecal</trajectory>
            <health>10 50</health>
        </enemy>
        <enemy>
            <count>5</count>
            <type>Barge</type>
            <speed>5</speed>
            <trajectory>Horizontal, Vertecal</trajectory>
            <health>10 50</health>
        </enemy>
    </level>
    <level>
        <enemy>
            <count>3</count>
            <type>ShortShip</type>
            <speed>10</speed>
            <trajectory>Horizontal, Vertecal</trajectory>
            <health>10 50</health>
        </enemy>
        <enemy>
            <count>5</count>
            <type>Barge</type>
            <speed>5</speed>
            <trajectory>Horizontal, Vertecal</trajectory>
            <health>10 50</health>
        </enemy>
    </level>
</game>

XmlParser* parser = newXmlParser("game.xml");
...
parser.GoToTag("level");
parser.G
*/

Game* game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    game = new Game();
    game->start();

    return a.exec();
}
