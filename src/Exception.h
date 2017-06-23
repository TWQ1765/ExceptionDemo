#ifndef _TRYEXCEPTION_H
#define _TRYEXCEPTION_H



typedef struct Excerption Excerption;
typedef struct Excerption ExcerptionPtr;
struct  Excerption {
  char *msg;
  int errorCode;
};

Exception *createException(char *msg, int errorCode){
  Exception *e = malloc(sizeof(Exception));
  e->msg = msg;
  e->errorCode = errorCode;
  return e;
}


#endif // _TRYEXCEPTION_H
