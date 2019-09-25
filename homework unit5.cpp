#include <iostream>
using namespace std;
int main(void)
{
	int score[2][3];
	cout << "Input score" << endl;
	for (int i = 0; i < 2; ++i)
	{
		cout << "Input subtest " << i+1 << " : ";
		cin >> score[i][0];
		cout << "Input nidterm " << i+1 << " : ";
		cin >> score[i][1];
		cout << "Input final " << i+1 << " : ";
		cin >> score[i][2];
		cout << endl;
	}
	cout << "Display score" << endl;
	cout << "----------------------------------" << endl;
	cout << "Subtest\tMidterm\tFinal\tTotal" << endl;
	cout << "----------------------------------" << endl;

	for(int i = 0; i < 2; ++i)
	{
		int total = 0;
		for (int j = 0; j < 3; ++j)
		{
			total += score[i][j];
			cout << score[i][j] << "\t";
		}
		cout << total;
		cout << endl;
	}
	cout << "---------------------------------" << endl;

	cout << "Transport Matrix" << endl;
	for(int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			cout << score[j][i] << "\t";
		}
		cout << endl;
	}
	return(0);
}