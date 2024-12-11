#include <iostream>
#include "head_2.h"

void userMenu() {
	std::cout << "\nВ тексте после указанного символа вставляется подстрока.\n";
	std::cout << "Задание №2(вар.4) выполнил Борисов Артём, гр. 453502\n";
	std::cout << "————————————————————————————————————————————————————\n";
}

int find_index(const char* str, const char* target) {
	int byte_index = 0;

	while (*str) {
		if (strncmp(str, target, strlen(target)) == 0) {
			if ((*str & 0x80) == 0) {
				++byte_index;
			} else if ((*str & 0xE0) == 0xC0) {
				byte_index += 2;
			}
			return byte_index;
		}
		if ((*str & 0x80) == 0) {
			++str;
			++byte_index;
		} else if ((*str & 0xE0) == 0xC0) {
			str += 2;
			byte_index += 2;
		}
	}

	return -1;
}

char* insert_substring(const char* str, const char* sub_str, int index) {
	size_t sub_str_len = strlen(sub_str);
	size_t str_len = strlen(str);

	if (index < 0 || index > str_len) {
		return nullptr;
	}

	char* new_str = new char[index + sub_str_len + 1];

	for (size_t i = 0; i < index; ++i) {
		new_str[i] = str[i];
	}

	for (size_t i = index; i < index + sub_str_len; ++i) {
		new_str[i] = sub_str[i - index];
	}

	for (size_t i = index + sub_str_len; i < str_len + sub_str_len; ++i) {
		new_str[i] = str[i - sub_str_len];
	}

	new_str[str_len + sub_str_len] = '\0';

	return new_str;
}


void cleanBuf() {
	std::cin.clear();
	std::cin.ignore(1000000, '\n');
}

void char_check(char* symbol) {
	while (std::cin.fail()) {
		cleanBuf();
		std::cout << "Введено больше символов, чем требуется! Попробуйте ещё раз: ";
		std::cin.getline(symbol, 3);
	}
}

std::string CheckUserInput(std::string userInput) {
	while (!(userInput.size() == 1 && (userInput[0] == 'n' || userInput[0] == 'N' || userInput[0] == 'y' || userInput[0] == 'Y'))) {
		std::cout << "Неправильный ввод, попробуйте снова: ";
		std::getline(std::cin, userInput);
	}
	return userInput;
}