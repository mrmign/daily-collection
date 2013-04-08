/****************************************************************************
  > File Name : test.c
  > Author  : Arming 
  > Email   : cloudniw1@gmail.com
  > Created : Mon 08 Apr 2013 04:50:22 PM CST
****************************************************************************/

#include <stdio.h>
int main()
{
	int a = 1, b = 2, c = 3, 
		d = 4, m = 2, n = 2;
	printf("%d\n",(m=a>b)&&(n=c>d));
	char c1 = 'A', c2='a';
	printf("%c\n",(c1,c2));
	return 0;
}
