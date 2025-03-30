#include <iostream>
#include <vector>

int main() {
	int t; // numero de test cases
	std::cin >> t;
	std::vector<int>output;

	for (int i = 0; i < t; ++i){
		int pa, pb; // populações		
		double ga, gb; // growth rate

		std::cin >> pa >> pb >> ga >> gb;

		int years {0};
		bool exceeded {false}; // para evitar cálculos desnecessários

		while (pb >= pa){ // adição ano a ano
			years += 1;
			pa += pa * (ga / 100);
			pb += pb * (gb / 100);

			if (years > 100){
				exceeded = true;
				break;
			}
		}
	
		if (exceeded){
			output.push_back(-1); // mais de 1 seculo
		} else {
			output.push_back(years);
		}
	}
	
	for (int period : output){
		if (period == -1){
			std::cout << "Mais de 1 seculo.\n";
		} else {
			std::cout << period << " anos.\n";
		}
	}
}

