#include "square.h"  // square.h 在此处被包含一次

int getSquareSides()  // actual definition for getSquareSides
{
  return 4;
}
int getSquarePerimeter(int sideLength)
{
  return sideLength * getSquareSides();
}