#include "Framework.h"

void Orc::EnragedSkill()
{
	cout << GetName() << "�� ���� ü���� ������ ȸ���մϴ�!" << endl;
	CurrentHP += (MaxHP - CurrentHP) / 2;
}