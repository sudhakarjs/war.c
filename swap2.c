#include <stdio.h>
void swap(int *ac, int *bc)
{
    int temp = *ac;
    *ac = *bc;
    *bc = temp;
}
 
int main()
{
    int a, b;
    printf("Enter Value of a ");
    scanf("%d", &a);
    printf("\nEnter Value of b ");
    scanf("%d", &b);
    swap(&x, &b);
    printf("\nAfter Swapping: a = %d, b = %d", a, b);
    return 0;
}
