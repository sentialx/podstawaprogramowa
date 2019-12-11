#include <iostream>

int horner(int wsp[],int st, int x) {
	int result = wsp[0];

	for (int i = 1; i <= st; i++)
		result = result * x + wsp[i];

	return result;
}

int main() {
    // Example program
    int wsp[] = { 1, 2, -1 };
	std::cout << horner(wsp, 2, 2);

	return 0;
}
