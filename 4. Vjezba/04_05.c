#include <stdio.h>

int funkcija(unsigned int n, int k)
{
    // loop through each byte in n
    for (int i = 0; i < sizeof(n); i++)
    {
        // extract the i-th byte of n
        int bajt = (n >> (8*i)) & 11111111;
        // check if the byte is equal to k
        if (bajt == k) {
            printf("Da\n"); // byte found
        }
    }
    printf("Ne\n"); // byte not found
}

int main (void)
{
    unsigned int a=25;
    int b=3;
    printf (funkcija (a,b));

}
