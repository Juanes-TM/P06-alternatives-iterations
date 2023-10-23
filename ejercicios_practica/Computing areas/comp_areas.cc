/*
 *Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Juan Esteban Tamayo Marmolejo.
 * @date 23 oct 2023
 * @brief Write a program that reads several descriptions of rectangles and circles, and for each one prints its corresponding area.
 *        The program takes directly the input and prints the output
 */

#include <iomanip>
#include <iostream>
#include <cmath>

int main() {
  unsigned int numero_de_figuras{0};
  std::cin >> numero_de_figuras;
  if(numero_de_figuras == 0) {
  return 0;
  }
  const double pi = atan(1)*4;
  std::string figura;
  double altura{0}, base{0}, radio{0};
  for (int i = 0; i < numero_de_figuras; i++) {
    std::cin >> figura;
    if (figura == "rectangle") {
      std::cin >> altura >> base;
      std::cout << std::fixed << std::setprecision(6)<< altura*base << std::endl;
    }
    else if (figura == "circle") {
      std::cin >> radio;
      std::cout << std::fixed << std::setprecision(6)<< pi * pow(radio,2) << std::endl;
    }
  }
  return 0;
}
~         
