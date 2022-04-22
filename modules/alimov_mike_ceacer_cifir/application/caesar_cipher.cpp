// Copyright 2022 Alimov mikhail

#include <stdlib.h>
#include <stdio.h>
#include <string>

#include "include/caesar_cipher.h"

int main(int argc, const char** argv) {
  if (argc != 3) {
    std::cout << "Argc not equal 3!";
    return 0;
  }

  try {
    CaesarCipher v(argv[1], argv[2]);
    std::string cipher = v.cipher();

    std::cout << cipher;
  } catch (...) {
    std::cout << "Exception";
  }

  return 0;
}
