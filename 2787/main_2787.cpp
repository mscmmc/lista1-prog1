#include <iostream>

int main() {
	int lines, column;
	std::cin >> lines;
	std::cin >> column;

	if ((lines + column) % 2 == 0){ // a lógica é simples, quando a soma é par, o quadrado do canto direito é branco
		std::cout << "1\n";
	} else {
		std::cout << "0\n";
	}

	return 0;
}
