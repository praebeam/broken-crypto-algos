#include "aes.h" 
#include <iostream>
#include <string>
using namespace std;

string AES(const string& plaintext, const string& key) {
    string ciphertext = plaintext;
    for (size_t i = 0; i < plaintext.size(); i++) {
        ciphertext[i] = plaintext[i] ^ key[i % key.size()];
    }
    return ciphertext;
}

string AESDecrypt(const string& ciphertext, const string& key) {
    return AES(ciphertext, key);
}
