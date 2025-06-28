class hashing{
    public:
        __uint128_t rotations (__uint128_t number, __uint128_t rotate_by_bits, char direction_of_rotation)
        {
            /** A function to rotate the number by a specified number of bits
            * @param number - The number to rotate.
            * @param rotate_by_bits - The number of bits to rotate by.
            * @param direction_of_rotation - The direction in which to rotate.
            * @return the rotated number.
            */

            __uint128_t left_out_bits = number;

            if (direction_of_rotation == 'l')
            {
                for (__uint128_t rotations = 0; rotations < rotate_by_bits; rotations ++)
                {
                    __uint128_t left_out_bits = left_out_bits << 1 | 1;
                    number = number << 1;
                }
            }

            else if (direction_of_rotation == 'r')
            {
                for (__uint128_t rotations = 0; rotations < rotate_by_bits; rotations ++)
                {
                    __uint128_t left_out_bits = left_out_bits << 1 | 1;
                    number = number << 1;
                }
            }

            __uint128_t rotated_number = number + left_out_bits;
            return rotated_number;
        }
        __uint64_t SHA256 (__uint32_t a,__uint32_t b, __uint32_t c, __uint32_t d, __uint32_t e, __uint32_t f, __uint32_t g, __uint32_t h, __uint32_t w_t, __uint64_t k_t)
        {
            __uint64_t copies[] = {a,b,c,d,e,f,g,h};
            __uint32_t maj = 0x0, ch = 0x0, sum_a = 0x0, sum_e = 0x0;
            ch = (e & f) ^ (~e & g);
            maj = (a & b) ^ (a & c) ^ (b & c);
            sum_e = rotations(e,14,'r') ^ rotations(e,18,'r') ^ rotations(e,41,'r');
            sum_a = rotations (a,28,'r') ^ rotations (a,34,'r') ^ rotations (a,39,'r');
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
            sum_e = rotations(e,14,'r') ^ rotations(a,18,'r') ^ rotations(a,41,'r');
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