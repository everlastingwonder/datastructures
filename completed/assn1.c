/****
* Gus Wiedey
* Assignment 01
* Data Structures
* 09/20/17
****/

#include <stdio.h>

int main(int argc, char *argv[]) {
  // check for valid argument(s)
  if(argc < 2) {
    printf("ERROR: expected at least one argument\n");
    return 2;
  }

  // variable definitions
  int i, n;
  FILE *fp;

  // open given files in order and print integers
  for(i = 1; i < argc; i++) {
    fp = fopen(argv[i], "r");
    fscanf(fp, "%d", &n);
    while(!feof(fp)) {
      printf("%d\n", n);
      fscanf(fp, "%d", &n);
    }
  }

  return 0;
}
