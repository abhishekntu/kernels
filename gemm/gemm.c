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

    int a [9];
    int b [9];
    int c [9];
    int tmp [9];
    int alpha = 6;
    int beta = 11;
    int i, j;
    {
        {
            c[0] = (beta * tmp[0]) + ((alpha * (a[0] * b[0] + a[1] * b[3] + a[2] * b[6])));
            c[1] = (beta * tmp[1]) + ((alpha * (a[0] * b[1] + a[1] * b[4] + a[2] * b[7])));
            c[2] = (beta * tmp[2]) + ((alpha * (a[0] * b[2] + a[1] * b[5] + a[2] * b[8])));
        }
        {
            c[3] = (beta * tmp[3]) + ((alpha * (a[3] * b[0] + a[4] * b[3] + a[5] * b[6])));
            c[4] = (beta * tmp[4]) + ((alpha * (a[3] * b[1] + a[4] * b[4] + a[5] * b[7])));
            c[5] = (beta * tmp[5]) + ((alpha * (a[3] * b[2] + a[4] * b[5] + a[5] * b[8])));
        }
        {
            c[6] = (beta * tmp[6]) + ((alpha * (a[6] * b[0] + a[7] * b[3] + a[8] * b[6])));
            c[7] = (beta * tmp[7]) + ((alpha * (a[6] * b[1] + a[7] * b[4] + a[8] * b[7])));
            c[8] = (beta * tmp[8]) + ((alpha * (a[6] * b[2] + a[7] * b[5] + a[8] * b[8])));
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
