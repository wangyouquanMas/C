/*
 * pointer.c
 *
 *  Created on: 2021年5月11日
 *      Author: wyq19
 */

#include<stdio.h>
#define size 4
#define MONTHS 12
int main(void)
{
  short dates [size];
  short *pti;
  short index;
  double bills[size];
  double *ptf;
  int days[MONTHS] = {31,28,31,30};

  pti = dates; //把数组地址赋给指针
  ptf = bills;

  printf("%23s %10s\n","short","double");
  for(index = 0 ; index<size ; index++)
  {
	  printf("pointers+%d: %10p %10p\n",index,pti+index,ptf+index);
	  printf("pointers+%d: %10p %10p\n",index,pti+index,ptf+index);
	  printf("Month %2d has %d days.\n",index+1,*(days+index));  // *(days+index) =》 days[index]
  }
  return 0;

/*  在c中，对一个指针加1的结果是对该指针增加1个存储单元，但是对于数组而言，地址会增加到下一个元素的地址。
  所以在声明指针时必须声明它所指向的对象的类型

                 short     double
pointers+0:   0061FF0C   0061FEE8
pointers+1:   0061FF0E   0061FEF0
pointers+2:   0061FF10   0061FEF8
pointers+3:   0061FF12   0061FF00

 short 是两个字节 、 double是8个字节，
 所以pti+1所指向的是dates数组的下一个元素地址，也就是0061FF0E
 而 ptf+1所指向的是bills数组的下一个元素地址，也就是0061FEF0*/

}
