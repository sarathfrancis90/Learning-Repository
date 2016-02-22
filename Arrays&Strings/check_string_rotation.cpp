#include <iostream>
#include "stdio.h"
#include <cstring>


using namespace std;

bool isSubString(string s1 , string s2) {
  if (s1.find(s2) != string::npos) {
    return true;
  }
  else
  return false;
}
int main(int argc, char const *argv[]) {

  string s1 = "Today";
  string s2 = "dayTo";
  string s3 = s1+s1;
  bool check  = isSubString(s3, s2);
  cout << boolalpha << check << endl;
  return 0;
}
