#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grades[3], total = 0;
    int i;
    for(i = 0; i < 3; i++){
        scanf("%f", &grades[i]);
        total += grades[i]/3;
	if(total >= 7)
		printf("El alumnos esta aprobado.\n")
	else
		printf("El alumnos esta desaprobado.\n")
    }
    printf("El promedio es de %.2f.\n", total);
    return 0;
}
