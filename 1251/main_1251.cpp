// tá dando wrong answer no beecrowd, mas não sei o que tá errado :/

#include <iostream>
#include <map> 
#include <vector>
#include <algorithm> // para std::sort

int main(){
	std::string line;
	std::vector<std::vector<std::pair<int, int>>> results; // para guardar os resultados
	
	while (std::getline(std::cin, line)){
	std::map<char, int> frequency; //mapeia cada caracter para a frequência na linha a cada iteração
		for (char c : line){
			frequency[c]++; // frequência daquele caracter é incrementada
		}
		
	// converte o map para um vetor e ordena por valor (frequência)
    std::vector<std::pair<char, int>> sorted(frequency.begin(), frequency.end()); // pares do map formando um vetor de pares p/ poder ordenar
    std::sort(sorted.begin(), sorted.end(), // ordenação
        [](const auto& a, const auto& b) { // função pega pares dois a dois e ordena de forma crescente
            return a.second < b.second; // se for true, a fica antes de b
        });

        std::vector<std::pair<int, int>> converted; // converter em int, int pra poder adicionar a results
        for (const auto& p : sorted) {
            converted.emplace_back(static_cast<int>(p.first), p.second);
        }

        results.push_back(converted);	

	}

	// fazer a impressão
	for (const auto& converted : results) { // para vetores no vetor result
		for (const auto&pair : converted) { // para pares no vetor sorted
			std::cout << static_cast<int>(pair.first) << " " << pair.second << "\n"; // o resultado de cada linha
		}
		std::cout << '\n';
	}


    return 0;
}
