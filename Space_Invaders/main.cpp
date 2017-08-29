#include "mainwindow.h"
#include <QApplication>

#include "game.h"

/*
 * 1.̶ ̶Д̶о̶б̶а̶в̶и̶т̶ь̶ ̶2̶й̶ ̶т̶и̶п̶ ̶в̶р̶а̶г̶а̶
 * 2.̶ ̶П̶о̶з̶н̶а̶к̶о̶м̶и̶т̶ь̶с̶я̶ ̶с̶ ̶x̶m̶l̶
 * 3. Добавить врагам здоровье, скорость
 * 3.а ̶Д̶о̶б̶а̶в̶и̶т̶ь̶ ̶в̶з̶р̶ы̶в̶ ̶п̶о̶с̶л̶е̶ ̶у̶н̶и̶ч̶т̶о̶ж̶е̶н̶и̶я̶
 * 4. Добавить врагам разные траектории и скорости
 * опционально 5. Добавить врагам огневую мощь
 * 6. Сделать движение сцены
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

<game>
    <level>
        <enemyCoun>5</enemyCount>
        <enemyType>ShortShip, LongShip, Barge</enemyType>
        <enmyWeaponType>LongGun, BigGun</enmyWeaponType>
    </level>
    <level>
        <enemyCount>15</enemyCount>
        <enemyType>ShortShip, LongShip, Barge</enemyType>
        <enmyWeaponType>LongGun, BigGun</enmyWeaponType>
    </level>
</game>

XmlParser* parser = newXmlParser("game.xml");
...
int enemyOnLevel = parser.GetValue("enemyCount");
*/

Game* game;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    game = new Game();
    game->start();

    return a.exec();
}
