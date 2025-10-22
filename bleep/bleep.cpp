#include <iostream>
#include <string>

#include "functions.hpp"

// PROJECT FROM CODECADEMY https://www.codecademy.com/courses/learn-c-plus-plus/projects/cpp-bleep
// This code takes a string text, and replaces all instances of string word within the text with asterisks. 

int main() {

  std::string word = "broccoli";
  std::string text = "Today, I am going to the grocery store to buy broccoli, as later I want to make a broccoli cheddar soup for dinner. I love cozy fall!";

  std::cout << text << "\n";

  bleep(word, text);

  std::cout << text << "\n";

}