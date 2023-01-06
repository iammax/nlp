#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

// v ~= w*h

void main(){
    int numrows = 3; //p
    int numcols = 5; //n
    int numtopics = 10; //r
    // double* mat = malloc(numrows*numcols*sizeof(double));
    double* v = malloc(numrows*numcols*sizeof(double)); //p*n
    double* w = malloc(numrows*numtopics*sizeof(double)); // p*r
    double* h = malloc(numtopics*numcols*sizeof(double)); // r*n

    printf ("v: \n");
    print_mat(v, numrows, numcols);
    printf ("w: \n");
    print_mat(w, numrows, numtopics);
    printf ("h: \n");
    print_mat(h, numtopics, numcols);
}