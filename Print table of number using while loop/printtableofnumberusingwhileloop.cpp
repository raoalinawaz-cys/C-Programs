//Write a program to take number from user and print table of that number using while loop
//By RAO ALI NAWAZ
include <iostream>
using namespace std;
int main()
{
	int i = 1, number;//declaring variables and initializing variable i to 1 for loop
	cout << "Enter a number: ";
	cin >> number;
	while(i <= 10)
	{
		cout << number << " * " << i << " = " << number * i << endl;
		i++;//incrementing i to avoid infinite loop
	}
  return 0;
}
