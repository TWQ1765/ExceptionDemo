#include <stdio.h>
#include "tryexception.h"
#include "CException.h"

/*
Find the area of a circle given the radius in meter. Note that
the radius cannot be negative. If it is, Throw an exception and
print out the following error:
  "The radius cannot be zero"
  
  Otherwise campute the area of the circle and print it on the screen. e.g. 
  a radius of 2 meters will generate the following massage:
  "The area of the circle with 2 meters radius is XXXX"
*/

#define DIVIDED_BY_ZERO 1
#define DIVIDED_BY_NEG  2

void checkRadius(float radius){
  if((radius == 0)
    Throw(createException("Cannot devide by zero", DIVIDED_BY_ZERO)); 
                               
  else if( radius <0.0)
    Throw(createException("Cannot devide by zero", DIVIDED_IS_NEG));
  return radius;
}


void tryException(float radius) {
  CException_T ex;

  Try{
  //try something..
  checkRadius(radius);
  float area = 3.1415*(radius*radius);
  printf("The area of the circle with 2 meters radius is %f/n",area)

  } Catch(ex) {
  // Resolve the problem..
    dumpException(ex);
  }   
}
