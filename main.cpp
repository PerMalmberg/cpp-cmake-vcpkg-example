#include "fmt/core.h"
#include "other.h"
#include <iostream>
#include <limits>

int main(int argc, char **argv) {
	fmt::print("Vim motions are hard.");
	Other o{};
	o.hello("foo bar");
	std::cout << std::numeric_limits<std::uint64_t>::max();
	return 0;
}

void foo() {
	return;
	// Hello
}
