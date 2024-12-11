#include <iostream>

#include "Test_3/head_3.h"

int main() {

    while (true) {
        // Menu
        userMenu();

        int rows;
        std::cout << "Введите кол-во строк(не меньше 2): ";
        std::cin >> rows;
        rows = int_check(rows);
        cleanBuf();

        constexpr int cols = 1000;
        char** lines = new char*[rows];
        for (int i = 0; i < rows; ++i) {
            lines[i] = new char[cols];
        }

        input_data(lines, rows, cols);

        std::cout << "Ваши строки: " << lines[0] << std::endl;

        reverse_string(lines);

        std::cout << "Reversed string: " << lines[1] << std::endl;

        for (int i = 0; i < rows; ++i) {
            delete[] lines[i];
        }
        delete[] lines;

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