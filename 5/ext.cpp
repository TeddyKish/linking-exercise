#include <iostream>
#include "ns_fun.h"

void using_in_ext()
{
	std::cout << "This is ext" << std::endl;
	std::cout << "This is first: " << bisslink::first << std::endl;
	std::cout << "This is second: " << bisslink::second << std::endl;
}