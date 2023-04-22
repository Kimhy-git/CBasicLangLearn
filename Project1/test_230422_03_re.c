#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int num = 5;

    /*for (int i = 0; i < num; i++) {
        for (int j = num; j > i; j--) {
            printf(" ");
        }
        for (int j = 0; j < 2*i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = num; i >=0; i--) {
        for (int j = 0; j < num-i; j++) {
            printf(" ");
        }
        for (int j = 0; j<i*2+1; j++) {
            printf("*");
        }
        printf("\n");
    }*/

    for (int i = 0; i < num; i++) {
        for (int j = num; j > i; j--) {
            printf(" ");
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = 1; i < num; i++) {
        for (int j = 0; j <=i; j++) {
            printf(" ");
        }
        for (int j = 2 * num- 1; j>2*i; j--) {
            printf("*");
        }
        printf("\n");
    }



}