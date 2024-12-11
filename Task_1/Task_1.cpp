#include <iostream>
#include "Test_1/head_1.h"

int main() {

    while (true) {
        // Menu
        userMenu();

        constexpr int max_length = 80;
        char* string = new char[max_length + 1];

        inputCheck(string, max_length);

        char* even = findEvenGroups(string);

        std::cout << "Ваша строка: |" << string << "|\n";
        std::cout << "Группы с чётными элементами: |" << even << "|";


        delete[] even;
        delete[] string;

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
