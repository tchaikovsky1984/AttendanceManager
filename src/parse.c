#include <stdio.h>
#include <string.h>

int strToInt(char *s, int n){
  return 0;
}

int parseData(char **argv, int argc, double *req, int *occ, int *pre, int **skip, int *n_skip, int *i, int **arr){
  int j, mode;
  char *s;
  for(j = 1; j < argc; j++){
    s = argv[j];
    if(s[0] == '-'){
      switch(s[1]){
        case 'r': mode = 1;
                  break;
        case 'o': mode = 2;
                  break;
        case 'p': mode = 3;
                  break;
        case 's': mode = 4;
                  break;
        case 'n': mode = 5;
                  break;
        case 'i': mode = 6;
                  break;
        case 't': mode = 7;
                  break;
        default: return 1;
      }
    }
    else{

    }
  }
  return 0;
}

/* Return Values : 
*    1 - Invalid Flag
*    2 - Number of Arguments
*/
