#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		string name;
		int smart, work_hard;
		cin >> name;
		cin >> smart >> work_hard;
		cin.ignore();

		if (smart == 1)
		{
			if (work_hard == 3)
				cout << name << " Staff" << endl;
			else if (work_hard == 4)
				cout << name << " " << "General" << endl;			
		}
		else if (smart == 2)
		{
			if (work_hard == 3)
				cout << name << " execute by shooting" << endl;
			else
				cout << name << " Soldier" << endl;
		}	
	}
}