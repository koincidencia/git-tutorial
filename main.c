#include <stdio.h>
#include <stdlib.h>

void kazyfunc()
{
    printf("en vagyok a kazy\n");
}

void kazymasikfunc()
{
    printf("Meg mindig en vagyok a kazy\n");
}


int main()
{
    printf("Hello world!\n");

    kazyfunc();
    kazymasikfunc();

    return 0;
}
