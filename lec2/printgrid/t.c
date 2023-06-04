
/*
 * function *declaration* syntax: 
 *    <return type> <function name> ( <parameter list> );
 *
 * function *definition* syntax:
 *    <return type> <func name> ( <parameter list> ) { <statement 1>; <statement 2>; ... }
 *
 * "return from function F": go back to where F was called, possibly giving a value
 */
#include <stdio.h>
#include "grid_utilities.h"

int main() {
  int n = get_int("enter size of grid: ");
  print_grid(n);

  return n;
}
