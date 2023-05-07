#include<stdio.h>
int main()
{
  int i,j=0,posi,arr[100];
  for(i=0;i<100;i++)
  {
    scanf("%d",&arr[i]);
    if(arr[i]>j)
    {
      j=arr[i];
      posi=i+1;
    }
  }
  printf("%d\n%d\n",j,posi);
}
