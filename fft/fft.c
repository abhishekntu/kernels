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
	int i[6];
	int o[4];
	int temp_1 = i[1]*i[2] + i[3]*i[4];
	int temp_3 = i[1]*i[4] - i[3]*i[2];
	

	o[0] = i[0] - temp_1;
	o[1] = i[0] + temp_1;
	o[2] = i[5] - temp_3;
	o[3] = i[5] + temp_3;
}
#endif

#ifdef TEST
int main(void)
{
  	foo();
  	return 0;
}
#endif
