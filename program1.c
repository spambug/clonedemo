#include<stdio.h>
int main()
{
FILE *fp;
char ch;
int ln=0,t=0,w=0,c=0;
fp=fopen("text1.txt,""r");
ch=getc(fp);
while (ch!=EOF)
{
if(ch=='\n')
ln++;
else if (ch=='\t')
t++;
else if(ch==' ')
w++;
else
c==;
ch=getc(p);
}
fclose(fp);
printf("Lines=%d,tabs=%d,words=%d,characters=%d\n",ln,t,w,c);
}
