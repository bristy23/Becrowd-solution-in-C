#include<stdio.h>
int main()
{
    int N,i,small,position;
    scanf("%d",&N);
    int Arr[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&Arr[i]);
        small = Arr[0];
    }
    for(i=0;i<N;i++)
    {
        if(small>Arr[i])
        {
        small = Arr[i];
        position = i;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",small,position);
}
