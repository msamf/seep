#include "Warrior.hpp"

Warrior::Warrior(string name, int health, int power): Character(name, health, power) {
  
}

void Warrior::attack() {
  cout << "Swings a mighty sword!" << endl;
}

void Warrior::specialAttack() {
  cout << name << " makes a devastating double strike!" << endl; 
}
