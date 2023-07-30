#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    // not to let minus figure in curley bracket
    if (N >= 0)
    {
        if (N % 3 == 0)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }

    return 0;
}