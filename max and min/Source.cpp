#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int num[1001], loop, max, min;
    for (loop = 0; loop < n; loop++)
    {
        scanf("%d", &num[loop]);
    }
    max = num[0];
    min = num[0];
    for (loop = 0; loop < n; loop++)
    {
        if (num[loop] < min)
        {
            min = num[loop];
        }
        if (num[loop] > max)
        {
            max = num[loop];
        }
    }
    printf("%d\n%d", min, max);
    return 0;
}
