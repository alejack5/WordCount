#include<stdio.h>
void getCharNum(char file[])
{
	int count=0;//ͳ���ַ�����
	FILE *fil;
	char p;
	if((fil=fopen(file,"r"))==NULL)
	{
		printf("��ʧ�ܣ�\n");
		//exit(1);
	}
	 while((p=fgetc(fil))!=EOF)
	 {
	 	count++; 
	 }
	 fclose(fil);
	 printf("�ַ�����Ϊ%d��",count);
}
void getWordNum(char file[])
{
	int count=0;//ͳ���ַ�����
	int j=0,i=0;
	char chars[200];
	char p;
	FILE *fil;
	if((fil=fopen(file,"r"))==NULL)
	{
		printf("��ʧ�ܣ�");
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
	 printf("���ʸ���Ϊ%d��",count);
}
int main()
{
	char files[200];//�洢�ļ��ַ� 
	char opt[2];//�洢ѡ���� 
	char p;
	scanf("%s",opt);
	p=getchar();//����س���
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

