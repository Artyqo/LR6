#include <iostream>
#include "head_1.h"

void userMenu() {
	std::cout << "\nВ строке, состоящей из групп нулей и единиц, находятся и выводятся группы с четным количеством символов.\n";
	std::cout << "Задание №1(вар.4) выполнил Борисов Артём, гр. 453502\n";
	std::cout << "————————————————————————————————————————————————————\n";
}

#include <cstring>
#include <cctype>
#include <iostream>

char* findEvenGroups(char* input) {
	int length = (strlen(input));
	char* evenGroups = new char[length + 1];
	evenGroups[0] = '\0';

	int count = 0;
	int groupStart = -1;
	int evenGroupsLength = 0;

	for (int i = 0; i <= length; i++) {
		if (input[i] == '0' || input[i] == '1') {
			if (count == 0) {
				groupStart = i;
			}
			count++;
		}

		if (isspace(input[i]) || input[i] == '\0') {
			if (count > 0 && count % 2 == 0) {
				int groupLength = count;
				if (evenGroupsLength + groupLength + 1 > length) {
					char* temp = new char[evenGroupsLength + groupLength + 2];
					strcpy(temp, evenGroups);
					delete[] evenGroups;
					evenGroups = temp;
				}

				strncat(evenGroups, input + groupStart, count);
				evenGroupsLength += count;

				strncat(evenGroups, " ", 1);
				evenGroupsLength++;
			}
			count = 0;
		}
	}

	// Remove the trailing space, if any
	if (evenGroupsLength > 0 && evenGroups[evenGroupsLength - 1] == ' ') {
		evenGroups[evenGroupsLength - 1] = '\0';
	}

	return evenGroups;
}

char* inputCheck(char* input, int max_length) {
	while (true) {
		std::cout << "Введите строку из 0 и 1 (максимум " << max_length << " символов): ";

		int count = 0;
		char ch;
		bool isValid = true;

		while (true) {
			ch = static_cast<char>(getchar());

			if (ch == '\n') {
				break;
			}

			if (ch != '0' && ch != '1' && ch != ' ') {
				isValid = false;
				cleanBuf();
				break;
			}

			if (count >= max_length) {
				std::cout << "Превышена длина строки. Попробуйте снова.\n";
				cleanBuf();
				isValid = false;
				break;
			}

			input[count++] = ch;
		}

		input[count] = '\0';

		if (!isValid) {
			if (count < max_length) std::cout << "Ошибка, попробуйте ещё раз.\n";
			continue;
		}

		break;
	}

	return input;
}


void cleanBuf() {
	std::cin.ignore(1000000, '\n');
}

std::string CheckUserInput(std::string userInput) {
	while (!(userInput.size() == 1 && (userInput[0] == 'n' || userInput[0] == 'N' || userInput[0] == 'y' || userInput[0] == 'Y'))) {
		std::cout << "Неправильный ввод, попробуйте снова: ";
		std::getline(std::cin, userInput);
	}
	return userInput;
}