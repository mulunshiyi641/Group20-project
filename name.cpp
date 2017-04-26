#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	int nameScore = 0;
	int totalNameScore = 0;
	int counter = 0;
	int tempScore = 0;
	
	ifstream fin;
	string temp = "";
	string text = "";
	int *array = 0;
	string array = new string[];

　
	fin.open("C:\\Users\\mulunshiyi641\\Desktop\\names.txt");
	while (!fin.eof()) {
		getline(fin, temp);
		text += temp + "\n";
	}

	cout << text << endl;

	fin.close();

　
　
	system("pause");
	return 0;
}
