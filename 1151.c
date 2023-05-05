//Easy Fibonacci
/*
0 1 1 2 3 5 8 13 21;
*/
#include<stdio.h>
int main()
{
    int n,i,Arr[46];
    scanf("%d",&n);
    Arr[0]=0;
    Arr[1]=1;
    for(i=2;i<n;i++)
    {
        Arr[i]=Arr[i-1]+Arr[i-2];
    }
    printf("0");
    for(i=1;i<n;i++)
    {
        printf(" %d",Arr[i]);
    }
    printf("\n");
}
