#include <iostream>
#include<fstream>
#include<sstream>
#include<string>
#include <algorithm>
using namespace std;
int main()
{
int i = 0;
ifstream fin;
string temp = "";
string text = "";
int const arraySize = 7163;
int finalNameScore = 0;
int totalScore = 0;
string myArray[7163];
fin.open("names.txt");
int count = 1;
while (!fin.eof())
{
getline(fin, temp);
myArray[i] = temp;
i++;
}
cout << text << endl;
fin.close();
for (int i = 0; i < 5163; ++i)
{
string aName = myArray[i];
{
int total = 0;
for (int i = 0; i < aName.size(); i++)
{
total = total + (aName[i] - 64);
}

}
system("pause");
return 0 ;
}
}

