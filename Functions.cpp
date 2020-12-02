#include "Header.h"

//variables
string cmd;
string randomEnemyName;
int randomEnemyLevel;
int randomEnemyHealth;
int dmg[6] = { 0,4,6,8,10,12 };
string msg[5];

//Player Variables
int playerHealth = 100, playerDamage = dmg[playerLevel], playerLevel = 1, playerExp = 0;
int expNeedded = 50* playerLevel/2;
string playerName;


void Header() {
	cout << "+===================================================================================================+ " << endl;
	cout << "|   ___                                     ___                                                     |" << endl;
	cout << "|   (  _`\\        _                         (  _`\\                                                  |" << endl;
	cout << "|   | ( (_) _ __ (_)  ___     __   _   _    | | ) | _   _   ___     __     __     _     ___    ___  |" << endl;
	cout << "|   | |  _ ( '__)| |/' _ `\\ /'_ `\\( ) ( )   | | | )( ) ( )/' _ `\\ /'_ `\\ /'__`\\ /'_`\\ /' _ `\\/',__) |" << endl;
	cout << "|   | (_( )| |   | || ( ) |( (_) || (_) |   | |_) || (_) || ( ) |( (_) |(  ___/( (_) )| ( ) |\\__, \\ |" << endl;
	cout << "|   (____/'(_)   (_)(_) (_)`\\__  |`\\__, |   (____/'`\\___/'(_) (_)`\\__  |`\\____)`\\___/'(_) (_)(____/ |" << endl;
	cout << "|                          ( )_) |( )_| |                        ( )_) |                            |" << endl;
	cout << "|                           \\___/'`\\___/'                         \\___/'                            |" << endl;
	cout << "|                                                                                                   |" << endl;
	cout << "+===================================================================================================+" << endl;
	cout << "" << endl;
}

//Ask player for its name so it can be inputted in the ui
void PlayerCreation() {
	cout << "Enter Character Name: " << endl;
	cout << "\n> ";
	cin >> playerName;
}

//Game intro that displays character 1 for 1
void Intro() {
	system("CLS");

	char myStory[] = {

		"You wake up in a cold room.\n"
		"You remember that your name is: "

	};
	for (unsigned int x = 0; x < strlen(myStory); x++) {
			
		cout << myStory[x];
			
		Sleep(50);
			
	}
	for (unsigned int x = 0; x < playerName.size(); x++) {

		cout << playerName[x];

		Sleep(50);

	}
	cout << endl;
	Sleep(200);
	char myStory2[] = {

	"\nNext to you you find a flashlight! With the light you look around the room.\n"
	"You found a sword in the corner of the room.\n"
	"You take the sword and you want to discover the unknown rooms in this place.\n "

	};
	for (unsigned int x = 0; x < strlen(myStory2); x++) {

		cout << myStory2[x];

		Sleep(50);

	}
	cout << endl;
	system("Pause");

}

void UserInterface() {
	cout << "+=======================================================================================================+" << endl;
	cout << "|                                         -= Cringy Dungeons =-                                         |" << endl;
	cout << "+==========================+=================================================+==========================+" << endl;
	cout << "| Name:   " << playerName;
	cout.width(18 - playerName.size());
	cout << "|" << endl;
	cout << "| Health: " << playerHealth;
	if (playerHealth < 10) {
		cout.width(17);
	}
	else if (playerHealth <= 99) {
		cout.width(16);
	}
	else if (playerHealth >= 100) {
		cout.width(15);
	}
	cout << "|" << endl;
	cout << "| Damage: " << playerDamage;
	if (playerDamage < 10) {
		cout.width(17);
	}
	else if (playerDamage >= 10) {
		cout.width(16);
	}
	else if (playerDamage >= 100) {
		cout.width(15);
	}
	cout << "|" << endl;
	cout << "| Level:  " << playerLevel;
	if (playerLevel < 10) {
		cout.width(17);
	}
	else if (playerLevel >= 10) {
		cout.width(16);
	}
	else if (playerLevel >= 100) {
		cout.width(15);
	}
	cout << "|" << endl;
	cout << "+==========================+" << endl;
	cout << endl;
	cout << "+==========================+=================================================+==========================+" << endl;
	cout << "|                                   -=  What would you like to do?  =-                                  |" << endl;
	cout << "|                                     (F)orwards (R)est (B)ackwards                                     |" << endl;
	cout << "+=======================================================================================================+" << endl;
	cout << endl;
}
void CombatUserInterface() {
	cout << "+=======================================================================================================+" << endl;
	cout << "|                                         -= Cringy Dungeons =-                                         |" << endl;
	cout << "+==========================+=================================================+==========================+" << endl;
	cout <<  "| Name:   " << playerName;
	cout.width(18 - playerName.size());
	cout << "|";
	cout.width(59);
	cout << "| Name:   " << randomEnemyName;
	cout.width(18 - randomEnemyName.size());
	cout << "|" << endl;
	cout << "| Health: " << playerHealth;
	if (playerHealth <= 9) {
		cout.width(17);
	}
	else if (playerHealth <= 99) {
		cout.width(16);
	}
	else if (playerHealth >= 100) {
		cout.width(15);
	}
	cout << "|";
	cout.width(59);
	cout << "| Health: " << randomEnemyHealth;
	if (randomEnemyHealth <= 9) {
		cout.width(17);
	}
	else if (randomEnemyHealth <= 99) {
		cout.width(16);
	}
	else if (randomEnemyHealth >= 100) {
		cout.width(15);
	}
	cout << "|" << endl;
	cout << "| Damage: " << playerDamage;
	if (playerDamage < 10) {
		cout.width(17);
	}
	else if (playerDamage >= 10) {
		cout.width(16);
	}
	else if (playerDamage >= 100) {
		cout.width(15);
	}
	cout << "|";
	cout.width(59);
	cout << "| Damage: " << dmg[randomEnemyLevel];
	if (dmg[randomEnemyLevel] < 10) {
		cout.width(17);
	}
	else if (dmg[randomEnemyLevel] >= 10) {
cout.width(16);
	}
	else if (dmg[randomEnemyLevel] >= 100) {
	cout.width(15);
	}
	cout << "|" << endl;
	cout << "| Level:  " << playerLevel;
	if (playerLevel < 10) {
		cout.width(17);
	}
	else if (playerLevel >= 10) {
		cout.width(16);
	}
	else if (playerLevel >= 100) {
		cout.width(15);
	}
	cout << "|";
	cout.width(59);
	cout << "| Level:  " << randomEnemyLevel;
	if (randomEnemyLevel < 10) {
		cout.width(17);
	}
	else if (randomEnemyLevel >= 10) {
		cout.width(16);
	}
	else if (randomEnemyLevel >= 100) {
		cout.width(15);
	}
	cout << "|" << endl;

	cout << "+==========================+";
	cout.width(77);
	cout << "+==========================+" << endl;
	cout << endl;

}

//Combat system for the game
void Combat() {
	string playerAttack;
	//While loop that runs while player and the monster still lives
	while (playerHealth >= 1 && randomEnemyHealth >= 1) {

		system("CLS");
		CombatUserInterface();
		cout << "+==========================+=================================================+==========================+" << endl;
		cout << "|                                   -=  What would you like to do?  =-                                  |" << endl;
		cout << "|                                         (A)ttack (B)lock (R)un                                        |" << endl;
		cout << "+=======================================================================================================+" << endl;

		cout << endl;
		cout << "> ";
		cin >> playerAttack;
		//Checks players input if its correct
		if (playerAttack == "A" || playerAttack == "a" || playerAttack == "Attack" || playerAttack == "attack") {
			int c = rand() % 100 + 1;
			if (c <= 79) {
				randomEnemyHealth -= playerDamage;
				cout << "You attacked the enemy and did: " << playerDamage << " Damage" << endl;
				Sleep(500);
				cout << randomEnemyName << " attacked you and did: " << dmg[randomEnemyLevel] << " Damage" << endl;
				playerHealth -= dmg[randomEnemyLevel];
				Sleep(500);
				system("pause");
			}
			else if (c >=80) {
				cout << "You have missed your attack!" << endl;
				cout << randomEnemyName << " attacked you and did: " << dmg[randomEnemyLevel] << " Damage" << endl;
				playerHealth -= dmg[randomEnemyLevel];
				Sleep(1000);
			}
		}
		else if (playerAttack == "B" || playerAttack == "b" || playerAttack == "Block" || playerAttack == "block") {
			int c = rand() % 100 + 1;
			if (c >= 50) {
				cout << "you have succesfully block the enemy's attack! and hit the enemy for: " << playerDamage << endl;
				randomEnemyHealth -= playerDamage;
				Sleep(1000);
			}
			else {
				cout << "You couldn't block the enemy's attack and you took damage! :C" << endl;
				cout << randomEnemyName << "Damaged you for:"<< dmg[randomEnemyLevel] << endl;
				playerHealth -= dmg[randomEnemyLevel];
				Sleep(1000);
			}
		}
		else if (playerAttack == "R" || playerAttack == "r" || playerAttack == "Run" || playerAttack == "run") {
			int c = rand() % 100 + 1;
			if (c >= 50) {
				cout << "You have succesfully fleed the battle!" << endl;
				Sleep(1000);
				system("CLS");
				Game();
			}
			else {
				cout << "You tried to escape but couldn't do it. \nThe enemy attacks you!" << endl;
				playerHealth -= dmg[randomEnemyLevel];
				Sleep(1000);

			}
		}
		else {
			cout << "That is not a command that i recognize!" << endl;
			Sleep(1000);
		}
		//returns the player back to the game so he can play on
		if (randomEnemyHealth <= 0) {
			randomEnemyHealth = 0;
			system("CLS");
			//grants player exp after killing enemy
			cout << "You have defeated the enemy!" << "and you are rewarded: " << randomEnemyLevel * 10 << " Exp!" << endl;
			playerExp += randomEnemyLevel * 10 ;
			if (playerExp >= expNeedded){
				playerExp -= expNeedded;
				playerLevel++;
				cout << "you have went a level up!" << endl;
			}
			
			Sleep(1000);
			system("CLS");
			Game();
		}
		//returns player back to main menu upon death
		if (playerHealth <= 0) {
			playerHealth = 0;
			system("CLS");
			cout << "You have died :C, Better Luck next time!" << endl;
			Sleep(1000);
			alive = false;
		}		
	}
}
