#include <iostream>

int main() {
	
	int n;

//This part takes care of the preliminary question
	std::cout << "Enter N" << std::endl;
	std::cin >> n;

//This is the Sieve in itself
	bool prime[n-1];
	for (int a = 0; a < n-1; a += 1) { prime[a] = true; }
	int p;
	for (int x = 0; x <= n; x += 1) {
		if (prime[x] == false) {
		} else {
			p=x+2;
			std::cout << p << " ";
			for (int y = 2; y <= ((float) (n))/((float) (p)); y += 1) {
				prime[(p*y)-2] = false;
			}
		}
	}
	std::cout << std::endl;

	return 0;

}
