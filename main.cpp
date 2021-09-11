/*
Author: Krina Patel
Course: CSCI:135
Instructor: proffesor Mike Zamansky
Assignment: Lap 2 part B

The program uses a void function to print out all integers in the range L<= i < U seperated by space.
The void function is added to a seperate file named funcs.cpp
*/

#include <iostream>
#include "funcs.h"

int main()
{
  //Test the program whit L = -5 and U = 10
  print_interval(-5, 10);
  print_interval(20, 56);
  print_interval(1, 25);
  print_interval(-10, 0);
  return 0;
}
