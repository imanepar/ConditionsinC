#include <stdio.h>
#include <stdlib.h>



int main() {
	int Number;
	printf("veuillez saisir un nombre ?\n");
	scanf("%d", &Number);
	
	if (Number < 0)
	{
		printf("Le nombre est negative \n");
	}
	else if (Number > 0 )
	{
		printf("Le nombre est positive \n");
	}
	else 
	{
		printf("Le nombre est null \n");
	}
	return 0;
}
