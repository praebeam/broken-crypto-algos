#include <iostream>
#include "aes.h"
#include "rsa.h"
#include "sha256.h"
#include "dh.h"
using namespace std;

int main() {
    string plaintext = "Hello, World!";
    string key = "weakkey";
    string encrypted = AES(plaintext, key);
    string decrypted = AESDecrypt(encrypted, key);
    cout << "AES Encrypted: " << encrypted << endl;
    cout << "AES Decrypted: " << decrypted << endl;

    int message = 42, e = 3, d = 7, n = 55;
    int enc = RSAEncrypt(message, e, n);
    int dec = RSADecrypt(enc, d, n);
    cout << " RSA Encrypted: " << enc << endl;
    cout << " RSA Decrypted: " << dec << endl;

    string hash = SHA256("password123");
    cout << " SHA-256 Hash: " << hash << endl;

    int dhkey = DH(5, 3, 23);
    cout << " Diffie-Hellman Key: " << dhkey << endl;
    return 0;
}
