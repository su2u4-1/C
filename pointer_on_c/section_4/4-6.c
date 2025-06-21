int str_len(char str[]) {
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

int substr(char dst[], char src[], int start, int len) {
    if (start < 0 || len < 0) {
        dst[0] = '\0';
        return 0;
    }
    if (str_len(src) < start) {
        dst[0] = '\0';
        return 0;
    }
    for (int i = start; i < start + len; i++) {
        if (src[i] == '\0') {
            dst[i - start] = '\0';
            return i - start;
        }
        dst[i - start] = src[i];
    }
}
