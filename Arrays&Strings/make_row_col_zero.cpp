#include "stdio.h"
#include <iostream>
#include <cstring>


const int M = 3;
const int N = 3;

void make_rowcol_zero(int **array) {

  bool *row_array = new bool[M];
  bool *col_array = new bool[N];
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      if(array[i][j] == 0 && row_array[i] == false && col_array[j] == false) {
        row_array[i] = true;
        col_array[j] = true;
        for (int k = 0; k < M; k++) {
          array[k][j] = 0;
        }
        for (int l = 0; l < N; l++) {
          array[i][l] = 0;
        }
      }

    }
  }
  std::cout << "\n";
  std::cout << "New Array: " << std::endl;
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N ; j++) {
    std::cout << array[i][j] << "    ";
    }
    std::cout << "\n";
  }
}
int main(int argc, char const *argv[]) {


  int **array;

  array = new int *[M];

  for (int i = 0; i < M; i++) {
    array[i] = new int[N];
  }

  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N ; j++) {
      std::cout << "Enter the element in the " << i << "th row " << j << "th column"<< std::endl;
      std::cin >>   array[i][j];
    }
  }
  std::cout << "\n";
  std::cout << "original Array" << std::endl;
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N ; j++) {
      std::cout << array[i][j] << "    ";
    }
    std::cout << "\n";
  }
  make_rowcol_zero(array);
  return 0;
}
