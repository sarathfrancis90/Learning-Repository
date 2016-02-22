#include <iostream>
#include "stdio.h"
#include <vector>
#include <string>


std::vector<int> values;

int main(int argc, char const *argv[])
{

	std::string str;
	std::cin >> str;
	int ascii1, ascii2;
	int index = -1;
	int i = 1;
	if (isupper(str[0]))
	{
		values.push_back(str[0]);
		while (str[i] != '\0')
		{
			ascii1 = values.back();
			ascii2 = str[i];
			if (ascii2 - ascii1 == 32)
			{

				values.erase(values.end() - 1);
				index = i;
			}
			else
			{
				if (isupper(str[i]))
				{
					values.push_back(str[i]);
				}
				else
				{
					break;
				}
			}
			i++;
		}
	}
	else
		index = -1;
	std::cout << index << std::endl;
}
