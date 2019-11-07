#include <iostream>
#include <string>

int main() {
	
	int n;
	std::string str;

//This part takes care of the preliminary questions
	std::cout << "Which number of letter do you want to input?" << std::endl;
	std::cin >> n;
	std::cout << "Please, input a word of " << n << " letters." << std::endl;
	std::cin >> str;

//This one checks the number of letter in the word
	if (str.length() != n) {
		std::cout << "Not the good number of letters, sorry!" << std::endl;
		return 0;
	}

//This one checks if the word is a palindrome
	bool pal = true;
	for (int x = 0; x < n/2; x += 1) {
		if (str[x] != str [str.length() - 1 - x]) {
			pal = false;
		}
	}
	if (pal == true) {
		std::cout << "Your word is a palindrome! Congratulations!" << std::endl;
	} else {
		std::cout << "Your word is unfortunately not a palindrome. Brave yourself, you can do it!" << std::endl;
	}

	return 0;

}
