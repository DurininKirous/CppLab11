#include <iostream>
#include <vector>
int main()
{
  std::vector<int> test;
  int number;
  while (number!=EOF)
  {
    std::cin >>number;
    if (number != EOF) test.push_back(number);
  }
  std::cout <<"Vector: ";
  for (int number: test)
  {
    std::cout <<number<<" ";
  }
  std::cout <<std::endl;
  size_t i=0;
  std::vector<int>::reverse_iterator tmp=test.rbegin();
  std::cout <<"Vector with reverse iterator: ";
  while (i++!=test.size())
  {
    std::cout <<*tmp++<<" ";
  }
  std::cout <<std::endl;
}
