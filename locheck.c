/*

 * locheck.c
 *
 *  Created on: 2021��5��12��
 *      Author: wyq19


#include<stdio.h>
void mikado(int);
int main(void)
{
   int pooh = 2, bah = 5;

   printf("In main(),pooh = %d and &pooh = %p\n",pooh,&pooh);
   printf("In main(),bah = %d and &bah = %p\n",bah,&bah);


   mikado(pooh);

   return 0;
}

void mikado(int bah)
{
   int pooh = 10;

   printf("In mikado(),pooh = %d and &pooh = %p\n",pooh,&pooh);
   printf("In mikado(),bah = %d and &bah = %p\n",bah,&bah);
}


//   ���ݵ���ֵ�����Է�������������ַ��ͬ�������ĺô�����ԭ�������򱻵������ĵĲ������ı�
In main(),pooh = 2 and &pooh = 0062FF1C
In main(),bah = 5 and &bah = 0062FF18
In mikado(),pooh = 10 and &pooh = 0062FEEC
In mikado(),bah = 2 and &bah = 0062FF00




*/
