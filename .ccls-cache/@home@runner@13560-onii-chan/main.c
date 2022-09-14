#include <stdio.h>

int main(void) {
  int animalA, animalB, legC, amountD, totalE, totalF; 
  scanf("%d %d %d %d", &animalA, &animalB, &legC, &amountD);
  totalE=((legC-(animalB * amountD))/(animalA-animalB));
  totalF=amountD-totalE;
  printf("%d %d", totalE, totalF);
  return 0;
}