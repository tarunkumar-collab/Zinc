#include <iostream>

using namespace std;

class hashing{
    public:
        __uint64_t SHA256 (__uint32_t a,__uint32_t b, __uint32_t c, __uint32_t d, __uint32_t e, __uint32_t f, __uint32_t g, __uint32_t h, __uint32_t w_t, __uint64_t k_t)
        {
            __uint64_t copies[] = {a,b,c,d,e,f,g,h};
            __uint32_t maj = 0x0, ch = 0x0, sum_a = 0x0, sum_e = 0x0;
            ch = (e & f) ^ (~e & g);
            maj = (a & b) ^ (a & c) ^ (b & c);
            sum_e =  ^ ^;
            __uint32_t t1 = h + ch + sum_e + w_t + k_t;
            __uint32_t t2 = sum_a + maj;
            a = t1+t2;
            b = copies[0];
            c = copies[1];
            d = copies[2];
            e = copies[3] + t1;
            f = copies[4];
            g = copies[5];
            h = copies[6];
            
            for (int index = 0; index < sizeof(copies); index++)
                copies[index] = 0x0;

            __uint64_t hash = a+b+c+d+e+f+g+h;
            return hash;
        }

        __uint128_t SHA512 (__uint64_t a, __uint64_t b, __uint64_t c, __uint64_t d, __uint64_t e, __uint64_t f, __uint64_t g, __uint64_t h, __uint64_t w_t, __uint128_t k_t)
        {
            __uint128_t copies[] = {a,b,c,d,e,f,g,h};
            __uint128_t maj = 0x0, ch = 0x0, sum_a = 0x0, sum_e = 0x0;
            ch = (e & f) ^ (~e & g);
            maj = (a & b) ^ (a & c) ^ (b & c);
            sum_e =  ^ ^;
            __uint64_t t1 = h + ch + sum_e + w_t + k_t;
            __uint64_t t2 = sum_a + maj;
            a = t1+t2;
            b = copies[0];
            c = copies[1];
            d = copies[2];
            e = copies[3] + t1;
            f = copies[4];
            g = copies[5];
            h = copies[6];
            
            for (int index = 0; index < sizeof(copies); index++)
                copies[index] = 0x0;

            __uint128_t hash = a+b+c+d+e+f+g+h;
            return hash;
        }
};

int main()
{
    
}