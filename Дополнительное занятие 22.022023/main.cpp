
#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	int sum;
	int counter;

	// Задача 1. Бесконечное кол-во чисел

	/*std::cout << "Задача 1.\n";
	sum = 0;
	counter = -1;
	do {
		std::cout << "Введите число ->";
		std::cin >> n;
		sum += n;
		counter++;


	} while (n); // n != 0
	if (counter == 0)
		std::cout << "средн. арифм.: 0\n\n";
	else
		std::cout << "средн. арифм.:" << (double)sum / counter << "\n\n";*/


	// Задача 2. 
	/*std::cout << "Задача 2. Ввведите число -> ";
	std::cin >> n;
	if (n <= 0)
		std::cout << "Ошибка ввода!\n";
	else {

		sum = 0;
		counter = 0;
		do {
			sum += n;
			counter++;

		} while (sum <= 100);

		std::cout << counter;
	}*/

	// Задача 3. Молекула
	int width, height;
	std::cout << "Задача 3. \nВведите ширину -> ";
	std::cin >> width;
	std::cout << "Введите высоту -> ";
	std::cin >> height;
	for (int i = 0; i < height; i++) {
		for (int j = 0; j < width; j++)
			if (i == 0 || i == height / 2 || i == height - 1)
				std::cout << "- ";
			else
				if (j % 2 == 0)
					std::cout << "| ";
				else
					std::cout << "  ";
		std::cout << '\n';

	}



	return 0;

}

 