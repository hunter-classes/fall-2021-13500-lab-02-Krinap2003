/*
Author: Krina Patel
Course: CSCI:135
Instructor: proffesor Mike Zamansky
Assignment: Lap 2 part B
*/

#include <iostream>

int main()
{
  int L;
  //Enter an integer value for L
  std::cout<<"Please enter L: ";
  std::cin>>L;
  int U;
  //Enter an intefer value for U
  std::cout<<"Please enter U: ";
  std::cin>>U;

  //loops through every number from L to U
  for(int i = L; i < U; i++)
    {
      //Print all the number from L to U in increasing order.
      std::cout<<i<<" ";
    }
  return 0;
}
