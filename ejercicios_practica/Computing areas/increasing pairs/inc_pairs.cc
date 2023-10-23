/*
 *Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Juan Esteban Tamayo Marmolejo.
 * @date 23 oct 2023
 * @brief Write a program that reads sequences of natural numbers, and that for each one prints the number of pairs of consecutive numbers such that the second number of the pair is greater than the first one.
 *        The program takes directly the input and prints the output
 */

#include <iostream>

int main () {
  int number;
  std::cin >> number;
  for (int i = 0; i < number; i++) {
    int a = -1, b = -1, c = 0;
    while (a != 0) {
      std::cin >> a;
      if ( a > b && b != -1) c++;
        b = a;
    }
    std::cout << c << std::endl;
  }
  return 0;
}
