#ifndef QR_H
#define QR_H

#include <math.h>
#include <stdlib.h>
#include "vector.h"
#include "matrix.h"

typedef struct givens{
  float sin;
  float cos;
  float i; /* Givens on lines {i, i+1} cols {i, i+1}*/
}Givens;

Givens** qrDecomposition(Vector*,Vector*,Vector*);
Givens* givensRotation(float,float);
void applyLeftGivensRotation(Givens*, Matrix*);


#endif 
