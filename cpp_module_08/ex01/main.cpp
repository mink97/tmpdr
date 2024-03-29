#include "Span.hpp"

int main()
{
	Span sp = Span(10000);
	try
	{
		sp.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		sp.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	sp.addRange(10000);
	// for (int i = 0; i < 10000; i++)
	// {
	// 	sp.addNumber(std::rand());
	// }
	try
	{
		sp.addNumber(4);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}
