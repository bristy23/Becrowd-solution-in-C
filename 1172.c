//Array Replacement I
#include<stdio.h>
int main()
{
    int i,X[10];
    //if(X[i]<=0){X[i]=1};the condition
    for(i=0;i<10;i++)
    {
        scanf("%d",&X[i]);
        if(X[i]<=0)
        {
            X[i]=1;
        }
        printf("X[%d] = %d",i,X[i]);
    }
}