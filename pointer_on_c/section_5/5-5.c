int store_bit_field(int original_value, int value_to_store, unsigned starting_bit, unsigned ending_bit) {
    int mask = 0;
    for (unsigned i = ending_bit; i <= starting_bit; ++i)
        mask |= (1 << i);
    return (original_value & ~mask) | ((value_to_store << ending_bit) & mask);
}
