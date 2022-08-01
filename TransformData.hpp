#include <iostream>
#include <string>

class TransformData {
private:
  /* data */
public:
  TransformData();
  ~TransformData();
  static std::string DecToBin(int val) {
    std::string tmp = "";
    int counter = 8;
    while (val > 0) {
      tmp = (val % 2 == 1 ? "1" : "0") + tmp;
      val /= 2;
      counter--;
    }
    while (counter > 0) {
      tmp = "0" + tmp;
      counter--;
    }
    return tmp;
  }
};
