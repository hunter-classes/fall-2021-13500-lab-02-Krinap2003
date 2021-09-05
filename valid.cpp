/*
Author: Krina Patel
Course: CSCI: 135
Instructor: Proffesor Mike Zamansky
Assignment: Lab 2 part A
 */

#include <iostream>

int main()
{
  int num;
  std::cout<<"Please enter an integer: ";
  std::cin>>num;
  while(num < 0 || num > 100)
    {
      std::cout<<"Please re-enter: ";  
      std::cin>>num;
    }
   num = num*num;                                                                                        
   std::cout<<"Number squared is: "<<num<<std::endl; 
    
  return 0;
}
