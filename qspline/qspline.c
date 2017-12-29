/****************************************************************/
/*   chebyshev		                                        */
/****************************************************************/

#ifdef TEST
#include <stdio.h>
#endif

#include<math.h>

#ifdef ALGO
int foo(int a, int b, int q, int u, int v, int w, int z)
{
	int temp_1 = z*u;
	int temp_2 = temp_1*u;
  	int temp_3 = temp_2*u;
	int temp_4 = q*v;
  	int temp_5 = temp_4*v;
  	int temp_6 = temp_5*v;
	int temp_7 = u*v;
	int temp_8 = v*u;
	int temp_9 = 4*a*u;
	int temp_10 = temp_9*u;
	int temp_11 = v*temp_10*u;
	int temp_12 = 4*w*temp_7;
	int temp_13 = temp_12*v;
	int temp_14 = temp_13*v;	
 	return (u*(temp_3) + (temp_11) + 6*b*(temp_7)*(temp_8) + (temp_14) +v*(temp_6));	
}
#endif


#ifdef TEST
int main(void)
{
	int a,b,q,u,v,w,z;
 	int result;
  	result = foo(a,b,q,u,v,w,z);
  	return 0;
}
#endif
