#include <stdio.h>
int main()
{void change(int *p);
 int a[5][5],*p,i,j;
 printf("input matrix:\n");     //提示输入二维数组各元素
 for (i=0;i<5;i++)
   for (j=0;j<5;j++)
     scanf("%d",&a[i][j]);
 p=&a[0][0];      //使P指向0行0列元素
 change(p);      //调用change函数实现交换
 printf("Now,matrix:\n");
 for (i=0;i<5;i++)      //输出已交换的二维数组
  {for (j=0;j<5;j++)
     printf("%d ",a[i][j]);
   printf("\n");
  }
 return 0;
}
void change(int *p)            //交换函数   
 {int i,j,temp;
  int *pmax,*pmin;
  pmax=p;
  pmin=p;
  for (i=0;i<5;i++)        //找最大值和最小值的地址，并赋纷呈pmax,pmin
    for (j=i;j<5;j++)
     {if (*pmax<*(p+5*i+j)) pmax=p+5*i+j;
      if (*pmin>*(p+5*i+j)) pmin=p+5*i+j;
     }
  temp=*(p+12);          //将最大值换给中心元素
  *(p+12)=*pmax;
  *pmax=temp;
  temp=*p;                //将最小值换给左上角元素
  *p=*pmin;
  *pmin=temp;
  pmin=p+1;
  for (i=0;i<5;i++)        //找第二最小值的地址赋给pmin
     for (j=0;j<5;j++)
       if (((p+5*i+j)!=p) && (*pmin>*(p+5*i+j))) pmin=p+5*i+j;
  temp=*pmin;            //将第二最小值换给右上角元素
  *pmin=*(p+4);
  *(p+4)=temp;
  pmin=p+1;      //找第三最小值的地址赋给pmin
  for (i=0;i<5;i++)    
    for (j=0;j<5;j++)
      if (((p+5*i+j)!=(p+4))&&((p+5*i+j)!=p)&&(*pmin>*(p+5*i+j)))pmin=p+5*i+j;
  temp=*pmin;                //将第三最小值换给左下角元素
  *pmin=*(p+20);
  *(p+20)=temp;
  pmin=p+1;
  for (i=0;i<5;i++)        //找第四最小值的地址赋给pmin  
     for (j=0;j<5;j++)
       if (((p+5*i+j)!=p) && ((p+5*i+j)!=(p+4)) && ((p+5*i+j)!=(p+20)) && (*pmin>*(p+5*i+j)))
  pmin=p+5*i+j;
  temp=*pmin;                         //将第四最小值换给右下角元素
  *pmin=*(p+24);
  *(p+24)=temp;
 }