#include <stdio.h>
#include<stdlib.h>
int main() {
    float a;
    float b; 
    float c;
    char opp ; 
    printf("entrer une valeur ");
    scanf("%f", &a);
    printf ("entrer une valeur ");
    scanf ("%f",&b);
    printf("entrer l'operastion souhaiter");
    scanf("%s",&opp);
   switch (opp)
   {
      case '+':
      printf("%.2f",c = a + b);
      break;
      case '-'  :
      printf("%.2f", c = a - b);
      break;
      case '*' :
      printf("%.2f", c = a * b);
      break;
      case   '/' :
      printf("%.2f", c = a / b);
      break;
      case   'q' :
      exit(0);
      break;
   }   
        // return 0;
   }
