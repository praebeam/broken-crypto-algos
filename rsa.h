#ifndef RSA_H
#define RSA_H

// RSA encryption function
int RSAEncrypt(int message, int e, int n);

// RSA decryption function
int RSADecrypt(int ciphertext, int d, int n);

#endif // RSA_H 