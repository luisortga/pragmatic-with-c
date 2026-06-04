// fizzbuzz
#include<stdio.h>

void fizzbuzz() {
    //
    for (int i=1; i <= 100; i++) {
        char *fz = "fizzbuzz";
        char *f = "fizz";
        char *b = "buzz";
        if ((i % 5 == 0) && (i % 3 == 0)) {
            printf("\n%s", fz);
        } else if (i % 5 == 0) {
            printf("\n%s", f);
        } else if (i % 3 == 0) {
            printf("\n%s", b);
        } else {
            printf("\n%d", i);
        }
    }
}

int main(){

    printf("game fizzbuzz");
    fizzbuzz();
    return 0;
}