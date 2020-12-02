#include <iostream>

int main() {
	int a0 = 0;
	int a1 = 1;
	int tmp;
	std::cout << "Hello git!" << std::endl;
	std::cout << "--------------------test git----------------------" << std::endl;
	std::cout << "Fibonacci sequence: " ;
	std::cout << a1 << " ";
	for(int i = 0; i < 10; ++i) {
		tmp = a1;
		a1 = a0 + a1;
		std::cout << a1 << " ";
		a0 = tmp;
	}
	std::cout << "...more\n" ;
	std::cout << "It grows rappidly\n";
	std::cout << "cool things!\n";
	return 0;
}

