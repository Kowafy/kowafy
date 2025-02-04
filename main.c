
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char first[255], last[255];

    printf("Enter your first name: ");
    fgets(first, 255, stdin);
    first[strlen(first)-1] = '\0'; /* remove the newline at the end */

<<<<<<< HEAD
    printf("Hello %s!\n", name);
    printf("Hello, %s!\n", name);
=======
    printf("Now enter your last name: ");
    gets(last); /* buffer overflow? what's that? */

    printf("Hello %s %s!\n", first, last);
>>>>>>> db97298960e1cefd2f5907c533151a52825d2052
    return 0;
}
