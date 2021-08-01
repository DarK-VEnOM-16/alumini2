#include <stdio.h>
#include <math.h>
#include <string.h>

long int power(int n, int r) {
  long unsigned int c, p = 1;

  for (c = 1; c <= r; c++)
    p = p*n;

  return p;
}

int main()
{
    long unsigned int t, digit, sum;
    long unsigned int n;
    printf("Enter n: ");
    scanf("%lld", &n);
    for(int i=0;i<n;i++)
    {
        digit=sum=0;
        t = i;
        while (t != 0)
        {
            digit++;
            t = t/10;
        }

        t = i;

        while (t != 0)
        {
            int remainder;
            remainder = t%10;
            sum = sum + power(remainder, digit);
            t = t/10;
        }

      if (i == sum)
        printf("%lld ", i);
    }


    return 0;
}


