#include <iostream>
#include "ns_fun.h"

void using_in_main()
{
	std::cout << "This is main" << std::endl;
	std::cout << "This is first: " << bisslink::first << std::endl;
	std::cout << "This is second: " << bisslink::second << std::endl;
}

int main(int argc, char const *argv[])
{
	using_in_main();
	return 0;
}