#include <iostream>
using namespace std;
int eligible(int age)
{
	if (age>=18)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int age;
	cout << "enter your age" << endl;
	cin >> age;
	if (eligible(age)==1)
	{
		cout << "you are eligible to vote" << endl;
	}
	else
	{
		cout << "you are not eleigible to vote" << endl;
	}
}