/*
 ============================================================================
 Name        : test1.c
 Author      : wang
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//const ���ε�����������ָ�����ͣ������͵ı���������ֵ�ǲ��ܱ����µ�,Ҳ����ֻ����
	const int days[] = {31,28,31,30};
	int index;

	//sizeof �����жϱ������������͵��ֽڴ�С
	for(index = 0 ; index<sizeof days/sizeof days[0]; index++)
		 printf("Month %2d hash %d days.\n",index+1,days[index]);

	//sizeof �����жϱ������������͵��ֽڴ�С
	/*
	int a = sizeof days;
	int b = sizeof days[0];
	printf("a has %d byte , b has %d byte",a,b);
	 */
	return 0;
}
