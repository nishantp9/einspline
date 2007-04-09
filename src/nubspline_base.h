#ifndef NUBSPLINE_BASH_H
#define NUBSPLINE_BASH_H

#include <stdbool.h>

typedef enum { LINEAR, GENERAL, CENTER } grid_type;

// Nonuniform grid base structure
typedef struct
{
  // public data
  grid_type code;
  double start, end;
  double *points;
  int num_points;
  int (*reverse_map)(void *grid, int i);
} NUgrid;

typedef struct
{
  // public data
  grid_type code;
  double start, end;
  double *points;
  int numPoints;
  int (*reverse_map)(NUgrid *grid, int i);

  // private data
  double a, aInv, b, bInv, center, even_half;
  int half_points, odd_one;
  bool odd;
} center_grid;



#endif