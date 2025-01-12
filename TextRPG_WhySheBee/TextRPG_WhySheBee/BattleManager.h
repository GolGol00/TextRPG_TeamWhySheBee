#pragma once

#include "PlayerCharacter.h"
#include <memory>

class BattleManager
{
private:
	PlayerCharacter* Player;
	unique_ptr<BaseMonster> Monster;
	int PlayerLevel;

public:
	BattleManager() : Player(PlayerCharacter::GetInstance()), PlayerLevel(1) {}

	// ���� �޼���(�÷��̾��� ��,�� ���θ� ��ȯ�մϴ�)
	bool Battle();

	BaseMonster* GetMonster() const { return  Monster.get(); }

private:
	// ���� ���� �޼���
	void CreateMonster();

	// �÷��̾� ���� �޼���
	void PlayerAttack();
	// ���� ���� �޼���
	void MonsterAttack();

	// �÷��̾� ��� üũ
	bool IsPlayerDead();
	// ���� ��� üũ
	bool IsMonsterDead();
};

