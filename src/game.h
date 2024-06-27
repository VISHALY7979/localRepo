#include<iostream>
#include<cstdlib>
#include<ctime>
#include<limits>
#include"team.h"//"player.h",<string>,<vector>
class Game{
public:
	Game();
	bool isFirstInnings;
	int playerPerTeam;
	int maxBalls;
	int totalPlayers;
	std::string players[11];
	Team teamA,teamB;
	Team *battingTeam,*bowlingTeam;
	Player *batsman,*bowler;

	void welcome();
	void showPlayers();
	void showPlayer();
	int takeInteger();
	void selectPlayer();
};
