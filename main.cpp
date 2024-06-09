#include "fmt/core.h"
#include "other.h"

int main(int argc, char **argv) {
	fmt::print("Vim motions are hard.");
	Other o{};
	o.hello("foo bar");

	return 0;
}

void foo() {
	return;
	// Hello
}
