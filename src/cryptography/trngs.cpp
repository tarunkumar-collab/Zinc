#include <iostream>

using namespace std;

class trng{
    public:
        __uint128_t ring_oscillator_with_shifting(__uint128_t number_of_rounds, __uint128_t number_of_shift_registers, __uint128_t number_of_xor_gates)
        {
            __uint128_t random_number = 1, xor_gate_count = 0;
            for (__uint128_t round = 0; round < number_of_rounds; round++)
                random_number = ~random_number;
            for (__uint128_t shift_register  = 0; shift_register < number_of_shift_registers; shift_register++)
            {
                if (shift_register % 2 == 0 && xor_gate_count < number_of_xor_gates)
                {
                    random_number = random_number ^ 1;
                    random_number << 1;
                }
                else if (shift_register % 2 == 1)
                {
                    random_number = random_number ^ 1;
                    random_number >> 1;
                }
            }

            return random_number;
        }
};

int main()
{
    trng t;
    long long int random_number = t.ring_oscillator_with_shifting(50,90,80);
    cout << random_number << endl;
}