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

	//const 修饰的数据类型是指常类型，常类型的变量或对象的值是不能被更新的,也就是只读。
	const int days[] = {31,28,31,30};
	int index;

	//sizeof 用于判断变量或数据类型的字节大小
	for(index = 0 ; index<sizeof days/sizeof days[0]; index++)
		 printf("Month %2d hash %d days.\n",index+1,days[index]);

	//sizeof 用于判断变量或数据类型的字节大小
	/*
	int a = sizeof days;
	int b = sizeof days[0];
	printf("a has %d byte , b has %d byte",a,b);
	 */
	return 0;
}
