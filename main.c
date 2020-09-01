#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grades[3], total = 0;
    int i, j;	
    for(j = 0; j < 50; j++)
   for(i = 0; i < 3; i++){
        scanf("%f", &grades[i]);
        total += grades[i]/3;
	if(total >= 7)
		printf("El alumno est%c aprobado.\n", 160);
	else
        if (total >= 4)
            printf("El alumno pasa a Diciembre.\n");
        else
            printf("El alumno pasa a Marzo.\n");
    }
    printf("El promedio es de %.2f.\n", total);
    return 0;
}
