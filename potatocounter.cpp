#include <iostream>
#include <unistd.h>

int maxPotatoes;

int main() {
	std::cout << "Potato.\n";

	usleep(1000000);

	std::cout << "How many potatoes should we count to?\n> ";
	std::cin >> maxPotatoes;
	std::cout << "Counting to " << maxPotatoes << " potatoes.\n";

	usleep(1000000);

	for (int i = 1; i <= maxPotatoes; i++) {
		std::cout << i << " potatoes.\n";
		usleep(250000);
	}

	std::cout << "ALL of the potatoes!\n";

	return 0;
}