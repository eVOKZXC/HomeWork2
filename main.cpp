#include "Header.h"


int main() {

	srand(time(0));
	int massive[20];
	for (auto& i : massive) i = rand() % 50 - 25;
	for (auto i : massive) cout << i << " ";
	cout << endl;

	changeMassive(massive, [&massive](int sum) {
		if (sum == massive[0])
			reverse(begin(massive), end(massive));
		else if (sum > massive[0])
			sort(begin(massive), end(massive));
		else
			sort(begin(massive), end(massive), [](int a, int b) {
			return a > b;
				});
	});

	for (auto i : massive) cout << i << " ";


}