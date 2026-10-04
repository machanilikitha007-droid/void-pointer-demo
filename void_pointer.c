#include <stdio.h>

int main()
{
    int number = 25;
    float price = 45.50;
    char grade = 'A';

    void *ptr;

    ptr = &number;
    printf("Integer value: %d\n", *(int *)ptr);

    ptr = &price;
    printf("Float value: %.2f\n", *(float *)ptr);

    ptr = &grade;
    printf("Character value: %c\n", *(char *)ptr);

    return 0;
}
