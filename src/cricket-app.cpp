#include"game.h"
using namespace std;
int main(){
Game game;
game.welcome();

cout<<"press enter to countinue"<<endl;
cin.get();
int cho;
cout<<"1-player Automatic will be printed"<<endl;
cout<<"2-you can take player by yourself"<<endl<<endl;
cout<<"enter your choice";
cin>>cho;
switch(cho){
case 1:
	game.showPlayer();
	break;
case 2:
	game.showPlayers();
	break;
}
cout<<"\npress enter to continue"<<endl;
cin.get();

game.selectPlayer();
}
