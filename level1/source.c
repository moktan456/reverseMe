#include <stdio.h>
#include <string.h>

void main(void)
{
    char    input[100];
    char    *password = "f!ndme";

    printf("Please enter key: ");
    scanf("%99s", input);

    if (!strcmp(input, password))
        printf("Good job.\n");
    else
        printf("Nope.\n");

    return ;
}
