/****************************************************************/
/*   chebyshev		                                        */
/****************************************************************/

#ifdef TEST
#include <stdio.h>
#endif

#include<math.h>

#ifdef ALGO
int foo(int x, int y)
{
 	return (x*(x*(7*x - 76*y +7) + y*(92*y - 39) +7) - y*(y*(984*y + 46) + 46) -75);	
}
#endif


#ifdef TEST
int main(void)
{
	int x,y;
 	int result;
  	result = foo(x,y);
  	return 0;
}
#endif
