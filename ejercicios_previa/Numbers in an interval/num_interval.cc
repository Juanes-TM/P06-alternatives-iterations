/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Juan Esteban Tamayo Marmolejo.
 * @date 23 oct 2023
 * @brief Inputs two numbers and prints the interval between their.
 *        The program takes directly the input and prints the output
 */

#include <iostream>

int main () {
  int number1, number2;
  std::cin >> number1 >> number2;
  if (number1 != number2){
    if (number1 < number2){
      for (int i = number1; i < number2; i++){
        std::cout << i << ",";
      }
      std::cout << number2 << std::endl;
    }
  }
  else if (number1 == number2){
    std::cout << number1 << std::endl;
  }
  else {
    std::cout << std::endl;
  }
  return 0;
}
