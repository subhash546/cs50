#include <cs50.h>
#include<stdio.h>
int main(void)
{
    int n,m,y,b,d;
    //TO DO: promt to start size
    do
    {
        n=get_int("start size:");
        
    }
    while(n<9); 
    //To Do: prompt to end size 
    
    do
    {
        m=get_int("end size:");
        
    }
    while(m<n); 
    // to do: calculate number of years until certain threshold
    
    for (y=0;n<m;y++)
    {
        b=n/3;
        d=n/4;
        n=n+b-d;
        
    }
    { 
        // todo: print number of years 
        
        printf("Years: %i\n",y);
    }
}
