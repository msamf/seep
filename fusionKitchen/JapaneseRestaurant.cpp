#include "JapaneseRestaurant.hpp"
#include <iostream>

JapaneseRestaurant::JapaneseRestaurant(string nme, string addr, bool tatamiAvailable): Restaurant(nme, addr), hasTatami(tatamiAvailable) {
  
}

void JapaneseRestaurant::describeCuisine() {
  if (hasTatami) {
    std::cout << "Traditional Japanese cuisine with tatami seating avaialble" << endl; 
  }
  else {
    std::cout << "Traditional Japanese cuisine" << std::endl; 
  }
}
