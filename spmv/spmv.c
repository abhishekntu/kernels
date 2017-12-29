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
	int i[16];
	int o[2];
	int temp_1 = i[0]*i[1];
	int temp_2 = i[2]*i[3] + temp_1;
	int temp_3 = i[4]*i[5] + temp_2;

	int temp_4 = i[8]*i[9];
	int temp_5 = i[10]*i[11] + temp_4;
	int temp_6 = i[12]*i[13] + temp_5;
	
	
	o[0] = i[6]*i[7] + temp_3;
	o[1] = i[14]*i[15] + temp_6; 
}
#endif


#ifdef TEST
int main(void)
{
	foo();
  	return 0;
}
#endif
