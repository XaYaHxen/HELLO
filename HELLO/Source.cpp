#include <iostream>
#include <string>

using namespace std;

int main() //Entry Point
{
	//Local Variable
	string name;

	//Ask the user for their name
	cout << "Enter your name please..." << endl;

	//Get the user's name
	cin >> name;

	//Output the user's name
	cout << "Hello " << name << "!" << endl;

	//Pause the output so the window doesn't close
	system("pause");
	return 0;
}