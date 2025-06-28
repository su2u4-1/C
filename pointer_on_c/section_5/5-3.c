unsigned int reverse_bits(unsigned int value) {
    unsigned int result = 0;
    unsigned int bit_count = sizeof(value) * 8;

    for (unsigned int i = 0; i < bit_count; i++) {
        result <<= 1;
        result |= (value & 1);
        value >>= 1;
    }

    return result;
}
