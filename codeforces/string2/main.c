#include <stdio.h>
#include <string.h>

int main() {
    char s1[102];
    char s2[102];

    fgets(s1, 100, stdin);
    fgets(s2, 100, stdin);

    // Remove newline characters from the strings
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';

    // Convert both strings to lowercase
    strlwr(s1);
    strlwr(s2);

    int result = strcmp(s1, s2);



    if (result == 0) {
        printf("0\n"); // Strings are equal
    } else if (result < 0) {
        printf("-1\n"); // s1 is lexicographically less than s2
    } else {
        printf("1\n"); // s1 is lexicographically greater than s2
    }

    return 0;
}
