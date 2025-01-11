#include "Framework.h"
#include "BossMonster.h"


void BossMonster::EnragedSkill()
{
	cout << GetName() << "�� ���� ü���� ������ ȸ���մϴ�! " << endl;
	CurrentHP += (MaxHP - CurrentHP) / 2;
	cout << GetName() << " ü��: " << to_string(GetHealth());
}

void BossMonster::UseRandomSkill()
{
	int RandomSkill = rand() % 2;
	
	switch (RandomSkill)
	{
	case 0:
		FireBress();
		break;
	case 1:
		QuickAttack();
		break;
	default:
		FireBress();
		break;
	}
}

void BossMonster::FireBress()
{
	cout << GetName() << "�� ���� ���� ��ų�� �����մϴ�!" << endl;
	// PlaterChacter�� TakeDamaged �޼��� ���� �ʿ�.
	/*
	* �⺻ ���ݷ��� 1.5�� ����
	*/
	cout << "Player ü��: " << to_string(Player->GetHealth()) << endl;
}

void BossMonster::QuickAttack()
{
	cout << GetName() << "�� ������� �� �� �����մϴ�!" << endl;
	// PlaterChacter�� TakeDamaged �޼��� ���� �ʿ�.
	/*
	* ù ��°�� �⺻ ����, �� ��°�� �⺻ ������ 0.5�� ����
	*/
	cout << "Player ü��: " << to_string(Player->GetHealth()) << endl;
}


