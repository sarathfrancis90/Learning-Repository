#include <iostream>
#include "stdio.h"


void merge(int array[], int helper[], int low, int middle, int high) {

  for (int i = low; i <= high; i++) {
    helper[i] = array[i];
  }
  int helperLeft = low;
  int helperRight = middle+1;
  int current = low;

  while( helperLeft <= middle &&  helperRight <= high) {
    if(helper[helperLeft] < helper[helperRight]) {
      array[current] = helper[helperLeft];
      helperLeft ++;
    }
    else  {
      array[current] = helper[helperRight];
      helperRight ++;
    }
    current++;
  }
  int remaining  = middle - helperLeft;
  for (int i = 0; i <= remaining; i++) {
    array[current+i] = helper[helperLeft+i];
  }
  return;
}

void mergesort(int array[],int helper[], int low, int high) {
  if(low < high) {
    int middle = (low +  high) / 2;
    mergesort(array, helper, low, middle);
    mergesort(array, helper, middle+1, high);
    merge(array, helper, low, middle, high) ;
  }
  return;
}

int main(int argc, char const *argv[]) {

  int array[10] = {9,8,7,6,5,4,3,2,1,0};
  int low = 0;
  int length = (sizeof(array)/sizeof(*array));
  int helper[length];
  int final[length];
  std::cout << "Array before Sorting: " << std::endl;
  for (int i = 0; i < length; i++) {
    std::cout << array[i] << ' ';
  }
  mergesort(array, helper, low, length-1);
  std::cout << std::endl << "Array after Sorting: " << std::endl;
  for (int i = 0; i < length; i++) {
    std::cout << array[i] << ' ';
  }
  std::cout << std::endl;

  return 0;
}
