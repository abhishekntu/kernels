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
    int p [3];
    int q [3];
    int r [3];
    int s [3];
    {
        q[0] = A[0] * p[0] + A[1] * p[1] + A[2] * p[2];
        q[1] = A[3] * p[0] + A[4] * p[1] + A[5] * p[2];
        q[2] = A[6] * p[0] + A[7] * p[1] + A[8] * p[2];
    }
    {
        s[0] = A[0] * r[0] + A[3] * r[1] + A[6] * r[2];
        s[1] = A[1] * r[0] + A[4] * r[1] + A[7] * r[2];
        s[2] = A[2] * r[0] + A[5] * r[1] + A[8] * r[2];
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
