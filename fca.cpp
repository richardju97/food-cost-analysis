// fca.cpp

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {

	string meal;
	string scost;
	double cost;
	
	cout << "This is fca.cpp" << endl;	
	cout << "Enter what food item you ate just now" << endl;
	getline(cin, meal);

	cout << "How much did this cost?" << endl;
//	getline(cin, scost);
	cin >> cost;

	cout << "You ate " << meal << " for $" << cost << endl;

	return 0;
}


