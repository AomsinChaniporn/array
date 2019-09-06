#include <iostream>
#include <string>
using namespace std;
void ListStudent(int num, string name[], int score[]);
char Calgrade(int score);

int main()
{
	int num;
	string name[100];
	int score[100];

	cout << "Input Number of Student : ";
	cin >> num;
	for (int i = 1; i - 1 < num; i++)
	{
		cout << "Input Name : ";
		cin >> name[i];
		cout << "Input score " << i << ": ";
		cin >> score[i];
		cout << endl;
	}
	ListStudent(num, name, score);
	return 0;
}

void ListStudent(int num, string name[100], int score[100])
{
	for (int i = 1; i - 1 < num; i++)
		cout << "Studen Name : " << name[i] << "Score " << i << " = " << score[i] << "  You grade is " << Calgrade(score[i]) << endl;
}

char Calgrade(int score)
{
	char grade = ' ';
	if (score >= 80 && score <= 100)
		grade = 'A';
	else if (score >= 70 && score <= 79)
		grade = 'B';
	else if (score >= 60 && score <= 69)
		grade = 'C';
	else 
		grade = 'D';

	return (grade);
}