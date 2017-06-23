#include <stdio.h>
#include <stdlib.h>
#include  "Exception.h"

Exception *createException(char *msg, int errorCode){
  Exception *e = malloc(sizeof(Exception));//<stdlib.h>
  e->msg = msg;
  e->errorCode = errorCode;
  return e;
}

void freeExcerption(Excerption *e){
  free(e);//<stdlib.h>
}

void dumpExcerption(Excerption *e){
  printf("%s (err=%d)\n", e->msg, e->errorCode);
}
