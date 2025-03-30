#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <sstream>

int main(){
	int L;
	std::vector<int>output; // vetor para guardar os resultados e imprimir ao final do programa
	while (std::cin >> L){
		std::cin.ignore(); // para evitar que o newline atrapalhe a leitura após L

		std::string line; 
		std::getline(std::cin, line); // leitura da linha como string
		std::istringstream iss(line); // conversão da variável linha em uma stream permitindo a extração dos números
		std::vector<int>speeds; // criação do vetor para adicionar as velocidades
		int speed;

		while (iss >> speed) { // uso do operador de extração pra passar a stream para a variável de velocidade
			speeds.push_back(speed); // cada velocidade é inserida no vetor
		}

		// agora é só fazer a definição da maior velocidade
		int max_speed = *std::max_element(speeds.begin(), speeds.end());

		int level;
		if (max_speed < 10){
			level = 1;
		} else if (max_speed < 20){
			level = 2;
		} else {
			level = 3;
		}
		// e adicionar ao vetor de saída
		output.push_back(level);
	}

	for (int category : output){
		std::cout << category << '\n';
	}

	return 0;
}

