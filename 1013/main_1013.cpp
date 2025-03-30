#include <iostream>

int main() {
	int a, b, c;
	std::cin >> a >> b >> c;

	int maiorAB = (a + b + abs (a-b))/2;
	int maior = (maiorAB + c + abs (maiorAB - c))/2;

	std::cout << maior << " eh o maior\n";

	return 0;
}

