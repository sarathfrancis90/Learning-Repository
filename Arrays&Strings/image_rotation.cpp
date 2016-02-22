#include "stdio.h"
#include <iostream>
#include <cstring>



void set_pos(int **N_array,int curr_i, int curr_j, int i, int j,int N)  {

  int new_i = curr_j;
  int new_j = (N - 1) - curr_j;

}
void rotate_array(int **N_array,int N) {

  for (int i = 0; i < N/2; i++) {

    for (int j = i ; j < N-1-i ; j++) {

      // set_pos(N_array,i,j,i,j,N,N_array[i][j]);
      // int new_row = j;
      // int new_col = (N-1)-i;
      int  temp = N_array[i][j];
      N_array[i][j] = N_array[N-1-i][i];
      N_array[N-1-i][i] = N_array[N-1-i][N-1-i];
      N_array[N-1-i][N-1-i] = N_array[i][N-1-i];
      N_array[i][N-1-i] = temp;
    }
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N ; j++) {
    std::cout << N_array[i][j] << " ";
    }
    std::cout << "\n";
  }
}
int main(int argc, char const *argv[]) {

int N = 3;

int **N_array;

N_array =  new int *[N];
for (int i = 0; i < N; i++) {
  N_array[i] =  new int [N];
}

for (int i = 0; i < N; i++) {
  for (int j = 0; j < N ; j++) {
    std::cout << "Enter the element in the " << i << "th row " << j << "th column"<< std::endl;
    std::cin >>   N_array[i][j];
  }
}
std::cout << "\n";
std::cout << "original Array" << std::endl;
for (int i = 0; i < N; i++) {
  for (int j = 0; j < N ; j++) {
  std::cout << N_array[i][j] << " ";
  }
  std::cout << "\n";
}
std::cout << "\n";
std::cout << "\n";
std::cout << "New Array: " << std::endl;
rotate_array(N_array,N);

  return 0;
}
