#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
// void print_num(int);

int main()
{
    srand(time(NULL));
    int i, j;
    int arr[10];
    for (i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100;
    }
    // print_num(arr[i]);
    printf("before sorting:");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("bubble sorting:");
    int temp;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
}

// void print_num(int x[10]){
//     int k;
//     for(k=0;k<10;k++){
//         printf("%d",x[k]);
//     }
//     return 0;

// }