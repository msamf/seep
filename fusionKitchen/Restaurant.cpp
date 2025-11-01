#include "Restaurant.hpp"
#include <iostream>

Restaurant::Restaurant(string n, string addr): name(n), address(addr) {
}

void Restaurant::displayInfo() {
  std::cout << "Restaunt name: " << name << std::endl; 
  std::cout << "Restaurant address: " << address << std::endl; 
}

void Restaurant::describeCuisine() {
  std::cout << "This restaurant serves various types of cuisines." << std::endl; 
}

void Restaurant::addMenuItem(MenuItem item) {
  menu.push_back(item);
}
  
void Restaurant::displayMenu() {
  std::cout << name << " menu: " << std::endl;  
  for (int i = 0; i < menu.size(); i++) {
    menu[i].display(); 
  }
}