#include<iostream>
using namespace std;
int main()
{
	int day = 1;
	int num = 2;
	double total_cost = 0;
	double daily_cost;
	double c;
	while (num <= 100)

	{
		daily_cost = 0.8 * num;
		total_cost += daily_cost;
		day++;
		num *= 2;
	}
	c = total_cost / (day - 1);

	cout << "平均每天花:" << c << "元";
	return 0;
	}