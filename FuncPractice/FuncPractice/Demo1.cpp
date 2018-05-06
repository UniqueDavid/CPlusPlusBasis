//判断某个大于2的正整数是否为素数
#include <iostream>
using namespace std;
bool IsPrime(int number);

/*int main()
{
	int number;
	cout << "Please input the number:" <<endl;
	cin >> number;
	if (number <= 2)
	{
		cout << "wrong number!!" << endl;
		return 0;
	}	
	if (IsPrime(number))
	{
		cout << number << " is a prime！" << endl;
	}
	else
	{
		cout << number << " is not a prime！" << endl;
	}
	return 1;
}*/

bool IsPrime(int number)
{
	for (int i = 2; i < number; i++)
	{
		if (number % i == 0)
			return false;
	}
	return true;
}