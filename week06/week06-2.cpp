// next week exam
// SOIT108_ADVANCE_014B

#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int ten = 1;

	while (N > 0) {
		int now = N % 10 * ten;
		ten *= 10;
		N /= 10;
		cout << now << " ";
	}
}
