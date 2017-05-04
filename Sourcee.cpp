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
	
	int counter = 0;
    	int total = 0;

	//totals each word then multiplys it by position
	for (auto it = names.begin(); it != names.end(); it++)
	{
		counter++;
		string name((*it).begin(), (*it).end());

		int nameval = 0;
		for (string::iterator it = name.begin(); it != name.end(); it++)
		{
			//use ascii value for letter score
			nameval += *it - 64;
		}

		total += (nameval * counter);
	}

	cout << "Total score is: " << total << endl;

	system("pause");
	return 0;

	}
