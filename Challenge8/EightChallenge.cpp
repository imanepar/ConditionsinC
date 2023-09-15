#include <stdio.h>
#include <stdlib.h>



int main() {
	float Note1, Note2, Note3, Moyenne;
	printf("Veuillez saisir la valeur des 3 notes ? \n");
	scanf("%f%f%f", &Note1, &Note2, &Note3);
	Moyenne = (Note1 + Note2 + Note3)/3;
	printf("Votre moyenne est : %.2f\n", Moyenne);
	if (Moyenne < 10)
	{
	    printf ("vous etes recalé \n");	
	}
	 else if (Moyenne < 12 )
	 {
	 	printf("votre mention est passable\n");
	 }
	 else if (Moyenne < 14)
	 {
	 	printf("Votre mention est assez bien \n");
	 }
	 else if (Moyenne < 16)
	 {
	 	printf("Votre mention est bien \n");
	 }
	 else 
	 {
	 	printf("Votre mention est tres bien \n");
	 }
	return 0;
}
