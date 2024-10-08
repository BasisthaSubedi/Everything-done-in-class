#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);

    if (a >= 0) {
        if (a == 0) printf("Zero\n");
        else printf("Positive\n");
    } else {
        printf("Negative\n");
    }

    return 0;

}