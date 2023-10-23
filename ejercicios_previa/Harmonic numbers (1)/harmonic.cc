 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Juan Esteban Tamayo Marmolejo.
 * @date 23 oct 2023
 * @brief Write a program that reads a number n and prints the n-th harmonic number, defined as Hn = 1/1 + 1/2 + ⋯ + 1/n.
 *        The program takes directly the input and prints the output
 */

#include <iomanip> 
#include <iostream> 

int main() {
  double number, total = 0, iteracion = 0;
  std::cin >> number;
  if (number == 0) {
    std::cout << std::fixed << std::setprecision(4) << total << std::endl;
    return 0;
  }
  do {
    iteracion++;
    total = total + (1 / iteracion);
  } while (iteracion < number);
  std::cout << std::fixed << std::setprecision(4) << total << std::endl;
  return 0;
}
