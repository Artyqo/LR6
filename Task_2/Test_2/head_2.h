#pragma once
#include <string>

#ifndef HEAD_H
#define HEAD_H

void userMenu();
int find_index(const char*, const char*);
char* insert_substring(const char*, const char*, int);
void cleanBuf();
void char_check(char*);
std::string CheckUserInput(std::string);

#endif //HEAD_H