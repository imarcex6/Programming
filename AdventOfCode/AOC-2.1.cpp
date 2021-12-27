#include<bits/stdc++.h>

using namespace std;

int main(void) {

  int x = 0, y = 0, N;
  char dir [16];

  while (scanf("%s %d", dir, &N)) {
    switch (dir) {
      case "forward":
        x += N;
        break;
      case "down":
        y -= N;
        break;
      case "up":
        y += N;
        break;  
    }
  }

  printf("%d", x*y);

  return 0;
}
