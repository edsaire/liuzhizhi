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
 int l=0;
 printf("请输入电梯所在楼层\n");
 scanf("%d",&a);
 printf("请输入乘客A的所在楼层、目标楼层和呼叫间隔时间\n");
 scanf("%d %d %d",&b,&c,&k);
 printf("请输入乘客B的所在楼层、目标楼层和呼叫间隔时间\n");
 scanf("%d %d %d",&d,&e,&l);
 printf("%d,0,0\n",a);
 if(k<=l) 
 {f=abs(a-b)+k;
  printf("%d,%d,1\n",b,abs(f)); 
  g=abs(f)+abs(b-c);
  printf("%d,%d,0\n",c,g);
  h=c-d;
  if(g+abs(h)<=l)
  {i=l;
  printf("%d,%d,1\n",d,i);
  j=i+abs(d-e);
  printf("%d,%d,0",e,j);
  }
  else {
  i=g+abs(h);
  printf("%d,%d,1\n",d,i);
  j=i+abs(d-e);
  printf("%d,%d,0",e,j);
  }
 }
 else
 {
 f=abs(a-d)+l;
  printf("%d,%d,1\n",d,abs(f)); 
  g=abs(f)+abs(d-e);
  printf("%d,%d,0\n",e,g);
  h=e-b;
   if(g+abs(h)<=k)
   {i=k;
   printf("%d,%d,1\n",b,i);
   j=i+abs(b-c);
   printf("%d,%d,0",c,j);
   }
   else{
   i=g+abs(h);
   printf("%d,%d,1\n",b,i);
   j=i+abs(b-c);
   printf("%d,%d,0",c,j);
   }
 }
 return 0;
 
}
