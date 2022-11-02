#include <stdio.h>
#include <stdlib.h>
void Maior(int *a,int *b){
  
  if(*a>*b){
  printf ("\nPor ordem de tamanho: %d e %d", *a,*b);}
  else{
  printf ("\nPor ordem de tamanho: %d e %d", *b,*a);   
  }
};
int main ()
{

  int Num2, Num;


  printf ("\nDigite um numero:");
  scanf("%d",&Num);
  printf ("\nDigite outro numero:");
  scanf("%d",&Num2);
  
  Maior(&Num,&Num2);
  

  return 0;
}
