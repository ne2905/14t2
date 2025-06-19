import random 
from math import pow

a = random.randint(2, 10)

def isPrime(n):
    if n<2:
        return False
    for i in range(2, int(n**0.5)+1):
        if n%i==0:
            return False
    return True

def gcd(a, b):
    if a < b:
        return gcd(b, a)
    elif a % b == 0:
        return b;
    else:
        return gcd(b, a % b)

# Generating large random numbers
def gen_key(q):

    key = random.randint(2, q-1)
    while gcd(q, key) != 1:
        key = random.randint(2, q-1)

    return key

# Modular exponentiation
def power(a, b, c):
    x = 1
    y = a

    while b > 0:
        if b % 2 != 0:
            x = (x * y) % c;
        y = (y * y) % c
        b = int(b / 2)

    return x % c

# Asymmetric encryption
def encrypt(msg, q, h, g):

    en_msg = []

    k = gen_key(q)# Private key for sender
    s = power(h, k, q)
    p = power(g, k, q)
    
    for i in range(0, len(msg)):
        en_msg.append(msg[i])

    print("g^k used : ", p)
    print("g^ak used : ", s)
    for i in range(0, len(en_msg)):
        en_msg[i] = s * ord(en_msg[i])

    return en_msg, p

def decrypt(en_msg, p, key, q):

    dr_msg = []
    h = power(p, key, q)
    for i in range(0, len(en_msg)):
        dr_msg.append(chr(int(en_msg[i]/h)))
        
    return dr_msg

# Driver code
def main():
    try:
        q=int(input("Nhập số nguyên lớn q (nguyên tố): "))
        if q < 1000 or not isPrime(q):
            raise ValueError("q phải là số nguyên tố và lớn hơn 1000")

        g = int(input(f"Nhập g (0 < g < {q}): "))
        if g <= 1 or g >= q:
            raise ValueError("g phải > 1 và < q")

        msg = input("Nhập thông điệp cần mã hóa: ")
        if not msg.strip():
            raise ValueError("Thông điệp không được rỗng")

        key = gen_key(q)# Private key for receiver
        h = power(g, key, q)
        print("g used : ", g)
        print("g^a used : ", h)

        en_msg, p = encrypt(msg, q, h, g)
        dr_msg = decrypt(en_msg, p, key, q)
        dmsg = ''.join(dr_msg)
        print("Decrypted Message :", dmsg);

    except ValueError as ve:
        print("LỖI:", ve)

if __name__ == '__main__':
    main()
