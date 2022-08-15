#include <stdio.h>
#include <string.h>

void main()
{
    int len;
    char str[20];
    printf("Enter a input: ");
    scanf("%s",str);
    len = strlen(str);
    printf("%d\n ",len);
}

/*input: hello
output : 5/*