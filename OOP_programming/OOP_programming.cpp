// OOP_programming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<list>
using namespace std;
//class is a user defined datatype.
class cars {
public://access modifier to make these attributes accessible outside of this function.
	string make;
	string color;
	int miles=0;
	list<string>specs;

};

int main()
{
	cars sedan;
	sedan.make = "Honda Civic";
	sedan.color = "white";
	sedan.miles = 23;
	sedan.specs = { "2 doors","sunroof","air cond"};

	cout << "Make: " << sedan.make << endl;
	cout << "Color: " << sedan.color << endl;
	cout << "Miles: " << sedan.miles << endl;
	cout << "Specs: " << endl;
	for (string specs : sedan.specs) {
		cout << specs << endl;
}
system("pause>0"); 
}

