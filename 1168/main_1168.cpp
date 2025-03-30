#include <iostream>
#include <string>
#include <vector>

int main() {
	int number_of_tests;
	std::string number;

	std::cin >> number_of_tests;
	std::vector<int> results; // para guardar os resultados e exibir depois
	
	for (int i = 0; i < number_of_tests; ++i){
		std::cin >> number;
		int number_of_leds = 0;
		for (char algarism : number){
			switch (algarism){
				case '0':
				case '6':
				case '9':
					number_of_leds += 6;
					break;
				case '1':
					number_of_leds += 2;
					break;
				case '2':
				case '3':
				case '5':
					number_of_leds += 5;
					break;
				case '4':
					number_of_leds += 4;
					break;
				case '7':
					number_of_leds += 3;
					break;
				case '8':
					number_of_leds += 7;
					break;
			}
		}
		results.push_back(number_of_leds);
	}

	for (int led : results){
		std::cout << led << " leds\n";
	}

	return 0;
}
