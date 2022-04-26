#include <stdio.h>
#include <stdlib.h>

char * strcpy(char *, const char *);
size_t strlen(const char *);
char * strncpy(char *, const char *, size_t);
char * strcat(char *, const char *);
char * strncat(char *, const char *, size_t);
int strend(const char *,const char *);
int strindex(const char *, const char *);
int main()
{
    char *s = "byle jakie slowo";
    char *p = calloc(strlen(s) + 1, sizeof(char));
    strcpy(p,s);
    printf("%s\n", s);
    printf("%s\n", p);
    strncpy(p,s,11);
    printf("%s\n", s);
    printf("%s\n", p);
    char * r = calloc(100, sizeof(char));
    *(r+0) = 'j';
    *(r+1) = 'a';
    *(r+2) = 'k';
    *(r+3) = 'i';
    *(r+4) = 'e';
    *(r+5) = 's';
    *(r+6) = ' ';
    *(r+7) = 's';
    *(r+8) = 'l';
    *(r+9) = 'o';
    *(r+10) = 'w';
    *(r+11) = 'o';
    *(r+12) = 0;
    strcat(r,s);
    printf("%s\n", s);
    printf("%s\n", r);
    strncat(r,s,12);
    printf("%s\n", s);
    printf("%s\n", r);
    printf("%d\n",strend(r,s));
    printf("%d\n",strindex(r,s));
    free(p);
    free(r);
    return 0;
}
char * strcpy(char * t, const char * s)
{
    char * p = t;
    while((*t++=*s++))
        ;
    return p;
}
size_t strlen(const char * s)
{
    size_t i=0;
    while(*s++)
        i++;
    return i;
}
char * strncpy(char * t, const char * s, size_t n)
{
    char * p = t;
    int i=0;
    while(*(s+i))
        i++;
    if(n>i)
        n=i;
    i=0;
    while(i<n)
    {
        *(t+i)=*(s+i);
        i++;
    }
    *(t+i)=0;
    return p;
}
char * strcat(char * t, const char * s)
{
    char * p = t;
    int i=0, j=0;
    while(*(t+j))
        j++;
    while(*(s+i))
    {
        *(t+j)=*(s+i);
        i++;
        j++;
    }
    *(t+j)=0;
    return p;
}
char * strncat(char * t, const char * s, size_t n)
{
    char * p = t;
    int i=0, j=0;
    while(*(t+j))
        j++;
    while(*(s+i))
        i++;
    if(n>i)
        n=i;
    i=0;
    while(i<n)
    {
        *(t+j)=*(s+i);
        i++;
        j++;
    }
    *(t+j)=0;
    return p;
}
int strend(const char * t, const char * s)
{
    int i=0, j=0;
    while(*(t+i))
    {
        if(*(t+i)==*(s+j))
            j++;
        else
            j=0;
        i++;
    }
    i=0;
    while(*(s+i))
        i++;
    if(i!=j)
        return 0;
    return 1;
}
int strindex(const char * t, const char * s)
{
    int i=0, j=0, k=0, l;
    while(*(s+i))
        i++;
    while(*(t+j))
    {
        if(*(t+j)==*(s+k))
        {
            l=j;
            while(*(t+l)==*(s+k))
            {
                l++;
                k++;
            }
            if(i==k)
                return j;
            k=0;
        }
        j++;
    }
    return -1;
}











