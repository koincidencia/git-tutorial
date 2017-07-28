#include <stdio.h>
#include <stdlib.h>

void my_1st_print_func(){

    printf("\n\n\tthis is my func!\t\n\n");
}

void kazyfunc()
{
    printf("en vagyok a kazy\n");
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
void kazymasikfunc()
{
    printf("Meg mindig en vagyok a kazy\n");
}

float average(int* arr, int len)
{
    float avg = 0;
    for (int i = 0; i < len; i++) {
        avg += arr[i];
    }

    return (avg / len);
}

void reszelo()
{
    printf("Reszelem a kodot\n");
}

void kalapalo()
{
    printf("kopp-kopp\n");
}

int main()
{
    my_1st_print_func();
    printf("%d\n", this_is_the_coolest_func());
    printf("Hello world!\n");
    for_loop_func();
    kazyfunc();
    kazymasikfunc();

    int tomb[5] = {1, 2, 3, 4, 5};
    float avg = average(tomb, 5);
    printf("Az atlag: %f", avg);

    return 0;
}
