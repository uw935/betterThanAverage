#include <iostream>
#include <vector>

using std::vector;
using std::cout;


bool betterThanAverage(vector<int> classPoints, int yourPoints) {
	short int AverageNum = 0;

	for (auto it = classPoints.begin(); it != classPoints.end(); ++it) {
		AverageNum += *it;
	}

	return (AverageNum / classPoints.size()) < yourPoints; // finding average of nums and compare with our point
}

int main() {
	cout << betterThanAverage({ 8, 8, 8, 8, 10, 8, 6, 4, 4 }, 8);

	return 0;
}





