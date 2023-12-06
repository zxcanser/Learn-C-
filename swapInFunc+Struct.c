#include <stdio.h>

struct Abstract
{
    int a, b;
};

void swap (struct Abstract *obj);  

int main()
{
    struct Abstract forSwapIn;
    struct Abstract forSwapOut;
    
    scanf("%d\n%d\n", &forSwapIn.a, &forSwapIn.b);
    scanf("%d\n%d", &forSwapOut.a, &forSwapOut.b);
    
    swap(&forSwapOut);
    
    int temp;

    temp = forSwapIn.a;
    forSwapIn.a = forSwapIn.b;
    forSwapIn.b = temp;
    
    printf("\n%d\n%d\n---------\n%d\n%d", forSwapIn.a, forSwapIn.b, forSwapOut.a, forSwapOut.b);
    
    return 0;
}

void swap(struct Abstract *obj)     //Внешняя функция меняющая значения местами в струкруре
{
    int temp;

    temp = obj->a;
    obj->a = obj->b;
    obj->b = temp;
}
