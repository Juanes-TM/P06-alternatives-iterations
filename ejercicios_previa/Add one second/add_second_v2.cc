/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Juan Esteban Tamayo Marmolejo.
 * @date 23 oct 2023
 * @brief Inputs an hour, a minute and a seconds and prints the time plus one second.
 *        The program takes directly the input and prints the output
 */

#include <iostream>

int main() {
	int hora;
	int minuto;
	int segundo;
	
	std::cin >> hora >> minuto >> segundo;
	segundo = segundo + 1;

	if (hora >=24 || minuto >= 60 || segundo >= 60){

		if (segundo >= 60){
			segundo = segundo % 60;
			minuto = minuto + 1;
		}

		if (minuto >= 60){
                        hora = hora + 1;
                        minuto = minuto % 60;
                }

		if (hora >= 24){
                        hora = hora % 24;
                }

	}


	if (hora < 10 || minuto < 10|| segundo < 10){

		if (hora <10 && hora >= 0 && minuto >= 10 && segundo >= 10){
		std::cout << "0" << hora << ":" << minuto << ":" << segundo << std::endl;
		}	

		if (minuto <10 && minuto >= 0 && hora >= 10 && segundo >= 10){
        	std::cout << hora << ":0" << minuto << ":" << segundo << std::endl;
        	}

		if (segundo <10 && segundo >= 0 && minuto >= 10 && hora >= 10){
        	std::cout << hora << ":" << minuto << ":0" << segundo << std::endl;
        	}	

		if (minuto <10 && minuto >= 0 && hora <10 && hora >= 0 && segundo >= 10){
        	std::cout << "0" << hora << ":0" << minuto << ":" << segundo << std::endl;
        	}	

		if (hora <10 && hora >= 0 && segundo <10 && segundo >= 0 && minuto >= 10){
        	std::cout << "0" << hora << ":" << minuto << ":0" << segundo << std::endl;
        	}	

	 	if (minuto <10 && minuto >= 0 && segundo <10 && segundo >= 0 && hora >= 10){
        	std::cout << hora << ":0" << minuto << ":0" << segundo << std::endl;
        	}	

		if (hora <10 && hora >= 0 && segundo <10 && segundo >= 0 && minuto <10 && minuto >= 0 ){
        	std::cout << "0" << hora << ":0" << minuto << ":0" << segundo << std::endl;
        	}
	}	


	else{
	std::cout << hora << ":" << minuto << ":" << segundo << std::endl;
	}
	return 0;
}
