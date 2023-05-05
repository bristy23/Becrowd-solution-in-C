//Fibonacci Array
#include<stdio.h>
int main()
{
    int i,t,num;
    long long int fib[60];//As per condition in question
    //t=testcase    
    fib[0]=0;
    fib[1]=1;
    for(i=2;i<61;i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    scanf("%d",&t);        
    for(i=0;i<t;i++)
    {
        scanf("%d",&num);
        printf("Fib(%d) = %lld\n",num,fib[num]);//you will get error in this line if you are not attentive          
    }    
}