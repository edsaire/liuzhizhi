#include<stdio.h>
#include<math.h>
int main()
{int a=0;
 int b=0;
 int c=0;
 int d=0;
 int e=0;
 int f=0;
 
 printf("������Ⱥ�¥�㡢Ŀ��¥�㡢��������¥��\n");
 scanf("%d %d %d",&a,&b,&c);
 printf("%d 0 0\n",c);
 d=a-c;
 printf("%d %d 1\n",a,abs(d));
 e=abs(b+abs(d));
 printf("%d %d 0",b,e);
 
 
 
 return 0;
 
}
