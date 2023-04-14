#include <stdlib.h>
int *kh_range(int min, int max)
{
    int len;
    int *rocket;
    int index;

    index = 0;
    len = max - min;
    if(min >= max)
        return(0);
    
    rocket = (int*) malloc (len * sizeof(int));
    if(!rocket)
        return(0);
    
    while (min < max && index < len)
    {
        rocket[index]= min;
        index++;
        min++;
        
    }
    
    return(rocket);
}