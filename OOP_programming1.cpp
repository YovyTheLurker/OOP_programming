// OOP_programming.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Constructors=have the same name as your type and don't have a return type.

#include <iostream>
#include<list>
using namespace std;
//class is a user defined datatype.
class cars {
public://access modifier to make these attributes accessible outside of this function.
	string Make;
	string Color;
	int Miles = 0;
	list<string>specs;

	//constructor
	cars(string make, string color) {
		Make = make;
		Color = color;
		Miles = 0;
	}

	void getInfo() {
		cout << "Make: " << Make << endl;
		cout << "Color: " << Color << endl;
		cout << "Miles: " << Miles << endl;
		cout << "Specs: " << endl;
		for (string specs : specs) {
			cout << specs << endl;
		}

	};

};

int main()
{
	cars sedan("Honda Civic","white");
	sedan.specs.push_back("2 doors");
	sedan.specs.push_back("sunroof");
	sedan.specs.push_back("air cond");
	cars sedan2("Toyota Corolla", "Black");

	sedan.getInfo();
	sedan2.getInfo();

//*****************************************************************************************************************
	//repeated code no longer needed commented out.

	//sedan.make = "Honda Civic";
	//sedan.color = "white";
	//sedan.miles = 23;
	//sedan.specs = { "2 doors","sunroof","air cond"};

	//cout << "Make: " << sedan.Make << endl;
	//cout << "Color: " << sedan.Color << endl;
	//cout << "Miles: " << sedan.Miles << endl;
	//cout << "Specs: " << endl;
	//for (string specs : sedan.specs) {
	//	cout << specs << endl;

	//sedan2.make= "Toyota Corolla";
	//sedan2.color = "Black";
	//sedan2.miles = 44;
	//sedan2.specs = { "4 doors","cruise control","GPS nav" };

	//cout << "Make: " << sedan2.Make << endl;
	//cout << "Color: " << sedan2.Color << endl;
	//cout << "Miles: " << sedan2.Miles << endl;
	//cout << "Specs: " << endl;
	//for (string specs : sedan2.specs) {
	//	cout << specs << endl;
	
system("pause>0"); 
}

