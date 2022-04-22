// Copyright 2022 Alimov Mikhail
#ifndef MODULES_ALIMOV_MIKE_CEACER_CIFIR_INCLUDE_CAESAR_CIPHER_H_
#define MODULES_ALIMOV_MIKE_CEACER_CIFIR_INCLUDE_CAESAR_CIPHER_H_

#include <string>
#include <vector>

class CaesarCipher {
 public:
  std::string vvod;
  int offset;
  CaesarCipher();
  CaesarCipher(std::string vvod, int offset);
  std::string encrypt(std::string vvod, int offset);
  std::string decrypt(std::string vvod, int offset);

 private:
  const std::vector<std::string> alphabet = {
      "A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M",
      "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"};
};

#endif  // MODULES_ALIMOV_MIKE_CEACER_CIFIR_INCLUDE_CAESAR_CIPHER_H_
