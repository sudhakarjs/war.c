#include <stdio.h>
  int main() {
    int a[10];
    int k;
    int greatest;
    printf("Enter ten values:");
    for (k = 0; k < 10; k++) {
    scanf("%d", &a[k]);
} 
    greatest = a[0];
    for (k = 0; k < 10; k++) {
if (a[k] > greatest) {
greatest = a[k];
    }
    }
    printf("
    Greatest of ten numbers is %d", greatest);
    return 0;
  }
