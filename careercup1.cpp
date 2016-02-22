#include <iostream>
#include "stdio.h"
#include "careercup1.h"


void calculateWage(GeneralManager &Gm1) {

  int dailywage = (Gm1._Salary/(48*40))*Gm1._Daily_working_hour;

  std::cout << dailywage << std::endl;
}

void calculateWage(Accounting &Ac1) {

  int dwr = Ac1._Daily_working_hour;
  int overtime = 0;
  if(dwr > 8) {
    overtime = dwr -  8;
    dwr = 8;
  }
  float dailywage = ((Ac1._Salary/(48*40))*dwr) + (((Ac1._Salary/(48*40))*1.5)*overtime);
  std::cout << dailywage << std::endl;

}

int main(int argc, char const *argv[]) {

  GeneralManager Gm1("Sarath", "GeneralManager", 120000, 8);

  Accounting Ac1("Minu", "Accounting" , 10000, 13);

  calculateWage(Gm1);
  calculateWage(Ac1);
  return 0;
}
