#include <iostream>
using namespace std;

//Allows to access elements in struct
//(a pointer name to the structure) -> (Member of a struc)

 struct student 
 {
    char name[80];
    int age;
    float percentage;
};
 


// Creating the structure object. How the hell?????????????????????????
struct student* emp = NULL;
//This creates a pointer named "emp" that is void for now.
//Since student is a user defined struct. Do we need to have struct at
//the beginning of the code.



int main()
{
   
    // Assigning memory to struct variable emp
    emp = (struct student*)
        malloc(sizeof(struct student));
 
    // Assigning value to age variable
    // of emp using arrow operator
    emp->age = 18;
 
    // Printing the assigned value to the variable
    cout <<" "<< emp->age;
 
    return 0;
}