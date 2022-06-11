#include <iostream>
#include <string>
 
// Определяем перечисление с типами монстров 
enum MonsterType
{
    MONSTER_OGRE,
    MONSTER_GOBLIN,
    MONSTER_SKELETON,
    MONSTER_ORC,
    MONSTER_TROLL
};
 
// Наша структура представляет одного монстра 
struct Monster
{
	MonsterType type;
	std::string name;
	int health;
};
 
// Возвращаем тип монстра в виде строки
std::string getMonsterTypeString(Monster monster)
{
	if (monster.type == MONSTER_OGRE)
		return "Ogre";
	if (monster.type == MONSTER_GOBLIN)
		return "Goblin";
	if (monster.type == MONSTER_SKELETON)
		return "Skeleton";
	if (monster.type == MONSTER_ORC)
		return "Orc";
	if (monster.type == MONSTER_TROLL)
		return "Troll";
 
	return "Unknown";
}
 
// Выводим информацию о монстре
void printMonster(Monster monster)
{
	std::cout << "This " << getMonsterTypeString(monster);
	std::cout << " is named " << monster.name << " and has " << monster.health << " health.\n";
}
 
int main()
{
	Monster goblin = { MONSTER_GOBLIN, "John", 170};
	Monster orc = { MONSTER_ORC, "James", 35};
 
	printMonster(goblin);
	printMonster(orc);
 
	return 0;
}