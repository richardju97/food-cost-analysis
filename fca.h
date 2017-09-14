// fca.h

#include <vector>

using namespace std;

class MealStats {

	private: 
		vector<double> costs;

	public:
		int addMeal(double c);
		double calcMean(int n); 
		
};
