#include <stdio.h>

int main() {
    for(int i = 0; i < 5; i++) {
        printf("*");
    }
    for(int i = 0;i<3;i++) {
        printf("\n*");
        for(int j = 0;j<3;j++) {
            printf(" ");
        }
        printf("*");
    }
    printf("\n");
        for(int i = 0; i < 5; i++) {
        printf("*");
    }
    return 0;
}