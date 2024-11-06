#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    clock_t start,end;
    double cpu_time_used;

    start= clock();

    for(int i=0;i<1000;i++)
        printf("%d",i);

    end=clock();

    cpu_time_used=((double) (end-start))/CLOCKS_PER_SEC;
    printf("\n%lf",cpu_time_used);
}
