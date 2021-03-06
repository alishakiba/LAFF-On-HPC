#define alpha( i,j ) A[ (j)*ldA + i ]   // map alpha( i,j ) to array A 
#define beta( i,j )  B[ (j)*ldB + i ]   // map beta( i,j )  to array B
#define gamma( i,j ) C[ (j)*ldC + i ]   // map gamma( i,j ) to array C

void Gemm_PJ_Axpy( int, int, int, double *, int, double *, int, double *, int );
void Axpy( int, double, double *, int, double *, int );

void GemmWrapper( int m, int n, int k, double *A, int ldA,
		  double *B, int ldB, double *C, int ldC )
{
  Gemm_PJ_Axpy( m, n, k, A, ldA, B, ldB, C, ldC );
}


void Gemm_PJ_Axpy( int m, int n, int k, double *A, int ldA,
                   double *B, int ldB, double *C, int ldC )
{
  for ( int p=0; p<k; p++ )
    for ( int j=0; j<n; j++ )
      Axpy( m, beta( p,j ), &alpha( 0,p ), 1, &gamma( 0,j ), 1 );
}

