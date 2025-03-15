#ifndef AES_H
#define AES_H

#include <string>

// AES encryption function
std::string AES(const std::string& plaintext, const std::string& key);

// AES decryption function
std::string AESDecrypt(const std::string& ciphertext, const std::string& key);

#endif // AES_H