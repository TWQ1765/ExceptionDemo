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
#define DIVIDED_BY_NED  2

float checkRadius(float raduis){
if((raduis == 0)
	Thow(ex)//Throw(createExeception("Cannot devide by zero", DiVIDED_BY_ZERO)); \
                              trying comment
else if( raduis <0.0)
  Throw(createExeception("Cannot devide by zero", DiVIDED_IS_NEG));
return raduis;
}


void tryException(float radius) {
CException_T ex;

Try{
//try something..
float radius = checkRadius(radius);
float area = 3.1459*(radius*radius);
printf("The area of the circle with 2 meters radius is %f/n",area)

} Catch(ex) {
// Resolve the problem..
  if(ex == DIVIDED_BY_ZERO)
    printf("The radius cannot be zero");
  else if (ex == DIVIDED_BY_NEG)
      printf("The radius cannot be negative");
}   
}
