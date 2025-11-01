#include "MexicanJapaneseFusion.hpp"
#include <iostream>

MexicanJapaneseFusion::MexicanJapaneseFusion(string nme, string addr, int spceLevel, bool tatamiAvail): Restaurant(nme, addr), MexicanRestaurant(nme, addr, spceLevel), JapaneseRestaurant(nme, addr, tatamiAvail) {

}

void MexicanJapaneseFusion::describeCuisine() {
  std::cout << "A unique fusion of Mexican and Japanese cuisines" << std::endl; 
}

void MexicanJapaneseFusion::displaySpecialty() {
  std::cout << "Our specialties combine both cuisines - try our Sushi Tacos and Wasabi Guacamole!" << std::endl; 
}
