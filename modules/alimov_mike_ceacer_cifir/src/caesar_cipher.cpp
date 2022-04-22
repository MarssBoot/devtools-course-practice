// Copyright 2022 Alimov Mikhail
#include "include/caesar_cipher.h"
CaesarCipher::CaesarCipher() {
  vvod = "";
  offset = 0;
}

CaesarCipher::CaesarCipher(std::string vvod1, int offset1) {
  vvod = vvod1;
  offset = offset1;
}

std::string CaesarCipher::encrypt(std::string plain, int offset) {
  if (plain.empty()) throw 1;
  int len = plain.size();
  std::string result;
  for (int i = 0; i < len; i++) {
    if (isalpha(plain[i])) {
      int num = std::toupper(plain[i]) - 'A';
      int nxt = (num + offset + 26) % 26;
      result.append(alphabet[nxt]);
    } else {
      std::string s;
      s = plain[i];
      result.append(s);
    }
  }
  return result;
}
std::string CaesarCipher::decrypt(std::string cipher, int offset) {
  if (cipher.empty()) throw 1;
  int len = cipher.size();
  std::string result;
  for (int i = 0; i < len; i++) {
    if (isalpha(cipher[i])) {
      int num = toupper(cipher[i]) - 'A';
      int nxt = (num - offset + 26) % 26;
      result.append(alphabet[nxt]);
    } else {
      std::string s;
      s = cipher[i];
      result.append(s);
    }
  }
  return result;
}
