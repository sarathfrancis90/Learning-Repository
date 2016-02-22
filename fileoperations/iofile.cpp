#include <iostream>
#include <fstream>
#include <vector>

int main(int argc, char const *argv[]) {

  int k = 0;
  std::cout << "Enter the value of K" << std::endl;
  std::cin >> k;
  std::vector<std::string> array;
  std::string line;
  std::ifstream file1;
  file1.open("samplefile.txt");
  std::cout << "data read from file" << std::endl;
  int i = 0;
  int check = -1;
  int currentindex = 0;
  while (!file1.eof()) {
    if(i <= k && check == -1) {
      std::getline(file1,line);
      // std::cout << line << std::endl;
      array.insert(array.begin()+i,line);
      i++;
    }
    else if(i > k) {
      // for (auto j = array.begin(); j != array.end(); ++j)
      //     std::cout << *j <<std::endl;
      i=0;
      check = 0;
    }
    else {
      std::getline(file1,line);
      array.erase(array.begin()+i);
      array.insert(array.begin()+i,line);
      i++;
    }
    currentindex = i;
  }
  file1.close();
  for (int j = currentindex; j != array.size() ; ++j)
      std::cout << array[j] <<std::endl;
  for (int j = 0; j != currentindex; ++j)
          std::cout << array[j] <<std::endl;

  return 0;
}
