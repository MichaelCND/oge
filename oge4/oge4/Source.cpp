#include <iostream>

using namespace std;

int num;
int col;
int res = 0;
int sum = 0;
void checkCol();

int main() {

	cout << "vvedite kolichestvo chisel (ne bol'she 1000)";
	cin >> col;

	if (col <= 1000)
	{
		checkCol();
	}
	else
	{
		cout << "vy vveli bol'she 1000 chisel";
	}

	return 0;
}

void checkCol() {
	for (int i = 0; i < col; i++)
	{
		cout << "vvedite chislo (summa chisel ne dolgzna previshat' 30000)";
		cin >> num;

		sum = sum + num;

		if (sum <= 30000)
		{
			if (num < 90)
			{
				res = res + num;
			}
		}

		else
		{
			cout << "summa chisel previshaet 30000";
		}


	}

	cout << res;
}