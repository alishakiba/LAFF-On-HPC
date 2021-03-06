#define alpha( i,j ) A[ (j)*ldA + i ]   // map alpha( i,j ) to array A 
#define beta( i,j )  B[ (j)*ldB + i ]   // map beta( i,j )  to array B
#define gamma( i,j ) C[ (j)*ldC + i ]   // map gamma( i,j ) to array C

void Gemm_I_dgemv( int, int, int, double *, int, double *, int, double *, int );
void dgemv_( char *, int *, int *, double *, double *, int *, double *, int *,
	     double *, double *, int * );

void GemmWrapper( int m, int n, int k, double *A, int ldA,
		  double *B, int ldB, double *C, int ldC )
{
  Gemm_I_dgemv( m, n, k, A, ldA, B, ldB, C, ldC );
}


void Gemm_I_dgemv( int m, int n, int k,
		   double *A, int ldA,
		   double *B, int ldB,
		   double *C, int ldC )
{
  double d_one = 1.0;
  
  for ( int i=0; i<m; i++ )
    dgemv_(    ,   ,   ,   ,   ,   ,   ,   ,   ,   ,    );
}
  
