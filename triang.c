#include <math.h>
#include <stdio.h>

int main() {
  float lad1 = 0, lad2 = 0, lad3 = 0, ang1 = 0, ang2 = 0, ang3 = 0;
  printf("Escreva 3 lados de um triângulo.\n");
  scanf("%f, %f, %f", &lad1, &lad2, &lad3);
  if (lad1 < lad2 + lad3 || lad2 < lad1 + lad3 || lad3 < lad1 + lad2) {
    printf("Esses 3 números formam um triângulo :D.\n");
    ang1 =
        acos((pow(lad2, 2) + pow(lad3, 2) - pow(lad1, 2)) / (2 * lad2 * lad3)) *
        180 / M_PI;
    ang2 =
        acos((pow(lad1, 2) + pow(lad3, 2) - pow(lad2, 2)) / (2 * lad1 * lad3)) *
        180 / M_PI;
    ang3 =
        acos((pow(lad1, 2) + pow(lad2, 2) - pow(lad3, 2)) / (2 * lad1 * lad2)) *
        180 / M_PI;

    int ang1_int = round(ang1);
    int ang2_int = round(ang2);
    int ang3_int = round(ang3);

    printf("Seus ângulos são %d, %d, %d.\n", ang1_int, ang2_int, ang3_int);

    if (ang1_int > 90 || ang2_int > 90 || ang3_int > 90) {
      printf("Esse triângulo é obtuso.");
    } else {
      if (ang1_int == 90 || ang2_int == 90 || ang3_int == 90) {
        printf("Esse triângulo é retângulo.");
      } else {
        printf("Esse triângulo é agudo.");
      }
    }

  } else {
    printf("Esses números não formam um triângulo.\n");
  }

  return 0;
}
