#pragma once

class Meteor : public Skill
{
	// Skill을(를) 통해 상속됨
	int Activate(int attackPower, int stat) override;
};