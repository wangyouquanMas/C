/*
 * pointer.c
 *
 *  Created on: 2021��5��11��
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

  pti = dates; //�������ַ����ָ��
  ptf = bills;

  printf("%23s %10s\n","short","double");
  for(index = 0 ; index<size ; index++)
  {
	  printf("pointers+%d: %10p %10p\n",index,pti+index,ptf+index);
	  printf("pointers+%d: %10p %10p\n",index,pti+index,ptf+index);
	  printf("Month %2d has %d days.\n",index+1,*(days+index));  // *(days+index) =�� days[index]
  }
  return 0;

/*  ��c�У���һ��ָ���1�Ľ���ǶԸ�ָ������1���洢��Ԫ�����Ƕ���������ԣ���ַ�����ӵ���һ��Ԫ�صĵ�ַ��
  ����������ָ��ʱ������������ָ��Ķ��������

                 short     double
pointers+0:   0061FF0C   0061FEE8
pointers+1:   0061FF0E   0061FEF0
pointers+2:   0061FF10   0061FEF8
pointers+3:   0061FF12   0061FF00

 short �������ֽ� �� double��8���ֽڣ�
 ����pti+1��ָ�����dates�������һ��Ԫ�ص�ַ��Ҳ����0061FF0E
 �� ptf+1��ָ�����bills�������һ��Ԫ�ص�ַ��Ҳ����0061FEF0*/

}
