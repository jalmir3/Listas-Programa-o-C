#include <stdio.h>

struct HORARIO{
    int hora;
    int minuto;
    int segundo;
};
struct DATA{
    int dia;
    int mes;
    int ano;
};

struct HORARIO SOLICITAR(){
    struct HORARIO hora;
   printf("Digite a hora os minutos e os segundos\n");
   scanf(" %d %d %d",&hora.hora,&hora.minuto,&hora.segundo);
   return hora;
 }
 struct DATA SOLICITAR2(){
    struct DATA data;
   printf("Digite o dia o mes e o ano\n");
   scanf(" %d %d %d",&data.dia,&data.mes,&data.ano);
   return data;
 }
void IMPRIMIR(struct HORARIO hora){
    printf("%d:%d:%d \n",hora.hora,hora.minuto,hora.segundo);
    }
void IMPRIMIR2(struct DATA data){
    printf("%d/%d/%d \n",data.dia,data.mes,data.ano);
    }


int main()
{
   struct HORARIO horario;
   struct DATA data;
   

     horario = SOLICITAR();
     data = SOLICITAR2();
    printf("\n");
    
      IMPRIMIR(horario);
      IMPRIMIR2(data);
    
    

    return 0;
}