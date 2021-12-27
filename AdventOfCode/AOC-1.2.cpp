#include<bits/stdc++.h>

using namespace std;

int main(void) {

  int vector [10000], i = 0, cont = 0;
  
  while (scanf("%d", &vector[i]) != EOF) {
    i++;
  }
  
  int currentSum = 0, oldSum = INT_MAX;
  for (int k = 0; k < i; ++k) {
    for (int j = 0; j < 3; ++j) {
      currentSum += vector[k+j];
    }
    if (currentSum > oldSum) cont++;
    oldSum = currentSum; currentSum = 0;
  }

  printf("%d", cont);

  return 0;
}
