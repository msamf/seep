#include <string>

void asterisk_word(std::string word, std::string &text, int i) {

  // turn the part of text which contains word into asterisks
  for (int j = 0; j < word.size(); j++) {
    text[i+j] = '*';
  }
}

void bleep(std::string word, std::string &text) {

  // loop through all the letters of text
  for (int i = 0; i < text.size(); i++) {

    int word_match = 0;

    // if consecutive letter match the word, ..
    for (int j = 0; j < word.size(); j++) {

      if (text[i+j] == word[j]) {
        word_match++; // ..increment word_match
      }

    }

    // if word_match is the same size as word, then we have
    // found an instance of the word
    if (word_match == word.size()) {

      asterisk_word(word, text, i); // make the word asterisks

    }

  }

}