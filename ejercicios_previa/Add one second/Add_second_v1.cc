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

int main(){
  int time[3];
  char final_time;
  for (int i = 0; i < 3; i++){
    std::cin >> time[i];
  }
  time[2]++;
  if(time[0] > 24 || time[1] > 60 || time[2] > 60){
    if (time[2] > 60){
      time[2] = time[2] % 60;
      time[1]++;
    }
    if (time[1] > 60){
      time[1] = time[1] % 60;
      time[0]++;
    }
    if (time[0] > 24){
      time[0] = time[0] % 24;
    }
  }
  for (int i = 0; i < 3; i++){
    if (time[i] < 10){
      std::cout << "0" << time[i];
    }else{
      std::cout << time[i];
    }
    if (i < 2){
      std::cout << ":";
    }
  }
  return 0;
}
