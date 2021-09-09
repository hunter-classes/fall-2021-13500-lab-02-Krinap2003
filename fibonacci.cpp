/*
Author: Krina Patel
Course: CSCI:135
Instructor: proffesor Mike Zamansky
Assignment: Lab 2 part D

This program has an array of 60 integers and it calculates what the value
at a given index based on the formula fib[i] = fib[i-1] + fib[i-2]
fib[0] = 0
fib[1] = 1
*/

#include <iostream>

int main()
{
  //initializes an array of 60 integers 
  int F[60];

  //Set the value of index 0 and 1 becuase they never change.
  F[0] = 0;
  F[1] = 1;
  //Print out the vlues of index 0 and 1
  std::cout<<F[0]<<"\n"<<F[1]<<"\n";

  //loop through the array from index 2 to 60
  for(int i = 2; i < 60; i++)
    {
        //calculater the values based on the formula
         F[i] = F[i-1] + F[i-2];
	 //Print out the value
         std::cout<<F[i]<<"\n";
    }
}
