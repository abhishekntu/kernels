/****************************************************************/
/*   poly8		                                        */
/****************************************************************/

#ifdef TEST
#include <stdio.h>
#endif

#include<math.h>

#ifdef ALGO
int foo(int t,int y,int z)
{	
int t1_1,t1_2,t1_3,t1_4,t1_5,t1_6,t1_7,t1_8,t1_9,t1_10,t2_1,t2_2,t2_3,t2_4,t2_5,t2_6,t2_7,t2_8,t3_1,t3_2,t3_3,t3_4,t3_5,t3_6,t3_7,t4_1,t4_2,t4_3,t4_4,t5_1,t5_2,t5_3,t6_1,t6_2,t6_3,t7_1,t7_2,t8_1,t8_2,t9_1,t10_1,t11_1;

t1_1 = y - z;
t1_2 = 71*z;
t1_3 = 464*z;
t1_4 = 4*y + 288;
t1_5 = 360*z;
t1_6 = 6*z;
t1_7 = 432*y;
t1_8 = z - 13824;
t2_1 = y*t1_1;
t2_2 = t1_2 + 1728;
t2_3 = t1_3 - 13824;
t2_4 = y*t1_4;
t2_5 = t1_5 + 6912;
t2_6 = t1_6 - 4312;
t2_7 = t1_7 - 13824;
t2_8 = z*t1_8;
t3_1 = t2_1 + t2_2;
t3_2 = t2_4 + t2_5;
t3_3 = z*t2_6;
t3_4 = z*t2_7;
t4_1 = y*t3_1;
t4_2 = y*t3_2;
t4_3 = t3_3 + 55296;
t5_1 = t4_1 - t2_3;
t5_2 = t4_2 + t4_3;
t6_1 = t*t5_1;
t7_1 = t6_1 + t5_2;
t8_1 = t*t7_1;
t9_1 = t8_1 + t3_4;
t10_1 = t*t9_1;
return(t10_1 + t2_8);


}
#endif


#ifdef TEST
int main(void)
{
	int t,y,z;
 	int result;
  	result = foo(t,y,z);
  	return 0;
}
#endif
