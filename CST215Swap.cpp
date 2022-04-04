// CST215Swap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

using namespace std;

void badSwap(int x, int y);//Initiates the badSwap
void goodSwap(int& x, int& y);//Initiates the goodSwap
int main()
{
	int normalBank = 50;//The bank account of Joes Coffee
	int hackedBank = 100000;//Bank account of terrorists 

	//Displays the original funds of both
	cout << "Original Funds" << endl;
	cout << "Joe's Coffee Shop Funds: " << normalBank << endl;
	cout << "Terrorist Funds: " << hackedBank << "\n" << endl;

	//Attempts the failed transaction which doesnt swap anything
	cout << "Calling Failed Transaction " << endl;
	badSwap(normalBank, hackedBank);
	cout << "Joe's Coffee Shop Funds: " << normalBank << endl;
	cout << "Terrorist Funds: " << hackedBank <<"\n" << endl;

	//attempts the successful transaction which swaps both account successfully.
	cout << "Transacting Money" << endl;
	goodSwap(normalBank, hackedBank);
	cout << "Joe's Coffee Shop Funds: " << normalBank << endl;
	cout << "Terrorist Funds: " << hackedBank << endl;

	return 0;
}

//The Swap that fails due to using non referenced variables
void badSwap(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}
//Good swap that succeeds due to it using reference variables with the integers
void goodSwap(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}