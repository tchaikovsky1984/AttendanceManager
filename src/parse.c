#include <stdio.h>
#include <string.h>

int strToInt(char *s, int n){
  int x = 0;
  char c;
  while(c!='\0')
    x = x*10 + ((int)c - 48);
  return x;
}

double strToDouble(char *s, int n){
  double x = 0.0;
  int j = 0;
  char c;
  for(j = 0; j < n; j++){

  }
  return x;
}

void setReq(double *req, char *s){
  double r;
  r = strToDouble(s, strlen(s));
  *req = r;
  return;
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
      switch(mode){
        case 1: setReq(req, s);
                mode = 0;
                break;
        case 2: 
        
        case 0: return 2;
        default: break; 
      }
    }
  }
  return 0;
}

/* Return Values : 
*    1 - Invalid Flag
*    2 - Number of Arguments / Arguments b4 FLags
*/
