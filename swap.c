/*

 * swap.c
 *
 *  Created on: 2021年5月12日
 *      Author: wyq19



#include<stdio.h>
void mikado(int *u,int *v);
int main(void)
{
   int pooh = 2, bah = 5;

   printf("In main(),pooh = %d and &pooh = %p\n",pooh,&pooh);
   printf("In main(),bah = %d and &bah = %p\n",bah,&bah);


   mikado(&pooh,&bah);

   printf("In main(),pooh = %d and bah = %d\n",pooh,bah);

   return 0;
}

void mikado(int *u,int *v)
{
  int temp;
  temp = *u;
  *u = *v;
  *v = temp;
}

//地址传递可以在被调用函数中修改原参数的值


*/
