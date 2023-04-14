#include <unistd.h>
#include <stdlib.h>

int kh_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i])
        i++;
    return(i);
}
char *kh_strjoin(int size, char **strs, char *sep)
{
    int i;
    i = 0;
    int sizes;
    sizes = 0;
    while(i < size)
    {
        sizes += kh_strlen(strs[i]);
        i++;
    }
    char *ret_str = (char*) malloc (sizes * sizeof(char) + size - 1);
    int j;
    i = 0;
    int s;
    s = 0;
    while(strs[i])
    {
        j = 0;
        while(strs[i][j])
        {
            ret_str[s++] = strs[i][j];
            j++;
        }
        if(!(i == size - 1))
            ret_str[s++] = *sep;
        i++;
    }
    ret_str[s] = '\0';
    return(ret_str);
}
