#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 150;
    int* pNum = NULL;

    pNum = &num;

    printf("num address is: %p\n", &num);
    printf("Address of pNum is: %p\n", &pNum);
    printf("Value of pNum is: %p\n", &pNum);
    printf("Value of what pNum is pointing to: &d\n", *pNum);

    return 0;
}

