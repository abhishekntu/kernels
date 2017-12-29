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
    int C [9];
    int alpha = 9;
    int i, j;
    {
        {
            C[0] = (alpha * (A[0] * B[0] + A[1] * B[1] + A[2] * B[2]));
            C[1] = (alpha * (A[0] * B[3] + A[1] * B[4] + A[2] * B[5]));
            C[2] = (alpha * (A[0] * B[6] + A[1] * B[7] + A[2] * B[8]));
        }
        {
            C[3] = (alpha * (A[3] * B[0] + A[4] * B[1] + A[5] * B[2]));
            C[4] = (alpha * (A[3] * B[3] + A[4] * B[4] + A[5] * B[5]));
            C[5] = (alpha * (A[3] * B[6] + A[4] * B[7] + A[5] * B[8]));
        }
        {
            C[6] = (alpha * (A[6] * B[0] + A[7] * B[1] + A[8] * B[2]));
            C[7] = (alpha * (A[6] * B[3] + A[7] * B[4] + A[8] * B[5]));
            C[8] = (alpha * (A[6] * B[6] + A[7] * B[7] + A[8] * B[8]));
        }
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
