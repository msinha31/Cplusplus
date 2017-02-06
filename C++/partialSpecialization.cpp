#include<iostream>

template <class T, class U>
class computation
{
  private:
   T input1;
   U input2;
   public:
   computation(T a, U b)
  {
      input1 = a;
      input2 = b;
      std::cout << "It is genric";
  }
  
  
};
//template specialization
template <class T>
class computation<T,char>
{
  private:
   T input1;
   char  input2;
   public:
   computation(T a, char b)
  {
      input1 = a;
      input2 = b;
      std::cout << "It is char"<<std::endl;
  }

};


int main()
{
    computation<int,int> c1(20,30);
    computation<int,char> c2(1,'q');
}
