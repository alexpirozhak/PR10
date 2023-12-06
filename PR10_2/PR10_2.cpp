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

size_t MaxLength(const string s)
{
	int k = 0;
	size_t len = 0,
		max;
	size_t start = 0,
		end;
	while ((start = s.find_first_of("0123456789", start)) != -1)
	{
		end = s.find_first_not_of("0123456789", start + 1);
		if (end == -1)
			end = s.length();
		len = end - start;
		if (k == 0)
			max = len;
		k++;
		if (len > max)
			max = len;
		start = end + 1;
	}
	return max;
}

int main()
{
	string text = readFile("t.txt");

	cout << "Max digit count: " << MaxLength(text) << endl;

	return 0;
}