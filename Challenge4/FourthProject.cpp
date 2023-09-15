#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main() {
	float a, b, c, delta, x1, x2, x;
	printf("Veuillez saisir la valeur des 3 nombres ? \n");
	scanf("%f%f%f", &a, &b, &c);
	delta = pow(b, 2) - 4*a*c;
	if (delta < 0 )
	{
		printf("pas de solution \n");
	}
	else if (delta == 0)
	{
		x = -b / 2 * a;
		printf("la solution est : %.2f", x);
	}
	else 
	{
		x1 = (-b + sqrt(delta)) / 2*a;
		x2 = (-b - sqrt(delta)) / 2*a;
		printf("la valeur de x1 est : %.2f\n", x1);
		printf("la valeur de x2 est : %.2f\n", x2);
			}
	return 0;
}
