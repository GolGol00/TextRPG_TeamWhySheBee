#include "Framework.h"

Mage::Mage(const string& name) :PlayerCharacter(name), _int(1)
{
	_level = 1;
	_health = 100;
	_maxHealth = 100;
	_attack = 50;
	_experience = 0;
	_gold = 0;
	_speed = 4;
}

int Mage::Attack()
{
	int totalDamage = 0;
	totalDamage = RandomAttack();
	return totalDamage;
}

int Mage::RandomAttack()
{
	int randomWeight = (rand() % 100) + 1;
	int Damage = 0;
	if (randomWeight <= 50)
	{
		cout << "기본 공격을 사용합니다!" << endl;
		Damage = _attack; // 기본 공격은 _attack 값
	}
	else if (randomWeight <= 90)
	{
		cout << _name << "이(가) 매직에로우를 시전했습니다!" << endl;
		Damage = _attack * 2 + _int * 5; // 스킬은 공격력의 1.5배 + 알파
	}
	else
	{
		cout << "궁극기를 사용합니다!" << endl;
		Damage = _attack * 3 + _int * 20; // 궁극기는 공격력의 3배 + 알파
	}

	cout << "총 데미지: " << Damage << endl;
	return Damage;
}

int Mage::GetUniqueStat() const
{
	return _int;  // Mage 클래스에서는 _int 값을 반환
}

void Mage::IncreaseInt(int amount)
{
	_int += amount;
	//cout << "마법사의 INT가 " << amount << "만큼 증가했습니다! 현재 INT: " << _int << endl;
}
