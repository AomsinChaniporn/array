#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void print_arr(string name[4], int num[4],float total);
void find_max(int num[4]);

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
	print_arr(name, num,total);
	find_max(num);
	return(0);
}

void print_arr(string name[4], int num[4],float total)
{
	
	cout << "-----------------------------------------" << endl;
	cout << "Name \t\t\t\t Score" << endl;
	cout << "-----------------------------------------" << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << name[i] << "\t\t\t\t" << num[i] << endl;
	}
	
		
	cout << "-----------------------------------------" << endl;
	cout << "Average score = " << fixed << setprecision(2) << total/4 << endl;
}

void find_max(int num[4])
{
	int max = num[0];
	for (int i = 0; i < 3; ++i)
	{
		for (int i = 0; i < 3; ++i)
			{
				if (num[i] > num[i+1])
				{
					max = num[i+1];
					num[i+1] = num[i];
					num[i] = max;
				}
			}
	}
	
	for(int i=0; i <4; ++i)
	{
		cout << num[i] << " ";
	}
	cout << "\nThe maximum number is " << num[3] << endl;

}