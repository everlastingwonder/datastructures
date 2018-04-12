#include "general.h"

/* error: print error message and terminate the program	*/
void error(char* s) {
  fprintf(stderr, "%s\n", s);
  exit(1);
}
