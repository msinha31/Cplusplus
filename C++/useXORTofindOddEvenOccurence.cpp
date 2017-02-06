#include<pthread.h>
#include<iostream>
 #I have an integer array where every number appears even number of times and only one appears odd times. Find the number. 
bool XOR(bool a, bool b)
{
    return (a + b) % 2;
}

int main()
{
  int i = 1;
  int j=1;
  int k =2;
  int result = i^j^k;
  std::cout<< result;
return 0;
}
