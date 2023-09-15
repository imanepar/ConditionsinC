#include <stdio.h>
#include <stdlib.h>


int main() {
	int annee, Mois, Jour, heure, minute, Seconds;
	int Choix; 
	printf("Veuillez saisir une annee ? \n");
	scanf ("%d", &annee);
	while (1)
	{
		printf ("Veuillez choisir un choix : \n 1: Mois \n 2: Jour \n 3: Heure \n 4: Minutes \n 5: Seconds \n 6: Quitter\n");
	    scanf("%d", &Choix);
	    switch (Choix)
	    {
	    	case 1 :
			Mois =  (2023 - annee) * 12;
	    	printf("%d\n", Mois);
	    	break;
	    	case 2 : 
			Jour = (2023 - annee) * 365;
	    	printf("%d\n", Jour);
	    	break;
	    	case 3 :
			heure = (2023 - annee) * 8760;
	    	printf("%d\n", heure);
	    	break;
	    	case 4 :
			minute =  (2023 - annee) * 525600;
	    	printf("%d\n", minute);
	    	break;
	    	case 5 : 
			Seconds = (2023 - annee) * 31536000;
	    	printf("%d\n", Seconds);
	    	break;
	    	case 6: 
	    	return 0;
	    	
		}
	}
	
	return 0;
}
