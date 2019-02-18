// WAPKA

#include 'libft.h'

int ft_words(char *s, char c)
{
    int n;
    n = 0;
    
    while (*s)
    {
        while (*s == c)
            s++;
        if (!*s)
            return (n);
        n++;
        while (*s != c && *s)
            s++;
    }
    return (n + 1);
}

int ft_word_len(char *arr, char c)
{
    int n;
    
    n = 0;
    while(*arr == c)
        arr++;
    while(*arr != c)
    {
        arr++;
        n++;
    }
    return(n);
}

int main(void) {
    
    char *s = "+hello++my+world++";
    char c = '+';
    int a = 0;
    int b = 0;
    
    char **new_s = (char**)malloc(ft_words(s, c) * sizeof(char));
    
    while(*s)
    {
        while (*s == c && *s)
            s++;
        new_s[a] = ft_strnew(ft_word_len(s, c));
        while (*s != c && *s)
            new_s[a][b++] = *s++;
        new_s[a][b] = '\0';
        a++;
        b = 0;
    }
    new_s[a] = ft_strnew(2);
    new_s[a][b] = '\n';
    int nn = a;
    a = 0; b = 0;
    while (nn--)
        printf("%s", new_s[a++]);
    printf("%c", '\n');
    return 0;
}

