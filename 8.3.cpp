#include <stdio.h>
#define NEWSIZE 1000                    //ָ�����ٴ������������
char newbuf[NEWSIZE];                   //�����ַ�����newbuf 
char *newp=newbuf;                      //����ָ�����newp��ָ��ɴ�����ʼ��            
char *new(int n)                        //���忪�ٴ����ĺ���new,���ٴ洢���󷵻�ָ��
   {if (newp+n<=newbuf+NEWSIZE)         // ������δ����newbuf����Ĵ�С
     {newp+=n;                          // newpָ��洢����ĩβ
   return(newp-n);                  // ����һ��ָ��,��ָ������Ŀ�ʼλ��
     }
    else
      return(NULL);                    // ��������������ʱ,����һ����ָ��
   }