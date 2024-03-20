#include <iostream>
using namespace std;


class Player				//This is like creating a new type.
{
public:						//Without making variables public, they are not visible from outside the class. Class is private by default.
	int x, y;				//struct can be used as a workaround for this. struct is public by default.
	int speed;

	void Move(int xa, int ya)		//Functions inside classes are methods.
	{
		x += xa * speed;
		y += ya * speed;
	}

};							//A special semi colan is needed at the end of defining a funciton.


//Functions outside the Player class.
// void Move(Player& player, int xa, int ya)		//Since the Player object is going to be modified this should be passed as a reference.
// {
// 	player.x += xa * player.speed;
// 	player.y += ya * player.speed;
// }


int main()
{
	Player player;			//Vairables created using Class types are "objects". New object is called an "instance"
	player.x=5;
	player.y=5;
	player.speed=1;


	//Move(player, 1, -1);
	player.Move(1,-1);


	cout << player.x << endl << player.y;
	//return player.x;
}