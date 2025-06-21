#include <stdio.h>

int get_line(char *line, FILE *stream) {
    int i = 0;
    char c;
    while ((c = fgetc(stream)) != EOF && c != '\n' && i < 127) {
        line[i++] = c;
    }
    if (i == 0 && c == EOF) {
        return EOF;
    }
    line[i] = '\0';
    return i;
}

int string_equal(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return 0;
        i++;
    }
    return str1[i] == str2[i];
}

int main() {
    char input_line[128];
    char p_line[128];
    int i = 0;
    while (get_line(input_line, stdin) != EOF) {
        if (string_equal(input_line, p_line))
            i++;
        else {
            if (i > 0)
                printf("%s\n", p_line);
            i = 0;
        }
        int j = 0;
        for (; input_line[j] != '\0' && j < 128; j++)
            p_line[j] = input_line[j];
        p_line[j] = '\0';
    }
    if (i > 0)
        printf("%s\n", p_line);
}
