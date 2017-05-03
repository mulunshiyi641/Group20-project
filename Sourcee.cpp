#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <vector>


using namespace std;

int main()
{

	ifstream namesfile("names.txt");

	string line;
	vector<string> names;    
	
	if (!namesfile.is_open())
	{
		cout << "File not open";
	}

	// get names from file
	while (getline(namesfile, line, '\n'))
	{
		names.push_back(line);
	}

	// sort the names int alphabetical order
	sort(names.begin(), names.end());

	//for (int i = 0; i < names.size(); i++) {
	//	cout << names[i] << endl;
	//}
	
	

	int counter = 0;
	unsigned int total = 0;

	//totals each word then multiplys it by position
	for (auto it = names.begin(); it != names.end(); it++)
	{
		counter++;
		//copy word from token excluding " "
		string name((*it).begin(), (*it).end());

		int sub_total = 0;
		for (string::iterator it = name.begin(); it != name.end(); it++)
		{
			//ascii value to integer
			sub_total += *it - 64;
		}

		total += sub_total*counter;
	}

	cout << total;

	system("pause");
	return 0;

	}



