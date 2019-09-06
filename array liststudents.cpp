#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

void Liststudents(string name[100], int num, int score[]);
char Calgrade(char grade);

int main()
{
	string name[100];
	int num;
	int score[100];
	cout << "Input Number of students : ";
	cin >> num;
	for (int i = 1; i - 1 < num; i++)
	{
		cout << "Input Name [" << i << "]:";
		cin >> name[i];
		cout << "Input Score [" << i << "]:";
		cin >> score[i];
	}
	Liststudents(name, num, score);
	return(0);
}

void Liststudents(string name[100], int num, int score[100])
{
	for (int i = 1; i - 1 < num; i++)
	{
		cout << "Studen Name : " << name[i] << endl;
		cout << "Score " << i << " = " << score[i] << endl;
		cout << "  You grade is : " << Calgrade(score[i]) << endl;
	}
}

char Calgrade(int score)
{
	char grade = ' ';
	if (score >= 80 && score <= 100)
	{
		cout << "Your grade is 'A'" << endl;
	}
	else if (score >= 70 && score <= 79)
	{
		cout << "Your grade is 'B'" << endl;
	}
	else if (score >= 60 && score >= 69)
	{
		cout << "Your grade  is 'C'" << endl;
	}
	else
	{
		cout << "Your grade is 'D'" << endl;
	}
}