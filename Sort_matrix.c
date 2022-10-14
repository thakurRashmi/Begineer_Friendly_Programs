void sort (int *Str, int Dim) {
int i, j, x, salto;
for (salto = Dim/2; salto > 0; salto = salto/2){
   for (i = salto; i < Dim; i++) {
     x = *(Str+i);
     for (j=i; j >= salto && x < *(Str+j-salto); j=j-salto)
        *(Str+j) = *(Str+j-salto);
    *(Str+j) = x;
   }
}
}

void sort_matrix (int *A, int N) {

sort_rows_matrix(A, N*N); //matrix NxN has N*N elements
/*matrix A is stored linearly: [a00, a01, a0n,...,an0, an1,...,ann], 
so to sort all the elements just traverse the matrix linearly as a 1D vector*/

}

void sort_rows_matrix(int *A, int N){
  /*to sort one line at a time, just consider each line as a 1D vector and pass
   the first element of the line as a parameter*/
    int i;
    for (i=0; i<N; i++) sort((A+i*N), N); 
}