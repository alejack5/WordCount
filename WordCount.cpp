#include<stdio.h>
void getCharNum(char file[])
{
	int count=0;//统计字符个数
	FILE *fil;
	char p;
	if((fil=fopen(file,"r"))==NULL)
	{
		printf("打开失败！\n");
		//exit(1);
	}
	 while((p=fgetc(fil))!=EOF)
	 {
	 	count++; 
	 }
	 fclose(fil);
	 printf("字符个数为%d！",count);
}
void getWordNum(char file[])
{
	int count=0;//统计字符个数
	int j=0,i=0;
	char chars[200];
	char p;
	FILE *fil;
	if((fil=fopen(file,"r"))==NULL)
	{
		printf("打开失败！");
		//exit(1);
	}
	 while((p=fgetc(fil))!=EOF)
	 {
	 	chars[j]=p;
	 	j++;
	 }
	 fclose(fil);
	 for(i;chars[i]!='\0';i++)
	 {
	 	if(chars[i]!=' ' && (chars[i+1]==' ' || chars[i+1]=='\0'))
	 	count++;
	 }
	 printf("单词个数为%d！",count);
}
int main()
{
	char files[200];//存储文件字符 
	char opt[2];//存储选择项 
	char p;
	scanf("%s",opt);
	p=getchar();//读入回车键
	scanf("%s",files);
	if(opt[1]=='w')
	{
		getWordNum(files);
	}
	else if(opt[1]=='c')
	{
		getCharNum(files);
	}
}

