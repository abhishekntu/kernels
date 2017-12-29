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
    int x1 [3];
    int x2 [3];
    int y_1 [3];
    int y_2 [3];
    int i;
    {
        x1[0] = (A[0] * y_1[0] + A[1] * y_1[1] + A[2] * y_1[2]);
        x1[1] = (A[3] * y_1[0] + A[4] * y_1[1] + A[5] * y_1[2]);
        x1[2] = (A[6] * y_1[0] + A[7] * y_1[1] + A[8] * y_1[2]);
    }
    {
        x2[0] = (A[0] * y_2[0] + A[3] * y_2[1] + A[6] * y_2[2]);
        x2[1] = (A[1] * y_2[0] + A[4] * y_2[1] + A[7] * y_2[2]);
        x2[2] = (A[2] * y_2[0] + A[5] * y_2[1] + A[8] * y_2[2]);
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
