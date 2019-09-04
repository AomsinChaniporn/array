#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()

{
	int num[4];
	string	name[4];
	float total = 0;

	for (int i =0; i<4; i++)
	{
		cout << "Enter name [" << i << "]:";
		cin >> name[i];
		cout << "Enter num [" << i << "]:";
		cin >> num[i];
		total += num[i];
	}
	cout << "-----------------------------------------" << endl;
	cout << "Name \t\t\t\t Score" << endl;
	cout << "-----------------------------------------" << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << name[i] << "\t\t\t\t" << num[i] << endl;
	}
	
		
	cout << "-----------------------------------------" << endl;
	cout << "Average score = " << fixed << setprecision(2) << total/4 << endl;
	return(0);
}