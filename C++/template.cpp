#include<iostream>

template <class T>
class computation
{
  private:
   T input1, input2;
   public:
   computation(T a, T b)
  {
      input1 = a;
      input2 = b;
      std::cout << "It is genric";
  }
  
};
//template specialization
template <>
class computation<char>
{
  private:
   char input1, input2;
   public:
   computation(char a, char b)
  {
      input1 = a;
      input2 = b;
      std::cout << "It is char"<<std::endl;
  }

};


int main()
{
    computation<int> c1(20,30);
    computation<char> c2('p','q');
}
