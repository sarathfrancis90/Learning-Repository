#include <iostream>
#include "stdio.h"
#include <cstring>

class GeneralManager {

public:
  std::string _EmployeeName;
  std::string _Title_Role;
  int _Salary;
  int _Daily_working_hour;

   GeneralManager(std::string employeeName, std::string title_Role, int salary, int daily_working_hour) : _EmployeeName(employeeName), _Title_Role(title_Role), _Salary(salary), _Daily_working_hour(daily_working_hour) {}
};

class ITManager {

private:
  std::string _EmployeeName;
  std::string _Title_Role;
  int _Salary;
  int _Daily_working_hour;

public:
   ITManager(std::string employeeName, std::string title_Role, int salary, int daily_working_hour) : _EmployeeName(employeeName), _Title_Role(title_Role), _Salary(salary), _Daily_working_hour(daily_working_hour) {}
   void calculateWage();

};

class Accounting {

public:
  std::string _EmployeeName;
  std::string _Title_Role;
  int _Salary;
  int _Daily_working_hour;

   Accounting(std::string employeeName, std::string title_Role, int salary, int daily_working_hour) : _EmployeeName(employeeName), _Title_Role(title_Role), _Salary(salary), _Daily_working_hour(daily_working_hour) {}

void calculateWage();
};


class Marketing {

private:
  std::string _EmployeeName;
  std::string _Title_Role;
  int _Salary;
  int _Daily_working_hour;

public:
   Marketing(std::string employeeName, std::string title_Role, int salary, int daily_working_hour) : _EmployeeName(employeeName), _Title_Role(title_Role), _Salary(salary), _Daily_working_hour(daily_working_hour) {}
   void calculateWage();

};
