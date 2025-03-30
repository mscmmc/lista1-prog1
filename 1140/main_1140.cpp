#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include <vector>

int main() {
	std::string sentence; 
	std::vector<char> results;

	while (std::getline(std::cin, sentence)){
		if (sentence == "*") { //condição de parada
			break;
		}
		std::istringstream stream(sentence); // criação de um objeto istringstream chamado stream a partir de sentence
		std::string word; //criação de variável word pra guardar a palavra sendo lida
		char first_letter = tolower(sentence[0]); // variável de caractere pra guardar a primeira letra da sentença 
		bool istautogram = true; 

		while (stream >> word){ // o operador de extração passa cada palavra pra word até atingir um espaço em branco
			if(tolower(word[0]) != first_letter){ // tolower impede erros por maiúscula/minúscula
				istautogram = false; // pois comparamos a primeira letra da sentença com a primeira letra de cada palavra
				break;
			}
		}
		// agora só falta trabalhar com os resultados
		if (istautogram){
			results.push_back('Y');
		} else {
			results.push_back('N');
		}
			
	}

	for (char result : results){
		std::cout << result << '\n';
	}

	return 0;
}
