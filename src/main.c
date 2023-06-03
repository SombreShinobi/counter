#include <stdio.h>
#include <string.h>

int main() {
    char line[4];
    int value;

    printf("Current value is: %d\n", value);
    while (value < 5 && value > -5) {
        scanf("%3s", line);

        if (strcmp("inc", line) == 0) {
            value++;
        } else if (strcmp("dec", line) == 0) {
            value--;
        }

        printf("Current value is: %d\n", value);
    }

    return 0;
}
