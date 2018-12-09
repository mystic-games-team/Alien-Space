#ifndef __ModuleEnemies_H__
#define __ModuleEnemies_H__

#include "j1Module.h"
#include "VerticalShip.h"


#define MAX_ENEMIES 500


enum ENEMY_TYPES {
	
	No_TYPE = 0,

	VERTICAL_SHIP,


};

class Enemy;

struct EnemyInfo
{
	int type = 0;
	int x, y;
	bool z;
	int num;
};

class ModuleEnemies : public j1Module
{
public:

	ModuleEnemies();
	~ModuleEnemies();

	bool Start();
	bool PreUpdate();
	bool Update(float dt);
	bool PostUpdate();
	bool CleanUp();
	void OnCollision(Collider* c1, Collider* c2);
	bool AddEnemy(ENEMY_TYPES type, int x, int y, bool z = false, int num = 1);

private:

	void SpawnEnemy(const EnemyInfo& info);

private:

	EnemyInfo queue[MAX_ENEMIES];
	Enemy* enemies[MAX_ENEMIES];
	SDL_Texture* sprites;
	int lives[MAX_ENEMIES];
};

#endif // __ModuleEnemies_H__