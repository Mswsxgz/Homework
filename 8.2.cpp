#define LINEMAX 20              /*�����ַ�������󳤶�*/
int main()
{int i;
 char **p,*pstr[5],str[5][LINEMAX];
 for (i=0;i<5;i++)
   pstr[i]=str[i];   /*����i���ַ������׵�ַ����ָ������ pstr �ĵ�i��Ԫ��*/
 printf("input 5 strings:\n");
 for (i=0;i<5;i++)
    scanf("%s",pstr[i]);
 p=pstr;
 sort(p);
 printf("strings sorted:\n");
 for (i=0;i<5;i++)
    printf("%s\n",pstr[i]);
}
sort(char **p)            /*ð�ݷ���5���ַ���������*/
{int i,j;
 char *temp;
 for (i=0;i<5;i++)
  {for (j=i+1;j<5;j++)
    {if (strcmp(*(p+i),*(p+j))>0)      /*�ȽϺ󽻻��ַ�����ַ*/
      {temp=*(p+i);
       *(p+i)=*(p+j);
       *(p+j)=temp;
      }
     }
  }
 return 0;
}