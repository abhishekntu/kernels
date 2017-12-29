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
	int i[10];
	int o[2];
	int t_1 = i[0]*i[1];
	//int t_2 = i[1]*i[2];
	int t_3 = i[3]*i[4];
	//int t_4 = i[4]*i[5];
	
	int t_5 = i[6]*i[7];
	//int t_6 = i[7]*i[8];
	int t_7 = i[8]*i[9];//i[9]*i[10];
	//int t_8 = i[10]*i[11];
	
/*	int temp_1 = t_1 + t_2;
	int temp_2 = t_3 + t_4;
	int temp_3 = t_1 - t_2;
	int temp_4 = t_3 - t_4;
	
        int temp_5 = t_5 + t_6;
        int temp_6 = t_7 + t_8;
        int temp_7 = t_5 - t_6;
        int temp_8 = t_7 - t_8;
	
 	o[0] = temp_1 + temp_2 + temp_3 + temp_4;
 	o[1] = temp_5 + temp_6 + temp_7 + temp_8;
*/

	o[0] = i[2]*(t_1+t_3);
	o[1] = i[5]*(t_5+t_7); 

}
#endif


#ifdef TEST
int main(void)
{
	foo();
  	return 0;
}
#endif
