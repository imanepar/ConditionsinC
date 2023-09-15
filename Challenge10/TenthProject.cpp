#include <stdio.h>



int main() {
	int Jour, Mois, annee;
	printf("Veuillez saisir le jour, le mois et l'annee ? \n");
	scanf("%d/%d/%d", &Jour, &Mois, &annee);
    printf("%d-",Jour);
    switch(Mois)
    {
       case 1: printf("Janvier");
       break;
       case 2: printf("Fevrier");
       break;
       case 3: printf("Mars");
       break;
       case 4: printf("Avril");
       break;
       case 5: printf("Mai");
       break;
       case 6: printf("Juin");
       break;
       case 7: printf("Juillet");
       break;
       case 8: printf("Aout");
       break;
       case 9: printf("Septembre");
       break;
       case 10: printf("Octobre");
       break;
       case 11: printf("Novembre");
       break;
       case 12: printf("Decembre");
       break;
    }
    printf("-%d\n",annee);
	return 0;
}
