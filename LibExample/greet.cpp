#include "greet.h"
#include <iostream>

std::string get_greet(const std::string& who) {
  return "Lib:Hello " + who;
}

void print_localtime() {
  std::time_t result = std::time(nullptr);
  std::cout << std::asctime(std::localtime(&result));
}