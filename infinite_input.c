#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void check_null(char *ptr)
{
    if (ptr == NULL)
    {
        printf("Memory not allocated");
        exit(EXIT_FAILURE);
    }
}

int main()
{
    int n = 10; // initial size
    char *input_str = NULL;

    input_str = (char *)malloc(n * sizeof(char));
    check_null(input_str);

    fgets(input_str, n, stdin);

    // string length checker
    while (strlen(input_str) == n - 1 && input_str[n - 2] != '\n')
    {
        n *= 2;

        input_str = realloc(input_str, n * sizeof(char));
        check_null(input_str);

        fgets(input_str + n / 2 - 1, n / 2 + 1, stdin);
    }

    printf("%s", input_str);

    return 0;
}