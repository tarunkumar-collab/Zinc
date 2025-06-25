class trng{
    public:
        __uint128_t ring_oscillator_with_shifting(__uint128_t initial_value, __uint128_t number_of_rounds, __uint128_t number_of_shift_registers, __uint128_t number_of_xor_gates)
        {
            __uint128_t xor_gate_count = 0;
            for (__uint128_t round = 0; round < number_of_rounds; round++)
                initial_value = ~initial_value;
            for (__uint128_t shift_register  = 0; shift_register < number_of_shift_registers; shift_register++)
            {
                if (shift_register % 2 == 0 && xor_gate_count < number_of_xor_gates)
                {
                    initial_value = initial_value ^ 1;
                    initial_value << 1;
                }
                else if (shift_register % 2 == 1)
                {
                    initial_value = initial_value ^ 1;
                    initial_value >> 1;
                }
            }

            __uint128_t random_number = initial_value;
            return random_number;
        }
};