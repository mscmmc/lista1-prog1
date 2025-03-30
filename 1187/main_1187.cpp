#include <iostream>
#include <array>
#include <iomanip>

int main(){
	char operation;
	std::array<std::array<double, 12>, 12>matrix;

	std::cin >> operation; // leitura da operação a ser feita
	
	// leitura dos números pra preenchimento da matriz
	for (int i = 0; i < 12; ++i){
		for (int j = 0; j < 12; ++j){
			std::cin >> matrix[i][j];
		}
	}

	double sum = 0;

	// cálculo da soma
	for (int i = 0; i < 12; ++i){
		for (int j = 0; j < 12; ++j){
			if ((i < j) && (i + j <= 10)) { // contamos apenas com a área superior
				sum += matrix[i][j];
			}
		}
	}
	
	double average = (sum / 30);

	// cálculo a partir da entrada do usuário
	if (operation == 'S'){
		std::cout << std::fixed << std::setprecision(1) << sum << '\n';
	} else if (operation == 'M') {
		std::cout << std::fixed << std::setprecision(1) << average << '\n';
	} else {
		std::cout << "Please enter S for Sum or M for Average\n";
	}
 
	return 0;
}
