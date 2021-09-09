#include <iostream>
#include "funcs.h"

//this function takes in two int parameters.
void print_interval(int L, int U)
{
  //Prints all the integers from L to U
  //L is included U is not included.
  for(int i = L; i < U; i++)
    {
      std::cout<<i<<" ";  
    }
  std::cout<<"\n";
}
