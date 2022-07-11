#include <stdio.h>

int linear_search(int *ordered_array, int search_value);

int main(void)
{
    int test[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int search = 6;

   printf("%d\n", linear_search(test, search)); 
}