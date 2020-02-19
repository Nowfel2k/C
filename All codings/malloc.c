#include <stdio.h>

int
main (void)
{
   char colour;

   /* ask user for colour */
   printf ("Enter the colour of the light (R,G,Y,A): ");
   scanf ("%c", &colour);

   /* test the alternatives */
   switch (colour)
   {
       /* red light */
       case 'R':
       case 'r':
                 printf ("STOP! \n");
                 break;

       /* yellow or amber light */
       case 'Y':
       case 'y':
       case 'A':
       case 'a':
                 printf ("CAUTION! \n");
                 break;

       /* green light */
       case 'G':
       case 'g':
                 printf ("GO! \n");
                 break;

       /* other colour */
       default:
                 printf ("The colour is not valid.\n");
   }

   return (0);
}
