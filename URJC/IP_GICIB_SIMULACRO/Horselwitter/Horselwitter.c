#include <stdio.h>
#include <stdlib.h>

int checkIn (int N, char List [N+1][256], char word [256]);

int main(void) {

  char blockList [10][256];
  char blocked[256];
  int i = 0;

  while (scanf("%s", blocked) != EOF && strcmp(blocked, "FIN") != 0) {
    strcpy(blockList[i], blocked);
    i++;
  }

  int N; scanf("%d", &N);

  for (int k = 0; k < N; ++k) {
    scanf("%s", blocked);
    if (checkIn(i, blockList, blocked)) printf("BLOQUEADO\n");
    else printf ("ACEPTADO\n");
  }

  return 0;
}

int checkIn (int N, char List [N][256], char word [256]) {
  for (int i = 0; i < N; ++i) {
    if (strcmp(List[i], word) == 0) return 1;
  }
  return 0;
}
