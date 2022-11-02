#include <stdio.h>
#include <stdlib.h>
void trocar(int *a,int *b){
  int aux;
  aux=*a;
  *a=*b;
  *b=aux;
  printf ("\nInvertidos: %d e %d", *a,*b);
};
int main ()
{

  int Num2, Num;


  printf ("\nDigite um numero:");
  scanf("%d",&Num);
  printf ("\nDigite outro numero:");
  scanf("%d",&Num2);
  
  trocar(&Num,&Num2);
  

  return 0;
}


