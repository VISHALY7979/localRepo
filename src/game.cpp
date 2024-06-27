#include"game.h"
using namespace std;
Game::Game(){
	playerPerTeam=4;
	maxBalls=6;
	totalPlayers=11;

	players[0]="Virat";
	players[1]="Rohit";
	players[2]="SURYA KUMAR YADAV";
	players[3]="KL-Rahul";
	players[4]="Ishan";
	players[5]="Subhman";
	players[6]="Bumrah";
	players[7]="MS-Dhoni";
	players[8]="Sachin-Tendulkar";
	players[9]="Hardik";
	players[10]="Jadeja";

	isFirstInnings=false;
	teamA.name="Team-A";
	teamB.name="Team-B";
}
void Game::welcome(){
	cout<<"|=================================================|"<<endl;
	cout<<"|----WELCOM TO VIRTUAL CRICKET GAME---------------|"<<endl;
	cout<<"|=================================================|"<<endl;
	cout<<endl<<endl;


	cout<<"|-------------------------------------------------|"<<endl;
	cout<<"|================INSTRUCTION======================|"<<endl;
	cout<<"|-------------------------------------------------|"<<endl;
	cout<<endl;
	cout<<"|-------------------------------------------------|"<<endl;
	cout<<"|1.--- create 2 teams(Team-A and Team-B with 4|---|"<<endl;
	cout<<"|--player each) from a given pool of 11 players.--|"<<endl;
	cout<<"|2. Lead the toss and decide the choice of play.--|"<<endl;
	cout<<"|3.--- Each innings will be of 6 balls.-----------|"<<endl;
	cout<<"--------------------------------------------------|"<<endl;
}
void Game::showPlayer(){
	cout<<"----------------------------------"<<endl;
	cout<<"||------POOL OF 11 PLAYERS------||"<<endl;
	cout<<"----------------------------------"<<endl;

	for(int i=0;i<totalPlayers;i++){
		cout<<"\t\t["<<i<<"]"<<players[i]<<endl;
	}
}

void Game::showPlayers(){

	cout<<"----------------------------------"<<endl;
	cout<<"||------POOL OF 11 PLAYERS------||"<<endl;
	cout<<"----------------------------------"<<endl;


	for(int i=0;i<totalPlayers;i++){
		cout<<"enter players name"<<"["<<i<<"]:"<<endl;
		cin>>players[i];
	}
	for(int i=0;i<totalPlayers;i++){
		cout<<"\t\t["<<i<<"]"<<players[i]<<endl;
	}
}

int Game::takeInteger(){
	int n;
	while(!(cin>>n)){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(),'\n');
		cout<<"invalid input! please try again";
	}
	return n;
}
void Game::selectPlayer(){
	cout<<"|--------------------------------------|"<<endl;
	cout<<"|==========CREATE TEAM-A AND TEAM-B====|"<<endl;
	cout<<"|--------------------------------------|"<<endl<<endl;

	for(int i=0;i<playerPerTeam;i++){
			//add player to team-A
		    teamASelection:
			cout<<endl<<"select player"<<i+1<<"of team-A:"<<endl;
			int playerIndexTeamA=takeInteger();
			if(playerIndexTeamA<0||playerIndexTeamA>10){
				cout<<"please enter given index value"<<endl;
				goto teamASelection;
			}
			else
			{
				Player teamAPlayer;
				teamAPlayer.name=players[playerIndexTeamA];
				teamA.players.push_back(teamAPlayer);
			}

			//add player to team-B
			teamBSelection:
			cout<<endl<<"select player"<<i+1<<"of team-B:"<<endl;
			int playerIndexTeamB=takeInteger();
			if(playerIndexTeamB<0||playerIndexTeamB>10)
			{
				cout<<"please enter given index value"<<endl;
				goto teamBSelection;
			}
			else
			{
			Player teamBPlayer;
			teamBPlayer.name=players[playerIndexTeamB];
			teamB.players.push_back(teamBPlayer);
			}

	}
	}
















