#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    if (N >= 21 && N <= 10000)
        // divisible check

        for (int i = 1; i <= N; i++)
            if (i % 3 == 0 && i % 7 == 0)

            {

                printf("%d\n", i);
            }

    return 0;
}