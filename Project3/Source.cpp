#include<iostream>
using namespace std;
void main()
{
	int sum = 0;
	int counter = 0;
	for (int i = 1; i > 0; i++)
	{
		for (int num = 2; num > 0; num<100)
		{
			if (i%num == 0 && i != num)
				sum +=i ;
				counter++;
		}
		if (counter == 20)
			break;
	}
	cout << sum;
	system("pause");
}