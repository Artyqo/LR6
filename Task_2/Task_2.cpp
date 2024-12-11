#include <iostream>
#include <cstring>
#include "Test_2/head_2.h"

int main() {
    while (true) {
        // Menu
        userMenu();

        char* string = new char[1000];
        char* symbol = new char[3];
        char* sub_string = new char[1000];

        std::cout << "Введите строку: ";
        std::cin.getline(string, 1000);

        std::cout << "Введите символ: ";
        std::cin.getline(symbol, 3);

        char_check(symbol);

        std::cout << "Введите подстроку: ";
        std::cin.getline(sub_string, 1000);

        int start = find_index(string, symbol);

        if (start != -1) {
            char* new_string = insert_substring(string, sub_string, start);
            std::cout << "Новая строка: " << new_string << std::endl;
            delete[] new_string;
        } else {
            std::cout << "Символ не найден в строке.\n";
        }

        delete[] string;
        delete[] symbol;
        delete[] sub_string;

        // Restart
        std::string userInput;
        std::cout << "\nRestart the programme?(y/n): ";
        std::getline(std::cin, userInput);

        userInput = CheckUserInput(userInput);

        if (userInput.size() == 1 && (userInput[0] == 'n' || userInput[0] == 'N')) {
            break;
        }
    }

    return 0;
}
