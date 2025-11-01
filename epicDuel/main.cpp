#include <vector>
#include "Warrior.hpp"
#include "Sorcerer.hpp"

using namespace std;

int main() {

  vector<Character*> characters;
  characters.push_back(new Warrior("Michelle", 99, 65));
  characters.push_back(new Sorcerer("Rowena", 15, 3));
  characters.push_back(new Sorcerer("Jameel", 99, 30));

  for (int i = 0; i < characters.size(); i++) {
    characters[i] -> displayInfo();
    characters[i] -> attack(); 
  }

  // upcasting
  Character* characterPtr = new Warrior("Charles", 40, 40);
  delete characterPtr; 

  // downcasting
  Warrior* warriorPtr = dynamic_cast<Warrior*>(characters[0]);
  if (warriorPtr) {
    cout << "downcasting worked!!" << endl; 
    warriorPtr -> specialAttack(); 
  }
  delete warriorPtr; 

  for (int i = 0; i < characters.size(); i++) {
    delete characters[i];
  }
  characters.clear();
  return 0;
}
