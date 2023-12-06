#include<iostream>
	using namespace std;
	int num;
	int reversenumber(int num)
	{
		int rn = 0;
		while (num != 0)
		{
			int lastdigit;
			lastdigit = num % 10;
			rn = rn * 10 + lastdigit;
			num /= 10;
		}
		return rn;
	}
	int in()
	{
		cin >> num;
		return num;
	}
	void out()
	{
		cout << reversenumber(num);
	}
	void main()
	{
		in();
		out();
	}
