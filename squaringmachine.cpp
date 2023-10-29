/*squares a given number
!!!*/

#include<iostream>
  int square(int NumToBeSquared)
{
    int Answer= NumToBeSquared*NumToBeSquared ;
    return Answer;
}

int main()
{
    int NumToBeSquared ;
    std::cin>>NumToBeSquared;
      int Answer = square(NumToBeSquared);
    printf("the square of %d is %d",NumToBeSquared,Answer);
  return 0;
}

