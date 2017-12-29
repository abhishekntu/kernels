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
    int D [9];
    int alpha = 9;
    int beta = 10;
    int i, j;
    {
        {
            D[0] = (beta * C [0]) +(alpha * (A[0] * B[0] + A[1] * B[1] + A[2] * B[2] + B[0] * A[0] + B[1] * A[1] + B[2] * A[2]));
            D[1] = (beta * C [1]) +(alpha * (A[0] * B[3] + A[1] * B[4] + A[2] * B[5] + B[0] * A[3] + B[1] * A[4] + B[2] * A[5]));
            D[2] = (beta * C [2]) +(alpha * (A[0] * B[6] + A[1] * B[7] + A[2] * B[8] + B[0] * A[6] + B[1] * A[7] + B[2] * A[8]));
        }
        {
            D[3] = (beta * C [3]) +(alpha * (A[3] * B[0] + A[4] * B[1] + A[5] * B[2] + B[3] * A[0] + B[4] * A[1] + B[5] * A[2]));
            D[4] = (beta * C [4]) +(alpha * (A[3] * B[3] + A[4] * B[4] + A[5] * B[5] + B[3] * A[3] + B[4] * A[4] + B[5] * A[5]));
            D[5] = (beta * C [5]) +(alpha * (A[3] * B[6] + A[4] * B[7] + A[5] * B[8] + B[3] * A[6] + B[4] * A[7] + B[5] * A[8]));
        }
        {
            D[6] = (beta * C [6]) +(alpha * (A[6] * B[0] + A[7] * B[1] + A[8] * B[2] + B[6] * A[0] + B[7] * A[1] + B[8] * A[2]));
            D[7] = (beta * C [7]) +(alpha * (A[6] * B[3] + A[7] * B[4] + A[8] * B[5] + B[6] * A[3] + B[7] * A[4] + B[8] * A[5]));
            D[8] = (beta * C [8]) +(alpha * (A[6] * B[6] + A[7] * B[7] + A[8] * B[8] + B[6] * A[6] + B[7] * A[7] + B[8] * A[8]));
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
