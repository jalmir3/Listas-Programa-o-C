#include <stdio.h>
#include <stdlib.h>

int main ()
{

  int *ptrNum2, *ptrNum;


  printf ("\nEndereC'o1: %p", &ptrNum);
  printf ("\nEndereC'o2: %p", &ptrNum2);

  if (ptrNum > ptrNum2){
    printf ("\nEndereço 1 é o maior");
      
  }
 else{
    printf ("\nEndereço 2 é o maior");
      
  }





  return 0;
}
