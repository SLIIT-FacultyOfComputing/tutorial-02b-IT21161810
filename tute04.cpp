/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}

#include<iostream>

long factorial(int num)
{
  int fact = 1,count;
  for(count = 1;count <=num; count++)
    {
      fact = fact * count;
    }

  return(fact);
}

int main()
{
  int n,r;
  float nCr;

  std::cout << "Enter a value for n ";
  std::cin  >> n;
  std::cout << "Enter a value for r ";
  std::cin  >> r;

  nCr = factorial(n) / (factorial(r) * factorial(n - r));
  std::cout<<std::endl;
  std::cout << "nCr Factorial of " << n << " and " << r <<
    " is " << nCr;

  return 0;
}