#include "TransformData.hpp"
#include <iostream>
#include <bitset>

int main(int argc, char const *argv[]) {
  std::cout << "Podaj liczbe: " << std::endl;
  int val = 0;
  std::cin >> val;
  std::cout << std::endl << TransformData::DecToBin(val) << std::endl;
  std::bitset<8> bitSet(val);
  int count = 8;
  for (size_t i = 0; i < count; i++)
  {
      std::cout << std::endl  << i << ": " << bitSet[i];
  }
  std::cout << std::endl; 
  return 0;
}
