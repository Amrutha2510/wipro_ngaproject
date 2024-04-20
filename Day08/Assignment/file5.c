/*alternativel merge two strings*/

#include<stdio.h>
#include<string.h>

void strMerge(const char *s1, const char *s2, char *output)
{
    printf("string1 is %s\n", s1);
    printf("string2 is %s\n", s2);
    while (*s1 != '\0' && *s2 != '\0')
    {
        *output++= *s1++;
    *output++ = *s2++;
    }
    while (*s1 != '\0')
        *output++=*s1++;
    while (*s2 != '\0')
        *output++ = *s2++;
    *output='\0';
}

int main()
{
    char *str1; 
    char *str2;
    printf("String1:");
    scanf("%c", str1);
    printf("String2:");
    scanf("%c", str2);
    char *output=malloc(strlen(str1)+strlen(str2)+1); //allocate memory 7+4+1 = 12 in this case
    strMerge(str1,str2,output); 
    printf("%s",output);
    return 0;
}