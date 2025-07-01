
#include <iostream>

using std::cout;
using std::cin;

int factorielle(int);

int main()
{
	int n;

	cout << "Entrez la précision voulue:";
	cin >> n;
	
	double total{ 1.0 };

	for (int i = 1; i < n; i++) {
		total += 1 / static_cast<double>(factorielle(i));
	}

	cout << total;
}

int factorielle(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		return n * factorielle(n - 1);
	}
}