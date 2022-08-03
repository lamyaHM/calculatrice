#include <stdio.h>
#include<stdlib.h>
int main() {
    float a;
    float b; 
    float c;
    char opp ; 
    printf("entrer une valeur ");
    scanf("%lf", &a);
    printf ("entrer une valeur ");
    scanf ("%lf",&b);
    printf("entrer l'operastion souhaiter");
    scanf("%s",&opp);
   switch (opp)
   {
      case '+':
      printf("%.2lf",c = a + b);
      break;
      case '-'  :
      printf("%.2lf", c = a - b);
      break;
      case '*' :
      printf("%.2lf", c = a * b);
      break;
      case   '/' :
      printf("%.2lf", c = a / b);
      break;
      case   'q' :
      exit(0);
      break;
   }   
     return 0;
   }
