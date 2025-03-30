#include <iostream>
#include <cmath> //para usar valor absoluto
#include <vector>

int main() {
	int x1, y1, x2, y2;
	std::vector<int> resultados;
	// coletar as entradas
	while (std::cin >> x1 >> y1 >> x2 >> y2){
		if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0){ // condição de parada
			break;
		} else if (x1 > 8 || y1 > 8 || x2 > 8 || y2 > 8){
			resultados.push_back(-1); // estou usando -1 como marcador de entrada inválida, só temos 8 linhas e colunas
		} else if (x1 == x2 && y1 == y2){ 
			resultados.push_back(0); // a rainha já está no lugar desejado
		} else if ((x1 == x2 && y1 != y2) || (x1 != x2 && y1 == y2) || (x1 != x2 && y1 != y2 && abs(x1 - x2) == abs(y1 - y2))){
			resultados.push_back(1); // a rainha está na mesma linha, coluna ou diagonal que o local desejado
		} else {
			resultados.push_back(2); // a rainha chega em qualquer lugar em até 2 movimentos
		}
	}

	// imprimir os resultados
	for (int resultado : resultados){
		if (resultado == -1) {
			std::cout << "Entrada inválida!\n";
		} else {
			std::cout << resultado << "\n";
		}
	}

	return 0;
}
