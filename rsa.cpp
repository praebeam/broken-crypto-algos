#include "rsa.h" 
#include <iostream>
#include <cmath>
using namespace std;

int RSAEncrypt(int message, int e, int n) {
    return (message + e) % n;
}

int RSADecrypt(int ciphertext, int d, int n) {
    return (ciphertext - d) % n;
}
