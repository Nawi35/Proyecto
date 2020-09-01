#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grades[3], total = 0;
    int i;
    for(i = 0; i < 3; i++){
        scanf("%f", &grades[i]);
        total += grades[i]/3;
    }
    printf("El promedio es de %.2f.\n", total);
    return 0;
}
