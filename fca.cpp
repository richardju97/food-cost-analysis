// fca.cpp

#include <iostream>
#include <string>
#include "fca.h"

using namespace std;

class MealStats {

	vector<double> costs;

	public:
		
		int addMeal() {
			return 0;
		}

		double calcMean() {
			return 0;			
		}
};


int main(int argc, char* argv[]) {
/*
	string meal;
//	string scost;
	double cost;
	
	cout << "This is fca.cpp" << endl;	
	cout << "Enter what food item you ate just now" << endl;
	getline(cin, meal);

	cout << "How much did this cost?" << endl;
//	getline(cin, scost);
	cin >> cost;

	cout << "You ate " << meal << " for $" << cost << endl;
*/

	int select = -1;

	cout << "Please select an option:" << endl;
	cout << "1. Add a meal." << endl;
	cout << "2. Calculate Meal Statistics." << endl;
	cout << "0. Exit Program." << endl;

	if (select == 1) {

	} else if (select == 2) {

	} else if (select == 0) {

	} else {
		cout << "Please select a valid option." << endl;
	}	

	return 0;
}


