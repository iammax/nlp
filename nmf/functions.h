int mat_index(int i, int j, int numcols){
    return j + i*numcols;
}

void print_int_mat(int* mat, int numrows, int numcols){
    for (int i = 0; i < numrows; i++){
        for (int j = 0; j < numcols; j++){
            printf("%d ", mat[mat_index(i, j, numcols)]);
        }
        printf("\n");
    }
}

void print_double_mat(double* mat, int numrows, int numcols){
    for (int i = 0; i < numrows; i++){
        for (int j = 0; j < numcols; j++){
            printf("%f ", mat[mat_index(i, j, numcols)]);
        }
        printf("\n");
    }
}

void random_int_mat_init(int* mat, int numrows, int numcols){
    for (int i = 0; i < numrows; i++){
        for (int j = 0; j < numcols; j++){
            mat[mat_index(i, j, numcols)] = rand()%10;
        }
    }
}