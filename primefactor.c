#include <stdio.h>

int main()
{
    long long int sayi = 600851475143;
    int i = 2;
    while (i <= sayi)
    {
        if (sayi % i == 0)
        {
            printf("%d ", i);

            while (sayi % i == 0)
            {
                sayi /= i;
            }
        }

        i++;
    }

    return 0;
}
