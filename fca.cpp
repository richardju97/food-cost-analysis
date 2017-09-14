// fca.cpp

#include <iostream>
#include <string>
#include "fca.h"

using namespace std;

MealStats::MealStats() {

}

int MealStats::addMeal(double c) {
	return 0;
}

double MealStats::calcMean(int n) {
	return 0;
}

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
	MealStats myMealStats();	

	int select = -1;

	cout << "Please select an option:" << endl;
	cout << "1. Add a meal." << endl;
	cout << "2. Calculate Meal Statistics." << endl;
	cout << "0. Exit Program." << endl;

	if (select == 1) {
		double cost;
		cin >> cost;
		myMealStats.addMeal(cost);

	} else if (select == 2) {

		myMealStats.calcMean(3);

	} else if (select == 0) {

		cout << "Thanks for using our program!" << endl;	

	} else {
		cout << "Please select a valid option." << endl;
	}	

	return 0;
}


