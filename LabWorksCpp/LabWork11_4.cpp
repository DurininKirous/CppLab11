#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <queue>
void Print_Vector(std::vector<int> Vector)
{ 
  std::cout <<"Vector: ";
  for (int number: Vector)
  {
    std::cout <<number<<" ";
  }
  std::cout <<std::endl;
}
void Print_Deque(std::deque<int> Deque)
{
  std::cout <<"Deque: ";
  for (int number: Deque)
  {
    std::cout <<number<<" ";
  }
  std::cout <<std::endl;
}
int main()
{
  std::vector<int> Test_Vector{1,2,3,4,5};
  std::deque<int> Test_Queue{5,4,3,2,1};
  std::deque<int>::reverse_iterator tmp=Test_Queue.rbegin();
  Print_Vector(Test_Vector);
  Print_Deque(Test_Queue);
  std::copy(Test_Vector.begin(), Test_Vector.end(), Test_Queue.begin());
  std::cout <<"-----------------\n";
  size_t i=0;
  while (i!=Test_Vector.size())
  {
    Test_Vector.at(i++)=*tmp++;
  }
  Print_Vector(Test_Vector);
  Print_Deque(Test_Queue);
}
