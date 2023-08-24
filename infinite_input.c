#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    int n = 10; // initial size
    char *input_str;

    input_str = (char *)malloc(n * sizeof(char));

    fgets(input_str, n, stdin);

    while(strlen(input_str) == n-1 && input_str[n-2] != '\n'){
        printf("hi\n");
        break;
    }

    printf("%s",input_str);

    return 0;
}