#include <iostream>
#include "stdio.h"


bool getbit (int num, int i) {
  return((num & (1 << i)) !=0);
}


int updatebit(int num, int i, int v) {
  int mask  = ~(1 << i);
  return (num & mask) | (v <<  i) ;
}

//N = 1024, M = 19, i = 2, j = 6

int main(int argc, char const *argv[]) {

  int m,n,i,j;

  std::cout << "Enter N and M" << std::endl;
  std::cin >> n >> m;
  std::cout << "Enter i and j" << std::endl;
  std::cin >> i >> j;

  int m_count = 0;
  for (int k = i; k <= j; k++) {
    int kth_bit_of_m = getbit(m,m_count);
    // std::cout << kth_bit_of_m << std::endl;
     n = updatebit(n,k,kth_bit_of_m);
    //  std::cout << n << std::endl;
     m_count++;
  }
  std::cout.write(reinterpret_cast<const char*>(&n), sizeof n);
    // std::cout << "N = " << n << ", M = " << m << ", i = " << i << ", j = " << j << std::endl;
  return 0;
}
