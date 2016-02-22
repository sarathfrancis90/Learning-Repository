#include <iostream>
#include <string>


template <typename T>
inline T const& Max(T const& a, T const& b) {
  return a>b?a:b;
}
int main(int argc, char const *argv[]) {
  int i = 9, j = 10;
  
  std::cout << "Max(i,j) is " << Max(i,j) << std::endl;
  return 0;
}
