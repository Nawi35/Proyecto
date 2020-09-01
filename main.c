#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grades[3], total = 0;
    int i, j, approbed[3] = {0,0,0};
    for(j = 0; j < 50; j++)
        for(i = 0; i < 3; i++){
            scanf("%f", &grades[i]);
            total += grades[i]/3;
        if(total >= 7)
            approbed[0]++;
        else
            if (total >= 4)
                approbed[1]++;
            else
                approbed[2]++;
        }
    printf("Aprobaron %d alumnos.\n%d se fueron a diciembre y %d a marzo.\n", approbed[0], approbed[1], approbed[2]);
    return 0;
}
