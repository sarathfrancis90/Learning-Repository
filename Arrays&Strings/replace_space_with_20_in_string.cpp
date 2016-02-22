  #include "stdio.h"
  #include <iostream>
  #include <cstring>

  using namespace std;

  void replace_space_with_20(std::string str,int true_length) {
    int tru_length = true_length;
    std::string str1 = str;
    int str_length = std::strlen(str1.c_str());
    std::cout << str_length << std::endl;
    std::cout << str1 << std::endl;
    std::cout << tru_length << std::endl;
    while (tru_length > 0) {
      std::cout << str1 << std::endl;
      if(str1[tru_length-1] != ' '){
        str1[str_length-1] = str1[tru_length-1];
        str_length--; tru_length --;
      }
      else {
        str1[str_length-1] = '0';
        str_length--;
        str1[str_length-1] = '2';
        str_length--;
        str1[str_length-1] = '%';
        str_length--;
        tru_length--;
      }
    }
    std::cout << "String after processing: " << str1 << std::endl;
  }
  int main(int argc, char const *argv[]) {

  std::string str;
  int true_length;
  char choice;
    do {
      std::cout << "Enter the string" << std::endl;
      std::getline(std::cin, str);
      std::cout << "Enter the true length" << std::endl;
      std::cin >> true_length;
      replace_space_with_20(str, true_length);

      std::cout << "Do you want to continue?" << std::endl;
      std::cin >> choice;
      std::cin.ignore();
    } while(choice == 'y');
    return 0;
  }
