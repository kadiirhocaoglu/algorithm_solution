#include <stdlib.h>
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}
char *kh_strdup(char *src)
{
    char *rocket;
    int lenght_;
    int i;

    i = 0;
    lenght_ = ft_strlen(src);
    rocket = (char*) malloc (lenght_ * sizeof(char) + 1);
    if(!rocket)
        return(0);
    while(i < lenght_)
    {
        rocket[i] = src[i];
        i++;
    }
    rocket[i] = '\0';
    return(rocket);
}
