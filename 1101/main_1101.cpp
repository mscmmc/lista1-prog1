#include <iostream>
#include <utility>
#include <vector>

int main(){
	int m, n;
	std::vector<std::pair<int, int>>numbers; // vetor com os pares n, m
	while (std::cin >> m >> n){
		if (m <= 0 || n <=0){
			break; // condição de parada
		} else if (m <= n){
			numbers.push_back(std::make_pair(m, n)); // m vem antes
		} else if (m > n) {
			numbers.push_back(std::make_pair(n, m)); // n vem antes
		}
	}

	for (std::pair<int, int> pair : numbers){ // percorre os pares no vetor
		int sum = 0;
		for (int i = pair.first; i <= pair.second; ++i){ // percorre do início ao final de cada par
			std::cout << i << " ";
			sum += i;
		}
		std::cout << "Sum=" << sum << '\n';
	}
	return 0;


			
}
