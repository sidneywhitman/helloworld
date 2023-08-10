#include <iostream>

int main()
{
	std::cout << "Hello world!\n";
	std::cout << "It's nice to meet you.\n";
	std::cout << "What's good with you?\n";
	int x{};
	std::cout <<"Enter a number: ";
	std::cin >> x;
	std::cout >> "You entered "<< x <<'\n';

	return 0;
}
