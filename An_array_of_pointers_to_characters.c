#include <stdio.h>
const int MAX = 4;

int main() {
    char *days[] = {
        "Sunday",
        "Monday",
        "Tuesday",
        "Wednesday"};

    int i = 0;

    for(i = 0; i < MAX; i++) {
        printf("Value of days[%d] = %s\n", i, days[i]);
    }

    return 0;
}
