#include <stdio.h>
/*
  Leia uma data no formato: dd/mm/aaaa e informe se a data lida é válida. Considere o calendário gregoriano. Calcule o número de dias passados contando a partir do primeiro dia do calendário
*/
int main(void) {
  int dia = 0, mes = 0, ano = 0, mesX = 0, anoX = 0, resultado = 0, feb = 0;
  printf("Digite uma data no formato dd/mm/aaaa.\n");
  scanf("\n%i\n%i\n%i", &dia, &mes, &ano);
//Pede e guarda a data
  if(dia<1||31<dia||mes<1||12<mes||ano<1)
  {
    printf("Data inválida");
    return 0;
  } 
  else 
  {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) 
    {
      feb=29;
      if (29<dia && mes == 2) 
      {
        printf("Data inválida");
        return 0;
      }
    } 
    else 
    {
      feb=28;
      if (28<dia && mes == 2) 
      {
        printf("Data inválida");
        return 0;
      }
    }
    anoX = (ano - 1) * 365.2425;
    switch (mes) // Coloca o valor de dias dos meses passados para o "mesX".
  {
      case 1:
        mesX=0;
        break;
      case 2:
        mesX=31;
        break;
      case 3:
        mesX=31 + feb;
        break;
      case 4:
        mesX=62 + feb;
        if (30<dia)
        {
          printf("Data inválida");
          return 0;
        }
        break;
      case 5:
        mesX=92 + feb;
        break;
      case 6:
        mesX=123 + feb;
        if (30<dia)
        {
          printf("Data inválida");
          return 0;
        }
        break;
      case 7:
        mesX=153 + feb;
        break;
      case 8:
        mesX=184 + feb;
        break;
      case 9:
        mesX=215 + feb;
        if (30<dia)
        {
          printf("Data inválida");
          return 0;
        }
        break;
      case 10:
        mesX=245 + feb;
        break;
      case 11:
        mesX=276 + feb;
        if (30<dia)
        {
          printf("Data inválida");
          return 0;
        }
        break;
      case 12:
        mesX=306 + feb;
        break;
    }
    // Diferenciar os meses e testar a quantidade de dias é válida para aquele mês
    resultado = anoX + mesX + dia - 1; // Fórmula pra calcular dias passados
    printf("A data é %i/%i/%i\n", dia, mes, ano);
    printf("A quantidade de dias passados é %i\n", resultado);
  }
  return 0;
}