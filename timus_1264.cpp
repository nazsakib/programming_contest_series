#include<stdio.h>
int main()
{
    int M, N, result;
    printf("Enter the values of M and N: \n");
    scanf("%d %d", &M,&N);

    result = N * (M+1);
    printf("Result is: %d ", result);

    return 0;
}
