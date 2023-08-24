#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int n = 10; // initial size
    char *input_str;

    input_str = (char *)malloc(n * sizeof(char));

    scanf("%s",input_str);
    printf("%s",input_str);
    return 0;
}