#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>


using namespace std;


int const ARRAYSIZE = 5163;

int main()
{
	
	ifstream file("names.txt");
	
	string myArray[5163];

	//read file into array
	if (file.is_open())
	{

		for (int i = 0; i < 5163; ++i)
		{
			file >> myArray[i];
		}
	}
	
	//sort names alphabetically
	int z = sizeof(myArray) / sizeof(myArray[0]); 

	sort(myArray, myArray + z); 

	//for (int y = 0; y < z; y++) {
	//  cout << myArray[y] << endl;
	}


	return 0;

	system ("PAUSE");

}
