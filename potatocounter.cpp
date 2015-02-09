#include <iostream>
#include <unistd.h>

int main() {
	std::cout << "Potato.\n";

	usleep(1000000);

	for (int i = 1; i <= 100; i++) {
		usleep(250000);
		std::cout << i << std::endl;
	}

	return 0;
}