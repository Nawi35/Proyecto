#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int alumns;
    float grades[3], classAverage = 0, standDev = 0;
    int i, j, approbed[3] = {0,0,0};
    do{
        printf("Ingrese la cantidad de alumnos en el curso.\n");
        scanf("%d", &alumns);
        if(!isDigit(alumns))
            printf("Por favor, ingrese un n%cmero.\n", 163);
    }while(!isDigit(alumns));
    float average[alumns];
    for(j = 0; j < alumns; j++)
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
    for(i = 0; i < alumns; i++){
        standDev += Pow(average[i] - classAverage, 2)/alumns;
    }
    printf("Aprobaron %d alumnos.\n%d se fueron a diciembre y %d a marzo.\n", approbed[0], approbed[1], approbed[2]);
    printf("El promedio de todos los promedios es %f. Su varianza es de %.2f, por lo que su desviación estándar de %.2f.\n", classAverage / alumns, pow(standDev,2), standDev);
    return 0;
}
