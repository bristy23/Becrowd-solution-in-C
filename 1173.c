#include<stdio.h>
int main()
{
    int v,n[10];
    scanf("%d",&v);
    for(int i=0; i<10; i++)
    {
      n[i]= v;
      printf("N[%d] = %d\n",i,v);
      v = (v*2);
    }
}
