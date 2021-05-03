#include<iostream>
#include "pch.h"
using namespace std;
int main()
{
	int n, j;
	cout << "Sum of factorial: ";
	cin >> n; //taking input number from user
	int dummy = n, sum = 0; //storing it in dummy variable,initialize sum to zero
	while (n != 0) //iterate loop till the number is equal to zero
	{
		int dig = n % 10; //extract each digit from number
		if (dig != 0) //if number!=0 then calculate factorial of that number
		{
			int fact = 1;
			for (j = 1; j <= dig; j++) //calculate factorial
				fact = fact * j;
			sum = sum + fact; //finally add that factorial value to sum
		}
		else
			sum = sum + 1; //if digit is zero then directly add 1 to sum since 0!=1
		n = n / 10; //divide n with 10 get the next digits number
	}
	if (dummy == sum) //finally check if the sum and dummy are equal then print below
		cout << sum << " sum of factorials:" << endl;
	return 0;
}

