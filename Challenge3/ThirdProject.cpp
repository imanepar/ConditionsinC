#include <stdio.h>
#include <stdlib.h>



int main() {
	int Num1, Num2, Somme;
	printf("Veuillez saisir la valeur de deux nombres ? \n");
	scanf("%d%d", &Num1, &Num2);
	
	if (Num1 == Num2)
	{
		Somme = (Num1 + Num2) * 3;
		printf("La somme est : %d\n", Somme);
	}
	else 
	{
		Somme = Num1 + Num2;
		printf("la somme est : %d\n", Somme);
	}
	return 0;
}
