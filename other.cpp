#include "other.h"
#include <iostream>

void Other::hello(const std::string &s) const {
	std::cout << s;
	std::cout << "Hello from other";
	std::cout << "Hello from other";
	std::cout << std::endl;
}
