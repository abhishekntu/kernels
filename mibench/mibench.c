/****************************************************************/
/*   chebyshev		                                        */
/****************************************************************/

#ifdef TEST
#include <stdio.h>
#endif

#include<math.h>

#ifdef ALGO
int foo(int x, int y, int z)
{
	int temp = 6*z + 43;
 	return (x*(x + 2*y + temp) + y*(y + temp) + z*(9*z + 1));	
}
#endif


#ifdef TEST
int main(void)
{
	int x,y,z;
 	int result;
  	result = foo(x,y,z);
  	return 0;
}
#endif
