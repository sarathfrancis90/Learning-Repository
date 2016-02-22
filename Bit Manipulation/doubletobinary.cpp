#include <iostream>
#include "stdio.h"
#include <vector>


void doubletobinary(double value) {
  if(value >=1 || value <= 0) {
    std::cout << "ERROR !!!" << std::endl;
    return;
  }
  else {
    std::vector<char>char_array;

    char_array.push_back('.');
    while (value > 0) {
      if(char_array.size() >= 32) {
        std::cout << "ERROR !!!" << std::endl;
        return;
      }
      double r = value * 2;
      if( r >= 1) {
        char_array.push_back('1');
        value = r - 1;
      }
      else {
        char_array.push_back('0');
        value = r;
      }
    }
    for (auto i = char_array.begin(); i != char_array.end(); ++i)
    std::cout << *i;
  }
std::cout << std::endl;
}
int main(int argc, char const *argv[]) {

  double num =0;
  std::cout << "Enter the number" << std::endl;
  std::cin >> num;
  doubletobinary(num);
  return 0;
}
