int mat_index(int i, int j, int numcols){
    return j + i*numcols;
}

void print_mat(double* mat, int numrows, int numcols){
    for (int i = 0; i < numrows; i++){
        for (int j = 0; j < numcols; j++){
            printf("%f ", mat[mat_index(i, j, numcols)]);
        }
        printf("\n");
    }
}