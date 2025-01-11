#include "Framework.h"

BaseMonster* EnemyFactory::CreateBasicMonster(const int& PlayerLevel)
{
	MonsterType Type = GetRandomMonsterType();

	switch (Type)
	{
	case GOBLIN:
		return new Goblin("���", PlayerLevel);
	case ORC:
		return new Orc("��ũ", PlayerLevel);
	case SLIME:
		return new Slime("������", PlayerLevel);
	case TROLL:
		return new Troll("Ʈ��", PlayerLevel);
	}
}

BaseMonster* EnemyFactory::CreateBossMonster(const int& PlayerLevel)
{
	return new BossMonster("���� �巡��", PlayerLevel);
}

MonsterType EnemyFactory::GetRandomMonsterType()
{
	int RandomValue = rand() % 4;

	return static_cast<MonsterType>(RandomValue);
}
