#include "Framework.h"

void Slime::EnragedSkill()
{
	cout << this->GetName() << "�� �÷��̾��� ��� ������ ��ȿȭ �߽��ϴ�!" << endl;
	
	CurrentHP += Player->GetAttack();
}
