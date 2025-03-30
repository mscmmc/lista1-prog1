#include <iostream>

int main() {
	int valor;
	std::cin >> valor;
	std::cout << valor << "\n";

	int notas[] = {100, 50, 20, 10, 5, 2, 1};
	for (int nota : notas) {
		int quantidade = valor / nota;
	  	valor = valor % nota;
		std::cout << quantidade << " nota( s ) de R$ " << nota << ",00\n";
	}

	return 0;
}
