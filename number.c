#include <stdio.h>
int main() 
{
    int r = 65;
    int s = 120;
    printf(" value of r=%d s=%d before swapping", r, s);

    r = r ^ s;
    s = r ^ s;
    r = r ^ s;
    printf("value of r=%d s=%d after swapping", r, s);

    return 0;
}
