#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string readFile(string fileName)
{
	ifstream fin(fileName);

	string str, temp;
	getline(fin, str);
	while (!fin.eof())
	{
		getline(fin, temp);
		str.append("\n" + temp);
	}

	fin.close();

	return str;
}

bool Check(const string str)
{
	size_t pos = 0;
	while ((pos = str.find('n', pos)) != -1)
	{
		pos++;
		if (str[pos] == 'o')
			return true;
	}

	pos = 0;
	while ((pos = str.find('o', pos)) != -1)
	{
		pos++;
		if (str[pos] == 'n')
			return true;
	}
	return false;
}

int main()
{
	string text = readFile("t.txt");

	if (Check(text))
		cout << "File contains \"no\" or \"on\"" << endl;
	else
		cout << "File does not contain \"no\" or \"on\"" << endl;

	return 0;
}