#include <iostream>
using namespace std;


//Structures are pretty much equal to Classes. 
//Class ------ Has all members Private by default.
//Structures-- Has all members Public by default.
//Inheritance is not used with structures for simplicity.


struct Player	
{
//private:				//struct do not need the public keyword for ints content to be used outside its scope.					
	int x, y;				
	int speed;

	void Move(int xa, int ya)		
	{
		x += xa * speed;
		y += ya * speed;
	}
};							





//Use struct mainly when you want to store data or variable.
//Example mathematical vector class. Which is just supposed to be a reperesetation of 2 numbers.
struct Vec2
{
	float x,y;

	void Add(const Vec2& vect) //This is supposed to take Null Vec2. How?????????????????????????????????????????????????
	{
		x += vect.x;
		y += vect.y;
	}

};





int main()
{
	Player player;			
	player.x=5;
	player.y=5;
	player.speed=1;

	player.Move(1,-1);


	cout << player.x << endl << player.y;
}