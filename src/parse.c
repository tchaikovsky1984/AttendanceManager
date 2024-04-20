#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strToInt(char *s, int n){
  int i, x = 0;
  char c;
  for(i = 0; i < n; i++){
    c = s[i];
    x = x*10 + ((int)c - 48);
  }
  return x;
}

void setDoub(double *req, char *s){
  double r;
  r = (double)strToInt(s, strlen(s));
  *req = r;
  return;
}

void setInt(int *n, char *s){
  int l;
  l = strToInt(s, strlen(s));
  *n = l;
  return;
}

void setIntArr(int **arr, char *s, int in){
  int l;
  for(l=0;l<5;l++)
    printf("%d\t",(*arr)[l]);
  printf("\n");
  l = strToInt(s, strlen(s));
  (*arr)[in] = l;
  return;
}

int parseData(char **argv, int argc, double *req, int *occ, int *pre, int **skip, int *n_skip, int *i, int **arr){
  int j, mode, x = 0, y = 0;
  char *s;
  for(j = 1; j < argc; j++){
    s = argv[j];
    printf("Arg %d = %s\n",j,s);
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
      printf("\tmode = %d",mode);
    }
    else{
      switch(mode){
        case 1: setDoub(req, s);
                printf("\tSetting req to %lf", *req);
                mode = 0;
                break;
        case 2: setInt(occ, s);
                printf("\tSetting occ to %d",*occ);
                mode = 0;
                break;
        case 3: setInt(pre, s);
                printf("\tSetting pre to %d",*pre);
                mode = 0;
                break;
        case 4: setIntArr(skip, s, x);
                printf("\tSetting skip[%d] to %d",x,(*skip)[x]);
                break;
        case 5: setInt(n_skip, s);
                printf("\tSetting n_skip to %d",*n_skip);
                mode = 0;
                break;
        case 6: setInt(i, s);
                printf("\tSetting i to %d", *i);
                mode = 0;
                break;
        case 7: setIntArr(arr, s, y);
                break;
        case 0: return 2;
        default: break; 
      }
    }
    printf("\n");
  }
  return 0;
}

/* Return Values : 
*    1 - Invalid Flag
*    2 - Number of Arguments / Arguments b4 FLags
*/
