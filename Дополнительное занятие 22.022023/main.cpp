
#include <iostream>

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	int sum;
	int counter;

	// ������ 1. ����������� ���-�� �����

	/*std::cout << "������ 1.\n";
	sum = 0;
	counter = -1;
	do {
		std::cout << "������� ����� ->";
		std::cin >> n;
		sum += n;
		counter++;


	} while (n); // n != 0
	if (counter == 0)
		std::cout << "�����. �����.: 0\n\n";
	else
		std::cout << "�����. �����.:" << (double)sum / counter << "\n\n";*/


	// ������ 2. 
	/*std::cout << "������ 2. �������� ����� -> ";
	std::cin >> n;
	if (n <= 0)
		std::cout << "������ �����!\n";
	else {

		sum = 0;
		counter = 0;
		do {
			sum += n;
			counter++;

		} while (sum <= 100);

		std::cout << counter;
	}*/

	// ������ 3. ��������
	int width, height;
	std::cout << "������ 3. \n������� ������ -> ";
	std::cin >> width;
	std::cout << "������� ������ -> ";
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

 