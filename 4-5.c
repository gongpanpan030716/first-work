#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M 1000
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	printf("������һ��С��%d����x:",M);
	scanf("%d",&x);
	if(x>M)
	  {printf("�������������Ҫ������������һ��С��%d����x:",M);
	   scanf("%d",&x);
 }
    y=sqrt(x);	  
	printf("%d��ƽ����������������:%d\n",x,y);
	return 0;
}
