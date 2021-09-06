/*
Author: Krina Patel
Course: CSCI: 135
Instructor: Proffesor Mike Zamansky
Assignment: Lab 2 part A

Ask the user to input an integer in the  range 0 < n < 100.
If the number is out of range the user is asked to input the number again.
After a valid value is inputed, print this number n squared.
 */

#include <iostream>

int main()
{
  //Enter an integer from 1 to 100
  int num;
  std::cout<<"Please enter an integer: ";
  std::cin>>num;
  //if the integer is less than 0 or more than 100 enter the integer again
  while(num <= 0 || num >= 100)
    {
      std::cout<<"Please re-enter: ";  
      std::cin>>num;
    }
  //print the a squared integer of the entered integer
   num = num*num;                                                                                        
   std::cout<<"Number squared is: "<<num<<std::endl; 
    
  return 0;
}
