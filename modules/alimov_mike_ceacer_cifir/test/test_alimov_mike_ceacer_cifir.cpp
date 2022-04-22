// Copyright 2022 Alimov Mikhail

#include <gtest/gtest.h>
#include "include/alimov_mike_ceacer_cifir.h"

TEST(ALIMOV_ALIMOV_MIKHAIL, start) {
  CaesarCipher z;
  EXPECT_EQ(z.vvod, "");
}

TEST(ALIMOV_ALIMOV_MIKHAIL, start_2) {
  CaesarCipher z;
  EXPECT_EQ(z.offset, 0);
}

TEST(ALIMOV_ALIMOV_MIKHAIL, FALL) {
  CaesarCipher z;
  std::string a = "";
  ASSERT_ANY_THROW(z.encrypt(a, 3));
}

TEST(ALIMOV_ALIMOV_MIKHAIL, NO_FALL) {
  CaesarCipher z;
  std::string a = "TEST";
  ASSERT_NO_THROW((z.encrypt(a, 3)));
}

TEST(ALIMOV_ALIMOV_MIKHAIL, razshifrovca_NO_FALL) {
  CaesarCipher z;
  std::string a = "WHVW";
  ASSERT_NO_THROW((z.decrypt(a, 3)));
}

TEST(ALIMOV_ALIMOV_MIKHAIL, razshifrovca_FALL) {
  CaesarCipher z;
  std::string a = "";
  ASSERT_ANY_THROW((z.decrypt(a, 3)));
}

TEST(ALIMOV_ALIMOV_MIKHAIL, normal) {
  CaesarCipher z;
  std::string a = "TEST";
  EXPECT_EQ(z.encrypt(a, 3), "WHVW");
}

TEST(ALIMOV_ALIMOV_MIKHAIL, izmenili_razmer_shaga) {
  CaesarCipher z;
  std::string a = "TEST";
  EXPECT_EQ(z.encrypt(a, 2), "VGUV");
}

TEST(ALIMOV_ALIMOV_MIKHAIL, izmenili_razmer_shaga_2) {
  CaesarCipher z;
  std::string a = "TEST";
  EXPECT_EQ(z.encrypt(a, 5), "YJXY");
}

TEST(ALIMOV_ALIMOV_MIKHAIL, c_probelom) {
  CaesarCipher z;
  std::string a = "HELLO WORLD";
  EXPECT_EQ(z.encrypt(a, 3), "KHOOR ZRUOG");
}

TEST(ALIMOV_ALIMOV_MIKHAIL, mall_bycva) {
  CaesarCipher z;
  std::string a = "HeLlO WORLd";
  EXPECT_EQ(z.encrypt(a, 3), "KHOOR ZRUOG");
}

TEST(ALIMOV_ALIMOV_MIKHAIL, razshifrovca_bez_probela) {
  CaesarCipher z;
  std::string a = "WHVW";
  EXPECT_EQ(z.decrypt(a, 3), "TEST");
}

TEST(ALIMOV_ALIMOV_MIKHAIL, razshifrovca_izmenili_razmer_shaga) {
  CaesarCipher z;
  std::string a = "VGUV";
  EXPECT_EQ(z.decrypt(a, 2), "TEST");
}

TEST(ALIMOV_ALIMOV_MIKHAIL, razshifrovca_izmenili_razmer_shaga_2) {
  CaesarCipher z;
  std::string a = "YJXY";
  EXPECT_EQ(z.decrypt(a, 5), "TEST");
}

TEST(ALIMOV_ALIMOV_MIKHAIL, razshifrovca_c_probela) {
  CaesarCipher z;
  std::string a = "KHOOR ZRUOG";
  EXPECT_EQ(z.decrypt(a, 3), "HELLO WORLD");
}

TEST(ALIMOV_ALIMOV_MIKHAIL, razshifrovca_c_mall_bycva) {
  CaesarCipher z;
  std::string a = "KhOOr zRUOg";
  EXPECT_EQ(z.decrypt(a, 3), "HELLO WORLD");
}


