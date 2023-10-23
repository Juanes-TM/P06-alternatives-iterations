   /**
    * Universidad de La Laguna
    * Escuela Superior de Ingeniería y Tecnología
    * Grado en Ingeniería Informática
    * Informática Básica
    *
    * @author Juan Esteban Tamayo Marmolejo.
    * @date 23 oct 2023
    * @brief Inputs an uppercas or lowercase letter,  and prints their opposite.
   *      The program takes directly the input and prints the output
   */

 #include <iostream>

int main() {
  char letra;
  int cambio_low_upper;
  std::cin  >> letra;
  cambio_low_upper = static_cast<int>(letra);
  if (cambio_low_upper >= 65 && cambio_low_upper <= 90){
    cambio_low_upper = cambio_low_upper + 32;
    letra = static_cast<char>(cambio_low_upper);
  }
  else if (cambio_low_upper >= 97 && cambio_low_upper <= 122){
    cambio_low_upper = cambio_low_upper - 32;
    letra = static_cast<char>(cambio_low_upper);
  }
  std::cout << letra << std::endl;
  return 0;
}


