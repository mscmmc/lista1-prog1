#include <algorithm> // para min e max
#include <iostream>
#include <vector>
#include <numeric> // para accumulate



int main() {
	int x, y;
	std::cin >> x;
	std::cin >> y;

	// criação de vetor com os números ímpares entre x e y
	std::vector <int> valores;
	for (int i = std::min(x,y) + 1; i < std::max(x,y); ++i) {
		if ((i % 2) != 0) {
	  		valores.push_back(i);
		}
	}

	// acesso a soma utilizando accumulate de biblioteca numeric
	int soma = std::accumulate(valores.begin(), valores.end(), 0);

	std::cout << soma << "\n";

	return 0;
}
