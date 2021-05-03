
#include <iostream>
#include "pch.h"
using namespace std;

int main()
{
  unsigned int exp;
  cin >> exp;

 
  unsigned int sum = 0;

  for (unsigned int i = 2; i <= 7*9*9*9*9*9*9; i++)
  {
    unsigned int thisSum = 0;

 
    unsigned int reduce = i;
    while (reduce > 0)
    {
    
      unsigned int digit = reduce % 10;
     
      reduce /= 10;

  
      unsigned int power = 1;
      for (unsigned int j = 1; j <= exp; j++)
        power *= digit;

     
      thisSum += power;
    }

    if (thisSum == i)
      sum += i;
  }

  cout << sum << endl;
  return 0;
}
