int str_len(char str[]) {
    int len = 0;
    while (str[len] != '\0')
        len++;
    return len;
}

void deblank(char string[]) {
    char p = -1;
    int len = str_len(string);
    char result[len + 1];
    int i = 0, index = 0;
    for (; i < len; i++) {
        if (string[i] != ' ') {
            result[index++] = string[i];
        } else if (p != ' ') {
            result[index++] = ' ';
        }
        p = string[i];
    }
    result[index] = '\0';
}