#ifndef __ENEMY_VERTICALSHIP_H__
#define __ENEMY_VERTICALSHIP_H__

#include "Enemy.h"
#include "path.h"
#include "p2Point.h"

class Enemy_VerticalShip : public Enemy
{
private:
	float wave = -1.0f;
	bool going_up = true;
	int original_y = 0;
	iPoint original_pos;
	Animation fly;
	Path path;
	int Type;
	int Time = 0;
	int Right = 0;
	int Left = 0;
	int Down = 0;
	bool ToDo1 = true;
	bool ToDo2 = false;
	bool ToDo3 = false;
	bool ToDo4 = false;
public:

	Enemy_VerticalShip(int x, int y, int Type);
	void OnCollision(Collider* collider);
	void Move(float dt);
};

#endif
