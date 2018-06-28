#include <stdio.h>
#include <string.h>
#define N 10
int main()
   {void input(int [],char name[][8]);
    void sort(int [],char name[][8]);
 void search(int ,int [],char name[][8]);
 int num[N],number,flag=1,c;
    char name[N][8];
    input(num,name);
    sort(num,name);
    while (flag==1)
       {printf("\ninput number to look for:");
     scanf("%d",&number);
     search(number,num,name);
     printf("continue ot not(Y/N)?");
     getchar();
     c=getchar();
     if (c=='N'||c=='n')
       flag=0;
       }
 return 0;
   }