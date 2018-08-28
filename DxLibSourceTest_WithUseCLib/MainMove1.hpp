#pragma once
#include "Stage.hpp"
#include "Character.hpp"
#include "EnemyMove1.hpp"
#include "Camera.hpp"
#include "PointLight.hpp"

class MainMove1
{
private:
	Stage* stage;
	Character* character;
	EnemyMove1* enemy;
	Camera* camera;
	PointLight* light;

	void ActorHit();

public:
	MainMove1();
	~MainMove1();

	void Draw();
	void Process(unsigned __int8 controllNumber);
};
