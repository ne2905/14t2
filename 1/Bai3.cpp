#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

// Generate a random integer in a given range
long long getRandom(long long low, long long high) {
    return low + rand() % (high - low);
}

// Calculate gcd
long long gcd(long long a, long long b) {
    if (a < b)
        return gcd(b, a);
    else if (a % b == 0)
        return b;
    else
        return gcd(b, a % b);
}

// Generate large random key
long long gen_key(long long q) {
    long long key = getRandom(pow(10, 5), q);  // Use smaller range for demonstration
    while (gcd(q, key) != 1) {
        key = getRandom(pow(10, 5), q);
    }
    return key;
}

// Modular exponentiation
long long power(long long a, long long b, long long c) {
    long long x = 1;
    long long y = a;

    while (b > 0) {
        if (b % 2 != 0)
            x = (x * y) % c;
        y = (y * y) % c;
        b = b / 2;
    }
    return x % c;
}

// Encrypt message
pair<vector<long long>, long long> encrypt(string msg, long long q, long long h, long long g) {
    vector<long long> en_msg;
    long long k = gen_key(q); // sender's private key
    long long s = power(h, k, q);
    long long p = power(g, k, q);

    for (char ch : msg) {
        en_msg.push_back(s * int(ch));
    }

    cout << "g^k used : " << p << endl;
    cout << "g^ak used : " << s << endl;

    return {en_msg, p};
}

// Decrypt message
string decrypt(vector<long long> en_msg, long long p, long long key, long long q) {
    string dr_msg = "";
    long long h = power(p, key, q);

    for (long long val : en_msg) {
        dr_msg += char(val / h);
    }

    return dr_msg;
}

int main() {
    srand(time(0));
    string msg = "encryption";
    cout << "Original Message: " << msg << endl;

    long long q = getRandom(pow(10, 5), pow(10, 6));  // Use smaller q for demonstration
    long long g = getRandom(2, q);

    long long key = gen_key(q); // receiver's private key
    long long h = power(g, key, q);
    cout << "g used: " << g << endl;
    cout << "g^a used: " << h << endl;

    auto [en_msg, p] = encrypt(msg, q, h, g);
    string dmsg = decrypt(en_msg, p, key, q);

    cout << "Decrypted Message: " << dmsg << endl;

    return 0;
}
