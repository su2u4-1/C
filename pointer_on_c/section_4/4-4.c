void copy_n(char dst[], char src[], int n) {
    int is_null = 0;
    for (int i = 0; i < n; i++) {
        if (is_null)
            dst[i] = '\0';
        else {
            if (src[i] == '\0')
                is_null = 1;
            dst[i] = src[i];
        }
    }
}