#include "Framework.h"

unique_ptr<BaseMonster> EnemyFactory::CreateBasicMonster(const int& PlayerLevel)
{
	MonsterType Type = GetRandomMonsterType();

	switch (Type)
	{
	case GOBLIN:
		return make_unique<Goblin>("���", PlayerLevel);
	case ORC:
		return make_unique<Orc>("��ũ", PlayerLevel);
	case SLIME:
		return make_unique<Slime>("������", PlayerLevel);
	case TROLL:
		return make_unique<Troll>("Ʈ��", PlayerLevel);
	default:
		throw runtime_error("== �⺻ ���� Ÿ��, ���� �߻� ==");
	}
}

unique_ptr<BaseMonster> EnemyFactory::CreateBossMonster(const int& PlayerLevel)
{
	return make_unique<BossMonster>("���� �巡��", PlayerLevel);
}

MonsterType EnemyFactory::GetRandomMonsterType()
{
	int RandomValue = rand() % 4;

	return static_cast<MonsterType>(RandomValue);
}
