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
	int i1[8];
	int i2[8];
	int i3[8];
	int o[8];
	o[0] = i1[0] + i2[0]*i3[0];
	o[1] = i1[1] + i2[1]*i3[1];
	o[2] = i1[2] + i2[2]*i3[2];
	o[3] = i1[3] + i2[3]*i3[3];
	o[4] = i1[4] + i2[4]*i3[4];
	o[5] = i1[5] + i2[5]*i3[5];
	o[6] = i1[6] + i2[6]*i3[6];
	o[7] = i1[7] + i2[7]*i3[7];
}
#endif


#ifdef TEST
int main(void)
{
	foo();
  	return 0;
}
#endif
