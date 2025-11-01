#include "Sorcerer.hpp"

Sorcerer::Sorcerer(string name, int health, int power): Character(name, health, power) {

}

void Sorcerer::attack() {
  cout << "Casts a spell!" << endl; 
}