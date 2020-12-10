#include <stdio.h>
#include <stdlib.h>

void Tri(int top, int bottom, int start) {
  top = top / 2 + 1;
  bottom = bottom / 2 + 1;
  while (top <= bottom) {
    int k = 0;
    for (int i = 0; i < start; i++) {
      printf(" ");
    }
    while (bottom - top > k) {
      printf(" ");
      k++;
    }
    k = 0;
    while (k < top) {
      printf("*");
      k++;
    }
    k = 1;
    while (k < top) {
      printf("*");
      k++;
    }
    printf("\n");
    top++;
  }
}

void legs (int hight) {
  int top, bottom, start, a;
  top = 1;
  bottom = 7;
  a = 3;
  start = 0;
  int ct = 0;
  int *arr = (int *)malloc((hight + 1) * sizeof(int));
  for (int i = 0; i < hight - 1; i++) {
    ct++;
    if (ct == 2) {
      a++;
      ct = 0;
    }
    arr[i] = a;
    start += a;
  }
  int dt = 4;
  int db = 6;
  int ct2 = 1;
  int i = 0;
  int ht = hight;
    int treeoffset = 0;
  while (hight > 0) {
    ct2++;
    hight--;
    treeoffset = (bottom / 2 - hight / 2);
    Tri(top, bottom, start);
    start -= arr[i];

    top = top + dt;
    bottom += db;
    if (ct2 == 2) {
      dt += 2;
      db += 2;
      ct2 = 0;
    }
    i++;
  }
  treeoffset = treeoffset-ht/2;
  if (ht%2==0) {
      treeoffset++;
  }
  for (int j = 0; j < ht; j++) {
    for (int i = 0; i < treeoffset; i++) {
      printf(" ");
    }
    for (int i = 0; i < ht; i++) {
      printf("|");
    }
    printf("\n");
  }
}

int main(int argc,const char** argv) {
  int n=atoi(argv[1]);
  legs(n);
  return 0;
}