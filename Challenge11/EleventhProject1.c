#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int Num;
    srand(time(NULL));
    Num = rand();
    Num = Num % 7;
    switch(Num)
    {
         case 0: printf("lundi\n");
              break;
         case 1: printf("Mardi\n");
              break;
         case 2: printf("Mercredi\n");
              break;
         case 3: printf("Jeudi\n");
              break;
         case 4: printf("Vendredi\n");
              break;
         case 5: printf("Jeudi\n");
              break;
         case 6: printf("Samedi\n");
              break;
         case 7: printf("Dimanche\n");
              break;
    }
    return 0;
}

