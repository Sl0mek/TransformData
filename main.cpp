#include "TransformData.hpp"
#include <iostream>

int main(int argc, char const *argv[]) {
  std::cout << "Podaj liczbe: " << std::endl;
  int val = 0;
  std::cin >> val;
  std::cout << std::endl << TransformData::DecToBin(val) << std::endl;
  return 0;
}
