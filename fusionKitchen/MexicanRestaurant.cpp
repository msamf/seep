#include "MexicanRestaurant.hpp"
#include <iostream>

MexicanRestaurant::MexicanRestaurant(string nme, string addr, int spceLevel): Restaurant(nme, addr), spiceLevel(spceLevel) {
  
}

void MexicanRestaurant::describeCuisine() {
  std::cout << "Authentic Mexican cuisine with a spice level " << spiceLevel << " out of 5" << std::endl; 
}