/*
 * name.cpp
 *
 *  Created on: Apr 25, 2017
 *      Author: shiyi
 */
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main()
{
	int nameScore = 0;
	int totalNameScore = 0;
	int counter = 0;
	int tempScore = 0;

	std::ifstream infile("names.txt");
	std::string line;
	string name;

	{
		for(int i = 0; i < name.length; i++)

		int _char = name[i];
		tempScore += int_char(26);

			cout<<"For "<<name<<" the score is: "<<nameScore<<endl;
			totalNameScore += nameScore;
			counter++;
}
	cout<<"Total score for all names is : "<<totalNameScore<<endl;

	return 0;
}
