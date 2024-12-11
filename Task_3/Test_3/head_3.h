#pragma once
#include <string>

#ifndef HEAD_H
#define HEAD_H

void userMenu();
void input_data(char**, int, int);
char* reverse_string(char**);
int int_check(int num);
void cleanBuf();
std::string CheckUserInput(std::string);

#endif //HEAD_H