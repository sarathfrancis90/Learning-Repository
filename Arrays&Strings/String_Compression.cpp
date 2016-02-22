#include "stdio.h"
#include <iostream>
#include <cstring>


struct CharCount {
  char character;
  int count;
};


void string_compress(std::string str) {
  int str_length = std::strlen(str.c_str());
  CharCount *charcount = new CharCount[str_length];
  int struct_index = 0;
  for(int i = 0 ; i < str_length ;) {
    char curr = str[i];
    int curr_count = 0;
    while(str[i] == curr) {
      ++curr_count;
      ++i;
    }
    charcount[struct_index].character = curr;
    charcount[struct_index].count = curr_count;
    struct_index++;
    if(struct_index*2 > str_length) {
      break;
    }
  }
  if(struct_index*2 <= str_length) {
    for (int i = 0; i < struct_index; i++) {
      std::cout << charcount[i].character;
      std::cout << charcount[i].count;
    }
  }
  else  {

    std::cout << "Original string is shorter" << std::endl;
    std::cout << str << std::endl;
  }

std::cout << "\n";

  // int i, j;
  // for(i = 0 ; i < str_length ; i++) {
  //
  //   for(j = 0 ; j <= i ; j++) {
  //     if(charcount[j].character == str[i]) {
  //       charcount[j].count ++;
  //     }
  //   }
  //     while(charcount[j].character != '*') {
  //       j++;
  //     }
  //     charcount[j].character = str[i];
  //     charcount[j].count = 1;
  // }
  // for(i = 0 ; i < str_length ; i++) {
  //   std::cout << charcount[i].character << " ";
  //   std::cout <<     charcount[i].count << std::endl;
  // }
//8NKRQ-YBBGQ-MTV9H-GD9RT-BP2JB
}
int main(int argc, char const *argv[]) {

  char choice;
  std::string str;
  do {
    std::cout << "Enter the string" << std::endl;
    std::getline(std::cin, str);

    string_compress(str);

    std::cout << "Do you want to continue?" << std::endl;
    std::cin >> choice;
    std::cin.ignore();
  } while(choice == 'y');
  return 0;
}
