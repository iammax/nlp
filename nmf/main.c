#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include <time.h>
#include <blas.h>

void main(){
    srand(time(NULL)); 
    int numrows = 3; //p
    int numcols = 5; //n
    int numtopics = 10; //r
    // double* mat = malloc(numrows*numcols*sizeof(double));
    double* v = malloc(numrows*numcols*sizeof(double)); //p*n
    int* w = malloc(numrows*numtopics*sizeof(double)); // p*r
    int* h = malloc(numtopics*numcols*sizeof(double)); // r*n
    
    random_int_mat_init(w, numrows, numtopics);
    random_int_mat_init(h, numtopics, numcols);

    printf ("v: \n");
    print_double_mat(v, numrows, numcols);
    printf ("w: \n");
    print_int_mat(w, numrows, numtopics);
    printf ("h: \n");
    print_int_mat(h, numtopics, numcols);
}