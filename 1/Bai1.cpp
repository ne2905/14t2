#include <iostream>
#include <string>
#include <map>
#include <cmath>
#include <vector>
using namespace std;

// Hexadecimal to binary conversion
string hex2bin(string s) {
    map<char, string> mp = {
        {'0', "0000"}, {'1', "0001"}, {'2', "0010"}, {'3', "0011"},
        {'4', "0100"}, {'5', "0101"}, {'6', "0110"}, {'7', "0111"},
        {'8', "1000"}, {'9', "1001"}, {'A', "1010"}, {'B', "1011"},
        {'C', "1100"}, {'D', "1101"}, {'E', "1110"}, {'F', "1111"}
    };
    string bin = "";
    for (char c : s) {
        bin += mp[toupper(c)];
    }
    return bin;
}

// Binary to hexadecimal conversion
string bin2hex(string s) {
    map<string, char> mp = {
        {"0000", '0'}, {"0001", '1'}, {"0010", '2'}, {"0011", '3'},
        {"0100", '4'}, {"0101", '5'}, {"0110", '6'}, {"0111", '7'},
        {"1000", '8'}, {"1001", '9'}, {"1010", 'A'}, {"1011", 'B'},
        {"1100", 'C'}, {"1101", 'D'}, {"1110", 'E'}, {"1111", 'F'}
    };
    string hex = "";
    for (size_t i = 0; i < s.length(); i += 4) {
        string ch = s.substr(i, 4);
        hex += mp[ch];
    }
    return hex;
}

// Binary to decimal conversion
int bin2dec(string binary) {
    int decimal = 0, i = 0;
    long long binaryNum = stoll(binary);
    while (binaryNum != 0) {
        long long dec = binaryNum % 10;
        decimal += dec * pow(2, i);
        binaryNum /= 10;
        i++;
    }
    return decimal;
}

// Decimal to binary conversion
string dec2bin(int num) {
    string res = "";
    if (num == 0) return "0000";
    while (num > 0) {
        res = to_string(num % 2) + res;
        num /= 2;
    }
    while (res.length() % 4 != 0) {
        res = "0" + res;
    }
    return res;
}

// Permute function to rearrange the bits
string permute(string k, int arr[], int n) {
    string permutation = "";
    for (int i = 0; i < n; i++) {
        permutation += k[arr[i] - 1];
    }
    return permutation;
}

// Shifting the bits towards left by nth shifts
string shift_left(string k, int nth_shifts) {
    string s = "";
    for (int i = 0; i < nth_shifts; i++) {
        s = k.substr(1) + k[0];
        k = s;
        s = "";
    }
    return k;
}

// Calculating XOR of two strings of binary number a and b
string xor_strings(string a, string b) {
    string ans = "";
    for (size_t i = 0; i < a.length(); i++) {
        ans += (a[i] == b[i]) ? "0" : "1";
    }
    return ans;
}

// Table of Position of 64 bits at initial level: Initial Permutation Table
int initial_perm[] = {
    58, 50, 42, 34, 26, 18, 10, 2,
    60, 52, 44, 36, 28, 20, 12, 4,
    62, 54, 46, 38, 30, 22, 14, 6,
    64, 56, 48, 40, 32, 24, 16, 8,
    57, 49, 41, 33, 25, 17, 9, 1,
    59, 51, 43, 35, 27, 19, 11, 3,
    61, 53, 45, 37, 29, 21, 13, 5,
    63, 55, 47, 39, 31, 23, 15, 7
};

// Expansion D-box Table
int exp_d[] = {
    32, 1, 2, 3, 4, 5, 4, 5,
    6, 7, 8, 9, 8, 9, 10, 11,
    12, 13, 12, 13, 14, 15, 16, 17,
    16, 17, 18, 19, 20, 21, 20, 21,
    22, 23, 24, 25, 24, 25, 26, 27,
    28, 29, 28, 29, 30, 31, 32, 1
};

// Straight Permutation Table
int per[] = {
    16, 7, 20, 21,
    29, 12, 28, 17,
    1, 15, 23, 26,
    5, 18, 31, 10,
    2, 8, 24, 14,
    32, 27, 3, 9,
    19, 13, 30, 6,
    22, 11, 4, 25
};

// S-box Table
int sbox[8][4][16] = {
    {{14, 4, 13, 1, 2, 15, 11, 8, 3, 10, 6, 12, 5, 9, 0, 7},
     {0, 15, 7, 4, 14, 2, 13, 1, 10, 6, 12, 11, 9, 5, 3, 8},
     {4, 1, 14, 8, 13, 6, 2, 11, 15, 12, 9, 7, 3, 10, 5, 0},
     {15, 12, 8, 2, 4, 9, 1, 7, 5, 11, 3, 14, 10, 0, 6, 13}},

    {{15, 1, 8, 14, 6, 11, 3, 4, 9, 7, 2, 13, 12, 0, 5, 10},
     {3, 13, 4, 7, 15, 2, 8, 14, 12, 0, 1, 10, 6, 9, 11, 5},
     {0, 14, 7, 11, 10, 4, 13, 1, 5, 8, 12, 6, 9, 3, 2, 15},
     {13, 8, 10, 1, 3, 15, 4, 2, 11, 6, 7, 12, 0, 5, 14, 9}},

    {{10, 0, 9, 14, 6, 3, 15, 5, 1, 13, 12, 7, 11, 4, 2, 8},
     {13, 7, 0, 9, 3, 4, 6, 10, 2, 8, 5, 14, 12, 11, 15, 1},
     {13, 6, 4, 9, 8, 15, 3, 0, 11, 1, 2, 12, 5, 10, 14, 7},
     {1, 10, 13, 0, 6, 9, 8, 7, 4, 15, 14, 3, 11, 5, 2, 12}},

    {{7, 13, 14, 3, 0, 6, 9, 10, 1, 2, 8, 5, 11, 12, 4, 15},
     {13, 8, 11, 5, 6, 15, 0, 3, 4, 7, 2, 12, 1, 10, 14, 9},
     {10, 6, 9, 0, 12, 11, 7, 13, 15, 1, 3, 14, 5, 2, 8, 4},
     {3, 15, 0, 6, 10, 1, 13, 8, 9, 4, 5, 11, 12, 7, 2, 14}},

    {{2, 12, 4, 1, 7, 10, 11, 6, 8, 5, 3, 15, 13, 0, 14, 9},
     {14, 11, 2, 12, 4, 7, 13, 1, 5, 0, 15, 10, 3, 9, 8, 6},
     {4, 2, 1, 11, 10, 13, 7, 8, 15, 9, 12, 5, 6, 3, 0, 14},
     {11, 8, 12, 7, 1, 14, 2, 13, 6, 15, 0, 9, 10, 4, 5, 3}},

    {{12, 1, 10, 15, 9, 2, 6, 8, 0, 13, 3, 4, 14, 7, 5, 11},
     {10, 15, 4, 2, 7, 12, 9, 5, 6, 1, 13, 14, 0, 11, 3, 8},
     {9, 14, 15, 5, 2, 8, 12, 3, 7, 0, 4, 10, 1, 13, 11, 6},
     {4, 3, 2, 12, 9, 5, 15, 10, 11, 14, 1, 7, 6, 0, 8, 13}},

    {{4, 11, 2, 14, 15, 0, 8, 13, 3, 12, 9, 7, 5, 10, 6, 1},
     {13, 0, 11, 7, 4, 9, 1, 10, 14, 3, 5, 12, 2, 15, 8, 6},
     {1, 4, 11, 13, 12, 3, 7, 14, 10, 15, 6, 8, 0, 5, 9, 2},
     {6, 11, 13, 8, 1, 4, 10, 7, 9, 5, 0, 15, 14, 2, 3, 12}},

    {{13, 2, 8, 4, 6, 15, 11, 1, 10, 9, 3, 14, 5, 0, 12, 7},
     {1, 15, 13, 8, 10, 3, 7, 4, 12, 5, 6, 11, 0, 14, 9, 2},
     {7, 11, 4, 1, 9, 12, 14, 2, 0, 6, 10, 13, 15, 3, 5, 8},
     {2, 1, 14, 7, 4, 10, 8, 13, 15, 12, 9, 0, 3, 5, 6, 11}}
};

// Final Permutation Table
int final_perm[] = {
    40, 8, 48, 16, 56, 24, 64, 32,
    39, 7, 47, 15, 55, 23, 63, 31,
    38, 6, 46, 14, 54, 22, 62, 30,
    37, 5, 45, 13, 53, 21, 61, 29,
    36, 4, 44, 12, 52, 20, 60, 28,
    35, 3, 43, 11, 51, 19, 59, 27,
    34, 2, 42, 10, 50, 18, 58, 26,
    33, 1, 41, 9, 49, 17, 57, 25
};

string encrypt(string pt, string rkb[], string rk[]) {
    pt = hex2bin(pt);

    // Initial Permutation
    pt = permute(pt, initial_perm, 64);
    cout << "After initial permutation: " << bin2hex(pt) << endl;

    // Splitting
    string left = pt.substr(0, 32);
    string right = pt.substr(32, 64);

    for (int i = 0; i < 16; i++) {
        // Expansion D-box
        string right_expanded = permute(right, exp_d, 48);

        // XOR RoundKey[i] and right_expanded
        string xor_x = xor_strings(right_expanded, rkb[i]);

        // S-boxes
        string sbox_str = "";
        for (int j = 0; j < 8; j++) {
            int row = bin2dec(string(1, xor_x[j * 6]) + xor_x[j * 6 + 5]);
            int col = bin2dec(xor_x.substr(j * 6 + 1, 4));
            int val = sbox[j][row][col];
            sbox_str += dec2bin(val);
        }

        // Straight D-box
        sbox_str = permute(sbox_str, per, 32);

        // XOR left and sbox_str
        string result = xor_strings(left, sbox_str);
        left = result;

        // Swapper
        if (i != 15) {
            swap(left, right);
        }
        cout << "Round " << i + 1 << " " << bin2hex(left) << " " << bin2hex(right) << " " << rk[i] << endl;
    }

    // Combination
    string combine = left + right;

    // Final permutation
    string cipher_text = permute(combine, final_perm, 64);
    return cipher_text;
}

int main() {
    string pt = "123456ABCD132536";
    string key = "AABB09182736CCDD";

    // Key generation
    key = hex2bin(key);

    // Parity bit drop table
    int keyp[] = {
        57, 49, 41, 33, 25, 17, 9,
        1, 58, 50, 42, 34, 26, 18,
        10, 2, 59, 51, 43, 35, 27,
        19, 11, 3, 60, 52, 44, 36,
        63, 55, 47, 39, 31, 23, 15,
        7, 62, 54, 46, 38, 30, 22,
        14, 6, 61, 53, 45, 37, 29,
        21, 13, 5, 28, 20, 12, 4
    };

    // Getting 56 bit key from 64 bit using the parity bits
    key = permute(key, keyp, 56);

    // Number of bit shifts
    int shift_table[] = {1, 1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1};

    // Key-Compression Table
    int key_comp[] = {
        14, 17, 11, 24, 1, 5, 3, 28,
        15, 6, 21, 10, 23, 19, 12, 4,
        26, 8, 16, 7, 27, 20, 13, 2,
        41, 52, 31, 37, 47, 55, 30, 40,
        51, 45, 33, 48, 44, 49, 39, 56,
        34, 53, 46, 42, 50, 36, 29, 32
    };

    // Splitting
    string left = key.substr(0, 28);
    string right = key.substr(28, 56);

    string rkb[16], rk[16];
    for (int i = 0; i < 16; i++) {
        // Shifting the bits
        left = shift_left(left, shift_table[i]);
        right = shift_left(right, shift_table[i]);

        // Combination of left and right string
        string combine_str = left + right;

        // Compression of key from 56 to 48 bits
        string round_key = permute(combine_str, key_comp, 48);

        rkb[i] = round_key;
        rk[i] = bin2hex(round_key);
    }

    cout << "Encryption" << endl;
    string cipher_text = bin2hex(encrypt(pt, rkb, rk));
    cout << "Cipher Text: " << cipher_text << endl;

    cout << "Decryption" << endl;
    // Reverse the round keys for decryption
    string rkb_rev[16], rk_rev[16];
    for (int i = 0; i < 16; i++) {
        rkb_rev[i] = rkb[15 - i];
        rk_rev[i] = rk[15 - i];
    }
    string text = bin2hex(encrypt(cipher_text, rkb_rev, rk_rev));
    cout << "Plain Text: " << text << endl;

    return 0;
}
