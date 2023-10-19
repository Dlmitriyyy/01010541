#include <iostream>
using namespace std;
int main()
{
	system("chcp 1251 > nul");
	int number;
	cout << "Введіть натуральне число: " << endl;
	cin >> number;

	if (number < 0)
	{
		cout << "Помилка.. ваше число повинно бути більше нуля.";
	}
	else
	{
	cout << "Досконалі числа менші за " << number << ": ";

	for (int num1 = 1; num1 < number; num1++)
	  {
		int sum = 0;

		for (int num2 = 1; num2 < num1; num2++)
		{
			if (num1 % num2 == 0)
			{
				sum += num2;
			}
		}

		if (sum == num1)
		{
			cout << num1 << ", ";
			
		}
	}
	}
	return 0;
}
	



