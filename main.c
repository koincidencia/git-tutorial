#include <stdio.h>
#include <stdlib.h>

void my_1st_print_func(){

    printf("\n\n\tthis is my func!\t\n\n");
}

int this_is_the_coolest_func(){

    int a = 2;
    int b = 7;
    int c = a + b;
    return c;
}

int main()
{
    my_1st_print_func();
    printf("%d\n", this_is_the_coolest_func());
    printf("Hello world!\n");
    return 0;
}
