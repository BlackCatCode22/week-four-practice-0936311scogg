#include <iostream>
#include <string>

int main()
{
	for (int i = 0; i < 5; i++) {
		std::cout << i << std::endl;
	}

	std::cout << std::endl;

	// Print each character on a new line
	std::string megaString = "abcdefghij";
	for (int i = 0; i < megaString.length(); i++) {
		std::cout << megaString[i] << std::endl;
	}

	// Reverse a string
	std::string reverseString = "";
	for (int i = megaString.length(); i >= 0; i--) {
		std::cout << megaString[i] << std::endl;
		reverseString += megaString[i];
	}
	std::cout << std::endl << reverseString << std::endl;

	// Char array
	char megaChars[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

	std::cout << "\nDirectly printing the array works just fine for me for some reason?" << std::endl;
	std::cout << megaChars << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cout << "megaChars[" << i << "] = " << megaChars[i] << std::endl;
	}


	return 0;
}
