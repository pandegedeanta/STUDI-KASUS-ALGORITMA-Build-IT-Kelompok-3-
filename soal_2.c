#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n; scanf("%d", &n);
    for (int i=1; i<11; i++){
        printf("%d", n); printf(" x "); printf("%d", i); printf(" = "); printf("%d", n*i); printf("\n");
    }
}