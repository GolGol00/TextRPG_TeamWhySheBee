#pragma once

#include "PlayerCharacter.h"

class BattleManager
{
private:
	PlayerCharacter* Player;
	BaseMonster* Monster;
	int PlayerLevel;

public:
	BattleManager() : Player(PlayerCharacter::GetInstance()), Monster(nullptr), PlayerLevel(0) {}
	~BattleManager() { delete Monster; }

	// ���� �޼���(�÷��̾��� ��,�� ���θ� ��ȯ�մϴ�)
	bool Battle();

	BaseMonster* GetMonster() const { return  Monster; };

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

	// ���� ����
	void DeleteMonster();
};

