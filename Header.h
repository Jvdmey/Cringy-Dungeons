#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>
using namespace std;

#ifndef HEADER_H
#define HEADER_H
//Classes
class Enemy
{
public:
	string enemyName;
	int enemyLevel;
	int enemyHealth;
	Enemy (string a, int b, int c) {
		enemyName = a;
		enemyLevel = b;
		enemyHealth = c;
	}
};

extern Enemy *Weeb, EpicGamer, FortniteBoii;
static Enemy *Enemies[4];

//Variables
extern string cmd;
extern int dmg[6];
extern int rE;
extern string msg[5];
extern string randomEnemyName;
extern int randomEnemyLevel;
extern int randomEnemyHealth;
extern bool alive;
extern int playerHealth, playerDamage, playerLevel, playerExp;
extern string playerName;


//Functions
void Intro();
void PlayerCreation();
void Header();
void UserInterface();
void CombatUserInterface();
void Combat();
void Game();

#endif 
