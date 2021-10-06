#include <iostream>

using namespace std;

int main() {
	int num;
	int col;
	int res = 0;

	cout << "vvedite kolichestvo chisel";
	cin >> col;

	for (int i = 0; i < col; i++)
	{
		cout << "vvedite chislo";
		cin >> num;

		if (num % 100 == 31)
		{
			res++;
		}
	}
	cout << res;

	return 0;
}