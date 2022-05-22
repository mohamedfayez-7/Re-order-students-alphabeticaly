#include <iostream>
#include <string>
using namespace std;

int main()
{
	int numStudents;
	int count = 0;
	cout << "How many students are in the class? ";
	cin >> numStudents;
	while (numStudents < 1 || numStudents > 25)
	{
		cout << "\nThat is an invalid number of studentss\n";
		cout << "Enter a valid number of students: ";
		cin >> numStudents;
	}
	cout << endl;
	string name[25];
	for (int i = 0; i < numStudents; i++)
	{
		cout << "Enter the name of student " << i + 1 << ": ";
		cin >> name[i];
	}
	string temp;
	for (int j = 1; j < numStudents; ++j)
	{
		temp = name[j];
		int k;
		for (k = j - 1; k >= 0 && name[k] > temp; k--)
		{
			name[k + 1] = name[k];
		}
		name[k + 1] = temp;
	}
	cout << "\nThe first student is: " << name[0] << endl;
	cout << "The last student is: " << name[numStudents - 1] << endl;
	return 0;
}

