#include <iostream>
#include <list>
#include <algorithm>
void FillTheList(std::list<int> &numbers)
{
	size_t N;
	std::cout <<"Enter the number of elements: ";
	std::cin >>N;
	int Element;
	for ( size_t i=0; i<N; ++i )
	{
		std::cout << "Enter the element "<< i+1 <<" :";
		std::cin >> Element;
		numbers.push_back(Element);
	}
}
int main()
{
	std::list<int> numbers;
	FillTheList(numbers);
	std::for_each(numbers.begin(), numbers.end(), [](int x){ std::cout << x << " ";});
	std::cout <<std::endl;
	std::reverse(numbers.begin(), numbers.end());
	std::for_each(numbers.begin(), numbers.end(), [](int x){ std::cout << x << " ";});
	std::cout <<std::endl;
	numbers.sort();
	std::for_each(numbers.begin(), numbers.end(), [](int x){ std::cout << x << " ";});
	std::cout <<std::endl;
	std::fill(numbers.begin(), numbers.end(), 4);
	std::for_each(numbers.begin(), numbers.end(), [](int x){ std::cout << x << " ";});
	std::cout <<std::endl;
	numbers.unique();
	std::for_each(numbers.begin(), numbers.end(), [](int x){ std::cout << x << " ";});
	std::cout <<std::endl;
}	
