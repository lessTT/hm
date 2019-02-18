#include <stdio.h>
#include <stdlib.h>

void    *ft_bzero(void *s, size_t n)
{
    char    *new;
    size_t    y;
    
    y = 0;
    new = s;
    while (n > y)
    {
        
        new[y] = '\0';
        y++;
    }
    return (new);
}

void    *ft_memalloc(size_t size)
{
    void    *new;
    
    new = malloc(size);
    if (!new)
        return (NULL);
    ft_bzero(new, size);
    return (new);
}

char    *ft_strnew(size_t size)
{
    return ((char*)ft_memalloc(sizeof(char) * (size + 1)));
}

int num_len(int n)
{
    int len = 0;
    
    while(n)
    {    n = n / 10;
        len++;}
    return len;
}

//       <----------------------------->

int main(int argc, const char * argv[]) {
    
    int n = 1212349;
    int i = 0;
    
    char *strnum = (char*)malloc(sizeof(char) * num_len(n) + 1);
    
    while(n)
    {
        strnum[i] = ft_strnew(<#size_t size#>)
    }
    
    
    
    printf("%d", num_len(n));
    return 0;
}

