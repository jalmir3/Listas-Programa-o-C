#include <stdio.h>
#include <stdlib.h>

int main ()
{

  int ptrNum2, ptrNum;


  printf ("\nDigite um numero:");
  scanf("%d",&ptrNum);
  printf ("\nDigite outro numero:");
  scanf("%d",&ptrNum2);
  
  printf ("\nEndereço1: %p", &ptrNum);
  printf ("\nEndereço2: %p", &ptrNum2);

  if ((&ptrNum) > (&ptrNum2)){
    
    printf ("\nEndereço 1 é o maior");
      
  }
 else{
    printf ("\nEndereço 2 é o maior");
      
  }

  return 0;
}

