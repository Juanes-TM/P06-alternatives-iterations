/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Juan Esteban Tamayo Marmolejo.
 * @date 23 oct 2023
 * @brief Inputs 3 integer  numbers and prints their maximum.
 *        The program takes directly the input and prints the output
 */

#include <iostream>

int main() {
  int numbers[3];
  long  max = -9999999999999999999999999999;
  for (int i = 0; i < 3; i++) {
    std::cin >> numbers[i];
  }
  for (int i = 0; i < 3; i++) {
    if (numbers[i] > max) {
      max = numbers[i];
    }
  }
  std::cout << max << std::endl;
	return 0;
}
