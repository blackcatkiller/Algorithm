#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool check(long long x, long long xx) {
    char str1[10];
    char str2[20];
    lltoa(x, str1, 10);
    lltoa(xx, str2, 10);
    for (int i = 0; str1[i] != '\0'; i++) {
        for (int j = 0; str2[j] != '\0'; j++) {
            if (str1[i] == str2[j])
                return false;
        }
    }
    return true;
}

int main() {
    long long a, b, c, d, e, f;
    for (a = 1; a < 10; a++) {
        for (b = 0; b < 10; b++) {
            if (b != a)
                for (c = 0; c < 10; c++) {
                    if (c != a && c != b)
                        for (d = 0; d < 10; d++) {
                            if (d != a && d != b && d != c)
                                for (e = 0; e < 10; e++) {
                                    if (e != a && e != b && e != c && e != d)
                                        for (f = 0; f < 10; f++) {
                                            if (f != a && f != b && f != c && f != d && f != e) {
                                                long long x = a * 100000 + b * 10000 + c * 1000 + d * 100 + e * 10 + f;
                                                if (check(x, x * x)) {
                                                    printf("%lld %lld \n", x, x * x);
                                                }
                                            }
                                        }
                                }

                        }
                }
        }
    }

    return 0;
}