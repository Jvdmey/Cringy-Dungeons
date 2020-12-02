#include "Header.h"

string menuChoise;
int rE;
bool alive;

//Menu and game function
void Menu() {
	//Draw Menu
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "\t\t\t+====================================================+" << endl;
	cout << "\t\t\t|                                                    |" << endl;
	cout << "\t\t\t|                      1. Start                      |" << endl;
	cout << "\t\t\t|                     2. Controls                    |" << endl;
	cout << "\t\t\t|                                                    |" << endl;
	cout << "\t\t\t+====================================================+" << endl;
	
	cout << "\n> ";
	cin >> menuChoise;

	if (menuChoise == "1" || menuChoise == "Start" || menuChoise == "start") {
		alive = true;
		playerHealth = 100;
		playerLevel = 1;
		playerExp = 0;

		system("CLS");
		Header();
		PlayerCreation();
		Intro();
		Game();
	}
	else if (menuChoise == "2" || menuChoise == "Controls" || menuChoise == "controls") {
		system("CLS");
		cout << "+============================-={English}=-===========================+" << endl;
		cout << "|" << " Player moves when user gives directional input. for example: " << "|" << endl;
		cout << "+====================================================================+" << endl;
		cout << "|              F or Forwards, R or Rest, B or Backwards              |" << endl;
		cout << "+====================================================================+" << endl;
		cout << endl;
		cout << "+=============================-={Dutch}=-============================+" << endl;
		cout << "|" << " Speler beweegt door middel van directionale input Zoals dit: " << "|" << endl;
		cout << "+====================================================================+" << endl;
		cout << "|              F or Forwards, R or Rest, B or Backwards              |" << endl;
		cout << "+====================================================================+" << endl;
		cout << "Type: Back to go to the main menu!" << endl;
		cin >> menuChoise;
		if (menuChoise == "Back" || menuChoise == "back") {
			system("CLS");
			Header();
			Menu();
		}
	}
	else {
		cout << "That is not a command that i recognize!" << endl;
		Sleep(1000);
		Menu();
	}
}
void Game() {

	//Chooses a random enemy
	rE = rand() % 4 + 1;
	//Defines the enemies.
	Enemy* Weeb = new Enemy("Weeb", 1, 40);
	Enemy* EpicGamer = new Enemy("Epic Gamer", 1, 50);
	Enemy* FortniteBoii = new Enemy("FortniteBoii", 1, 70);
	Enemy* WobloxKid = new Enemy("WobloxKid", 1, 100);
	Enemy* Enemies[4] = { Weeb, EpicGamer, FortniteBoii,WobloxKid };
	randomEnemyName = Enemies[rE]->enemyName;
	randomEnemyHealth = Enemies[rE]->enemyHealth;
	randomEnemyLevel = playerLevel + 1;
	randomEnemyHealth = 40 + 5 * randomEnemyLevel;

	while (alive == true) {
		system("CLS");
		UserInterface();
		cout << "> ";
		cin >> cmd;
		if (cmd == "F" || cmd == "f" || cmd == "Forward" || cmd == "forward" ) {
			int temp = rand() % 100 + 1;
			cout << "Walking forward.." << endl;
			Sleep(500);
			if (temp >= 50) {
				cout << "A enemy charges upon you!" << endl;
				system("pause");
				Sleep(500);
				rE = rand() % 5 + 1;
				Combat();
			}
			else {
				cout << "Nothing happened!" << endl;
				Sleep(500);
			}

		}
		else if (cmd == "R" || cmd == "r" || cmd == "Rest" || cmd == "rest") {
			int i = rand() % 100 + 1;
			if (i >= 70) {
				cout << "You take a moment to sit down .." << endl;
				Sleep(500);
				int rest = 100 - playerHealth;
				playerHealth += rest;
				cout << "You have rested and restored your health back to full!" << endl;
				Sleep(1000);
			}
			else if (i<70) {
				cout << "You were to scared to rest right here!" << endl;
			}
		}
		else if (cmd == "B" || cmd == "b" || cmd == "Backwards" || cmd == "backwards") {
			int temp = rand() % 100 + 1;
			cout << "Walking backwards.." << endl;
			Sleep(500);
			if (temp >= 50) {
				cout << "A enemy charges upon you!" << endl;
				system("pause");
				Sleep(500);
				Combat();
			}
			else {
				cout << "Nothing happened!" << endl;
				Sleep(500);
			}
		}
		else {
			cout << "That is not a command that i recognize!" << endl;
		Sleep(1000);
		}
	}
	system("CLS");
	Header();
	Menu();
}

int main()
{
	Header();
	Menu();
}