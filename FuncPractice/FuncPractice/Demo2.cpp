//求两个正整数的最大公约数和最小公倍数
#include <iostream>
using namespace std;
int gcd(int a, int b);
int lcm(int a, int b);

int main()
{
	int a, b;
	cout << "please input two numbers:" << endl;
	cin >> a >> b;
	cout << "the greatest common divisor:" << gcd(a, b) << endl;
	cout << "the least common multiple:" << lcm(a, b) << endl;
	return 1;
}

int gcd(int a, int b)
{
	int  divisor=1;
	while ((a % 2 == 0) && (b % 2 == 0))
	{
		a = a / 2;
		b = b / 2;
		divisor *= 2;
	}
	return divisor;
	
}

int lcm(int a, int b)
{

	int  divisor = 1;
	while ((a % 2 == 0) && (b % 2 == 0))
	{
		a = a / 2;
		b = b / 2;
		divisor *= 2;
	}
	return divisor*a*b;
}