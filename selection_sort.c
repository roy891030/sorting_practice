#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{

    srand(time(NULL));
    int arr[10], i, j;
    for (i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100;
    }

    printf("before sorting:");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("slectin sort  :");
    //還沒打完 要去搭高鐵了 回台北再做
}