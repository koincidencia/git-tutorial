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

float average(int* arr, int len)
{
    float avg = 0;
    for (int i = 0; i < len; i++) {
        avg += arr[i];
    }

    return (avg / len);
}


int main()
{
    printf("Hello world!\n");

    kazyfunc();
    kazymasikfunc();

    return 0;
}
