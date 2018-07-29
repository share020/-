#include<iostream>
#include<string>

int main()
{
	std::string first, last;
	std::cout << "your firstname:";
	std::cin >> first;
	std::cout << "your lastname:";
	std::cin >> last;
	std::cout << "your name is " << first << " " << last << std::endl;
	return 0;
}
