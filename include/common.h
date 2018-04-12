#ifndef _MY_COMMON_H_
#define _MY_COMMON_H_

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define NOP ;
#define BAD_VAL -24817

enum BOOLEAN {
  false = 0,
  true = 1
};
typedef enum BOOLEAN bool;

/*
* void error(char*);
* void warning(char*);
*/

#endif /* _MY_COMMON_H_ */
