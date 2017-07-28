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

    int tomb[5] = {1, 2, 3, 4, 5};
    float avg = average(tomb, 5);
    printf("Az atlag: %f", avg);

    return 0;
}
