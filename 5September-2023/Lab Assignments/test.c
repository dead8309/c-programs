#include <stdio.h>
int main()
{
    long long i = 0;
    while (i < 9223372036854775807)
    {
        long long sum = 0;
        for (long long j = i; j > 0; j = j / 10)
        {
            long long digit = j % 10;
            long long factorial = 1;
            for (long long k = 1; k <= digit; k++)
            {
                factorial *= k;
            }
            sum += factorial;
        }
        if (sum == i)
        {
            printf("%lld is Strong number\n", i);
        }
        i++;
    }
    return 0;
}