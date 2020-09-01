#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float grades[3], classAverage = 0, average[50], standDev = 0;
    int i, j, approbed[3] = {0,0,0};
    for(j = 0; j < 50; j++)
        for(i = 0; i < 3; i++){
            scanf("%f", &grades[i]);
            average[j] += grades[i]/3;
        if(average[j] >= 7)
            approbed[0]++;
        else
            if (average[j] >= 4)
                approbed[1]++;
            else
                approbed[2]++;
        classAverage += average[i];
        }
    for(i = 0; i < 50; i++){
        standDev += pow(average[i] - classAverage, 2)/50;
    }
    printf("Aprobaron %d alumnos.\n%d se fueron a diciembre y %d a marzo.\n", approbed[0], approbed[1], approbed[2]);
    printf("El promedio de todos los promedios es %.2f. Su desviación estandar es de %.2f, por lo tanto su varianza de %.2f\n", classAverage, standDev, pow(standDev,2));
    return 0;
}
