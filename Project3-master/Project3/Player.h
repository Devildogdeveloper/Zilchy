#pragma once
#include <iostream>
#include <string>

using namespace std;

class Player
{
public:
	Player();
	Player(string name);
	void AddScore(int value);
	int Score();
	void SetInGame();
	bool InGame();

protected:
	Player();

	Player(string name, int score, int roundScore, bool isInGame);
	
	string Name;
	int score;
	int roundScore;
	bool InGame;

	~Player();

private:
	
};

