#include <iostream>
#include <cstdlib>
#include <string>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Введите слово:" << std::endl;

	std::string string{};

	std::getline(std::cin >> std::ws, string);
	std::cout << "Вы ввели:" << std::endl << string << std::endl;

	return EXIT_SUCCESS;
}