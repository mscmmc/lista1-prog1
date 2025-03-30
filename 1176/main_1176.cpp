#include <iostream>
#include <vector>

std::vector<long long>memory (70, -1); // vetor com os resultados pra a recursão conseguir lidar com números grandes

long long fibonacci (unsigned int n){
	if (n == 0){
		return 0;
	} else if (n == 1){
		return 1;
	} else if (memory[n] != -1){ // se o valor já tiver sido calculado, não é necessário recalcular
		return memory[n]; // não conhecia esse "truque", precisei usar porque tava dando time limit exceeded no beecrowd
	} else {
		return memory[n] = (fibonacci(n - 1) + fibonacci(n - 2)); // função definida recursivamente
	}
}

int main(){
	unsigned int t;
	std::cin >> t; // número de testes
	std::vector<unsigned int>input(t); // para guardar os inputs
	
	for (unsigned int i = 0; i < t; ++i){
		std::cin >> input[i]; // teste por teste preenchendo o vetor
	}

	for (unsigned int number : input){
		std::cout << "Fib(" << number << ") = " << fibonacci(number) << '\n';
	}

	return 0;

}
