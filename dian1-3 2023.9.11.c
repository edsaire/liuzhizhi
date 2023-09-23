#include<stdio.h>
#include<math.h>
int main()
{int a=0;
 int b=0;
 int c=0;
 int d=0;
 int e=0;
 int f=0;
 int g=0;
 int h=0;
 int i=0;
 int j=0;
 int k=0;
 printf("请输入电梯所在楼层，并分别输入乘客A和乘客B的起始楼层、目标楼层\n");
 scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
 printf("%d,0,0\n",a);
 if(abs(a-b)<=abs(a-d))
 {f=a-b;
  printf("%d,%d,1\n",b,abs(f)); 
  g=abs(f)+abs(b-c);
  printf("%d,%d,0\n",c,g);
  h=c-d;
  i=g+abs(h);
  printf("%d,%d,1\n",d,i);
  j=i+abs(d-e);
  printf("%d,%d,0",e,j);
 }
 else{f=a-d;
  printf("%d,%d,1\n",d,abs(f)); 
  g=abs(f)+abs(d-e);
  printf("%d,%d,0\n",e,g);
  h=e-b;
  i=g+abs(h);
  printf("%d,%d,1\n",b,i);
  j=i+abs(b-c);
  printf("%d,%d,0",c,j);
 }
 return 0;
}

