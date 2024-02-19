#include <iostream>
#include <vector>
#include <iterator>
#include <list>
int main ()
{
	std::vector<int> numbers={ 1, 2, 3 ,7, 10, 12};
	std::list<int> numbersv2={ 1, 2 , 3, 4, 5};
	for ( int x: numbersv2)
	{
		std::cout <<x<<" ";
	}
	std::cout <<std::endl;
	std::front_inserter(numbersv2)=14;
	std::back_inserter(numbersv2)=3;
	for ( int x: numbersv2)
	{
		std::cout <<x<<" ";
	}
	std::cout <<std::endl;
	std::cout <<"------------------------\n";
	std::back_inserter(numbers)=8;
        for ( int x:numbers )	
	{
		std::cout <<x<<" ";
	}
	std::cout <<std::endl;
	std::fill_n(std::inserter(numbers, numbers.end()), 5, 2);
        for ( int x:numbers )	
	{
		std::cout <<x<<" ";
	}
	std::cout <<std::endl;
	back_inserter ( numbers )=45;
	back_inserter ( numbers )=31;
        for ( int x:numbers )	
	{
		std::cout <<x<<" ";
	}
	std::cout <<std::endl;
}
