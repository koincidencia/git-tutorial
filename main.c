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

void for_loop_func(){

    for (int i = 1; i < 11; i++){
        printf("%d\n", i);
    }

}
int main()
{
    my_1st_print_func();
    printf("%d\n", this_is_the_coolest_func());
    printf("Hello world!\n");
    for_loop_func();
    return 0;
}
