#include <stdio.h>

int main()
{
   int price = 0;

    printf("Please input the price($):\n");
    scanf("%d",&price);

    int change = 100 - price;

    printf(Your change is $%d \n", change);

    return 0;
}
