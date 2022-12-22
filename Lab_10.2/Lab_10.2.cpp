#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

using namespace std;

string Change(string& stringToCount)
{
	int i = 0;
	int len = stringToCount.length();
	size_t pos = 0;

	while ((pos = stringToCount.find('.', pos)) < (len / 1) * 1 - 1)
	{
		stringToCount[pos + 1] = toupper(stringToCount[pos + 1]);
		pos++;
	}
	return stringToCount;
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    ifstream file("t.txt");

    string stringToCount;

    while (getline(file, stringToCount))//поки можна зчитати файл
        file >> stringToCount;//зчитування з файлу 

    ofstream file2("t2.txt");
	file2 << Change(stringToCount);
	file2.close();

	cout << Change(stringToCount) << endl;
	return 0;
}
