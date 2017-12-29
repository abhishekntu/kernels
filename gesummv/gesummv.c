/****************************************************************/
/*   chebyshev		                                        */
/****************************************************************/

#ifdef TEST
#include <stdio.h>
#endif

#include<math.h>

#ifdef ALGO
void foo()
{
    int A [9];
    int B [9];
    int x [3];
    int y [3];
    int alpha = 6;
    int beta = 11;
    int i, j;
    {
        y[0] = (alpha * (A[0] * x[0] + A[1] * x[1] + A[2] * x[2])) + (beta * (B[0] * x[0] + B[1] * x[1] + B[2] * x[2]));
        y[1] = (alpha * (A[3] * x[0] + A[4] * x[1] + A[5] * x[2])) + (beta * (B[3] * x[0] + B[4] * x[1] + B[5] * x[2]));
        y[2] = (alpha * (A[6] * x[0] + A[7] * x[1] + A[8] * x[2])) + (beta * (B[6] * x[0] + B[7] * x[1] + B[8] * x[2]));
    }

}
#endif


#ifdef TEST
int main(void)
{
	int x;
 	int result;
  	foo();
  	return 0;
}
#endif
