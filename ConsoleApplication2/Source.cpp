
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
		cout << "Enter values: ";
		double val1, val2, val3, val4, val5;
		cin >> val1 >> val2 >> val3 >> val4 >> val5;
		double vals[5] = { val1, val2, val3, val4, val5 };

		double avg;
		avg = (val1 + val2 + val3 + val4 + val5) / 5;

		double max = vals[4];
		for (int i = 0; i < 4; i++) {
			if (vals[i] > max)
				max = vals[i];
		}
		cout << "The average is " << avg << " and the max is " << max << ".\n";

	return 0;
}