#include <iostream>
#include "head_3.h"

void userMenu() {
	std::cout << "\nИмеется массив строк. На том же месте, не заводя других массивов, слова записываются в обратном порядке,\n";
	std::cout << "Задание №3(вар.4) выполнил Борисов Артём, гр. 453502\n";
	std::cout << "————————————————————————————————————————————————————\n";
}

void input_data(char** lines, int rows, int cols) {
	int index = 0;
	for (int i = 0; i < rows; i++) {
		int j = 0;
		char c;

		std::cout << "Введите строку №" << i + 1 << "(пробелы только между словами): ";
		while ((c = static_cast<char>(getchar())) != '\n' && j < cols - 1) {

			lines[i][j++] = c;
		}
		lines[i][j] = '\0';

		for (int k = 0; k < j; k++) {
			lines[0][index++] = lines[i][k];
		}

		if (i != rows - 1) {
			lines[0][index++] = ' ';
		}
	}

	lines[0][index] = '\0';
}

char* reverse_string(char** lines) {
	char* source = lines[0];
	char* target = lines[1];

	int len = 0;
	while (source[len] != '\0') len++;

	int targetIndex = 0;

	for (int i = len - 1; i >= 0; --i) {
		if (source[i] == ' ' || i == 0) {
			int wordStart = (source[i] == ' ') ? i + 1 : i;
			while (source[wordStart] != ' ' && source[wordStart] != '\0') {
				target[targetIndex++] = source[wordStart++];
			}
			if (i > 0) {
				target[targetIndex++] = ' ';
			}
		}
	}

	target[targetIndex] = '\0';
	return lines[1];
}

int int_check(int num) {
	while (std::cin.fail() || std::cin.peek() != '\n' || num < 2) {
		std::cin.clear();
		std::cin.ignore(10000000, '\n');
		std::cout << "Неправильный ввод, попробуйте снова: ";
		std::cin >> num;
	}
	return num;
}

void cleanBuf() {
	std::cin.clear();
	std::cin.ignore(1000000, '\n');
}

std::string CheckUserInput(std::string userInput) {
	while (!(userInput.size() == 1 && (userInput[0] == 'n' || userInput[0] == 'N' || userInput[0] == 'y' || userInput[0] == 'Y'))) {
		std::cout << "Неправильный ввод, попробуйте снова: ";
		std::getline(std::cin, userInput);
	}
	return userInput;
}