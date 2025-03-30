#include <array>
#include <iostream>
#include <cmath>

int main() {
	std::array<int, 20>mylist;

	for (int i = 1; i <= 20; ++i){ 
		std::cin >> mylist[20 - i]; // preenchimento do array de trás pra frente
	}

	int order = 0;
	
	for (int number : mylist){
		std::cout << "N[" << order << "] = " << number << '\n'; // impressão na ordem reversa
		++order;
	}
	
	return 0;
}
