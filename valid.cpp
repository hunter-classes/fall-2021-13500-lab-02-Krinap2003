/*
Author: Krina Patel
Course: CSCI: 135
Instructor: Proffesor Mike Zamansky
Assignment: Lab 2 part A
 */

#include <iostream>

int main()
{
  //Enter an integer from 1 to 100
  int num;
  std::cout<<"Please enter an integer: ";
  std::cin>>num;
  //if the integer is less than 0 or more than 100 enter the integer again
  while(num <= 0 || num > 100)
    {
      std::cout<<"Please re-enter: ";  
      std::cin>>num;
    }
  //print the a squared integer of the entered integer
   num = num*num;                                                                                        
   std::cout<<"Number squared is: "<<num<<std::endl; 
    
  return 0;
}
