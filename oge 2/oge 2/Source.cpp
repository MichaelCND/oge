#include <iostream>

using namespace std;

int main() {
	int num;
	int col;
	int res = 0;
	int sum = 0;
	

	cout << "vvedite kolichestvo chisel (ne bol'she 1000)";
	cin >> col;

		if (col <= 1000)
		{
			void checkCol();
		}
		else
		{
		 	cout << "vy vveli bol'she 1000 chisel";
		}

		void checkCol(); {
				for (int i = 0; i < col; i++)
				{
					cout << "vvedite chislo (summa chisel ne dolgzna previshat' 30000)";
					cin >> num;

					sum = sum + num;

					if (sum <= 30000)
					{		
							if (num > 100)
							{
								res++;
								cout << res;
							}
					}

					else
					{
						cout << "summa chisel previshaet 30000";
					}

					
				}	
		}
		
		
	return 0;
}

