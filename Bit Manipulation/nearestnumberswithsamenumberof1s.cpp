#include "stdio.h"
#include <iostream>


bool getbit(int num, int i) {
  return((num & (1 << i)) != 0);
}

int swapoddandevenbits (int num) {
   return ( (num & 0xaaaaaaaa) >> 1) | ((num & 0x55555555) << 1);
}

void find_nearest_numbers_with_same_number_of_1s(int num) {

  int lastbit = getbit(num,0);

  if(lastbit == 0) {
    std::cout << "next largest number of " << num <<  std::endl;
  }

}
void find_missing_element(int array[]) {

  for (int i = 0; i < 9; i++) {
    
  }

}
int main(int argc, char const *argv[]) {

  int num = 0;
  std::cout << "Enter the num?" << std::endl;
  std::cin >> num;
  std::bitset<8> bit_num = num;
  std::cout << num << " = " << bit_num << std::endl;

  int new_num = swapoddandevenbits(num);
  std::bitset<8> bit_new_num = new_num;
  std::cout << new_num << " = " << bit_new_num << std::endl;
  int array[9] = {0,1,2,3,4,6,7,8,9};
  find_missing_element(array);

  // find_nearest_numbers_with_same_number_of_1s(num);
  return 0;
}
