/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Juan Esteban Tamayo Marmolejo.
 * @date 23 oct 2023
 * @brief Write a program that reads pairs of numbers n and m with n ≥ m, and for each pair prints Hn − Hm.
 *        The program takes directly the input and prints the output
 */

#include <iomanip>
#include <iostream>

int main() {
  double numero1, numero2;
  while (std::cin >> numero1 >> numero2) {
    double harmonico{0.0};
    for (int i = numero2 + 1; i <= numero1; i++) {
      harmonico += 1.0 / i;
    }
    std::cout << std::fixed << std::setprecision(10) << harmonico << std::endl;
  }
}
