/****************************************************************/
/*   chebyshev		                                        */
/****************************************************************/

#ifdef TEST
#include <stdio.h>
#endif

#include<math.h>

#ifdef ALGO
int foo(int in3,int in14,int in5,int in16,int in7,int in18,int in9,int in20,int in11,int in22,int in35,int in46,int in47,int in58,int in59,int in70)
{
	int temp_1 = in3 - in14;
	int temp_2 = in5 - in16;
	int temp_3 = in7 - in18;
	int temp_4 = in9 - in20;
	int temp_5 = in11 - in22;
	int temp_6 = in35 - in46;
	int temp_7 = in47 - in58;
	int temp_8 = in59 - in70;
	
	int t_1 = temp_1*temp_1;
	int t_2 = temp_2*temp_2 + t_1;
	int t_3 = temp_3*temp_3 + t_2;
	int t_4 = temp_4*temp_4 + t_3;
	int t_5 = temp_5*temp_5 + t_4;
	int t_6 = temp_6*temp_6 + t_5;
	int t_7 = temp_7*temp_7 + t_6;

 	return (temp_8*temp_8 + t_7);	
}
#endif


#ifdef TEST
int main(void)
{
	int in3, in14, in5, in16, in7, in18, in9, in20, in11, in22, in35, in46, in47, in58, in59, in70;
 	int result;
  	result = foo(in3, in14, in5, in16, in7, in18, in9, in20, in11, in22, in35, in46, in47, in58, in59, in70);
  	return 0;
}
#endif
