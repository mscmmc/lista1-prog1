#include <iostream>
#include <cctype> // isupper, islower, isdigit, ispunct
#include <string>
#include <vector>

bool isValid(std::string password){
	if (password.size() < 6 || password.size() > 32){
		return false; // tamanho inválido
	}

	bool hasUpper = false, hasLower = false, hasDigit = false; //condições
	
	for (char c : password){ // análise de cada caracter em password
		if (ispunct(c) || isspace(c) || !isprint(c)){
			return false; // não pode ter pontuação, nem espaço, nem acentos
		}

		if (isupper(c)) hasUpper = true; // tem que ter maiúscula
		if (islower(c)) hasLower = true; // e minúscula
		if (isdigit(c)) hasDigit = true; // e algarismo
	}

	return hasUpper && hasLower && hasDigit; // se satisfizer todas as condições, retorna true
}

int main(){
	std::string password;
	std::string valid {"Senha valida.\n"};
	std::string notvalid {"Senha invalida.\n"};
	std::vector<std::string>feedback; // vetor para guardar os resultados
	while (std::getline(std::cin, password)){
		if (isValid(password)){
			feedback.push_back(valid);
		} else {
			feedback.push_back(notvalid);
		}
	}
	// impressão
	for (std::string result : feedback){
		std::cout << result;
	}
}
