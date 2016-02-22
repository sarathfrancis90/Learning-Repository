#include <iostream>
#include "stdio.h"

int sum(int a, int b){
    int *sum = (int *)malloc(32);
    sum = a + b;
    return *sum;
}
int main(){
    int a;
    a = sum(1,2);
    std::cout << a << std::endl;
}
