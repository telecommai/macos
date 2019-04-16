#pragma once
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <QDebug>
#include <QString>
  
#define KEY_LENGTH  1024             

class RSAClass
{
public:
	RSAClass();
	~RSAClass();

	std::string rsa_pub_encrypt(const std::string &clearText, const std::string &pubKey);
	std::string rsa_pri_decrypt(const std::string &cipherText, const std::string &priKey);
	void generateRSAKey(std::string strKey[2]);
};

