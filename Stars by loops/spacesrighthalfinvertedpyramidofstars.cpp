//Write a program to print right half inverted star using loops and spaces in if condition
//By RAO ALI NAWAZ
#include <iostream>
using namespace std;
int main()
{
//	*****
//	****
//	***
//	**
//	*
	int n = 5;// 5 rows
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= 2 * n - 1; j++)
		{
			if(j > n - (i - 1))
			{
				cout << " ";
			}
			else
			{
				cout << "*";
			}
		}
		cout << "\n";
	}
}
