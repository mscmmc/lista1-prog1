#include <iostream>
#include <string>
#include <vector>

int main(){
	int N; // número de test cases
	std::cin >> N;
	std::vector<int>results;
	for (int i = 0; i < N; ++i){
		int L; // número de linhas pra um test case
		std::cin >> L;
		std::cin.ignore();

		int totalhash = 0;

		for (int lineindex = 0; lineindex < L; ++lineindex){
			std::string line;
			std::getline(std::cin, line); // input de cada linha atribuindo à variável line

			for (long unsigned int charposition = 0; charposition < line.size(); ++charposition){
				char c = line[charposition]; // variável pra analisar o caracter de cada posição na linha
				int alphabetposition = c - 'A'; // cálculo da posição no alfabeto
				int element = lineindex; // índice da linha
				int position = charposition; // índice da posição do caracter

				int charValue = alphabetposition + element + position; // valor de um caractere
				totalhash += charValue; // adiciona no valor da hash dentro do case test L
				}
		}

		results.push_back(totalhash); // acúmulo do resultado ao final de cada test case para impressão ao final
	}
	
	for (int total : results){
		std::cout << total << '\n';
	}
	

}
