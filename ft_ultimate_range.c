#include <stdlib.h>

int kh_ultimate_range(int **range, int min, int max)
{
    int len;
    int i;
    int *rocket;

    len = max - min;
    if(min >= max)
    {
        return(0);
        *range = 0;
    }
    rocket =  malloc (len * sizeof(int));
    if(!rocket)
    {
        return(0);
        *range = 0;
    }
    *range = rocket;
     while (min < max && i < len)
    {
        rocket[i]= min;
        i++;
        min++;
        
    }
    
    return(len);
}
