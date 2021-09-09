/*
Author: Krina Patel
Course: CSCI-135
Instructor: Proffesor Mike Zamansky
Assignment: Lab 2 part C

Write a program that creates an array list of 10 integers.
ask the user to input an index and value.
than add the inputed value at the inputed index.
*/

#include <iostream>

int main()
{
  //Make an array list with 10 integer and assign all of them a value of 1.
  int myData[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

  //declare index and value
  int index;
  int value;
  
  do{
    //Prints the whole array list with its correct values.
    for(int i = 0; i < sizeof(myData)/sizeof(myData[0]); i++)
    { 
      std::cout<<myData[i]<<" ";
    }

    std::cout<<"\n";

    //Ask the user to input the index value
    std::cout<<"Input index: ";
    std::cin>>index;

    //Ask the user to input value to be added at the given index
    std::cout<<"Input value: ";
    std::cin>>value;

    //Checks if the index entered is in the range.
    //If it is new value is assigned to the index
    if(index <=  9)
    {
      myData[index] = value;
    }
   }
    while(index <= 9);

    //Print out of range message if the index entered is out of range.
    std::cout<<"Index out of range. Exit."<<std::endl;

    return 0;
}
