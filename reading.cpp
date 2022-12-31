//#include<stdio.h>
//#include <string.h>
//#include<malloc.h>
//int main() {
//FILE*fp;
//
//if((fp=fopen("K.txt","rb"))==NULL)
//{
//	fclose(0);
//}
//fseek(fp,0,SEEK_END);
//int fileLen=ftell(fp);
//char*tmp=(char*)malloc(sizeof(char)*fileLen);
//fseek(fp,0,SEEK_SET);
//fread(tmp,fileLen,sizeof(char),fp);
//fclose(fp);
//for(int i=0;i<fileLen;++i)
//{
//	printf("%d",tmp[i]);
//	
//}
//
//printf("\n");
//}
//#include <string.h>
//#include <stdio.h>
//
//int main() {
//    // define the vector file
//    FILE* vec = fopen("K.txt", "r");
//    // define the dimensions of the vector
//    int rows = 100;
//    // this vector has 100 rows for instance
//    int vec[rows];
//    //I managed to read the csv file now I need to read it into a string
//    char ch,line;
//    while((ch=getc(vec))!=EOF){
//    //append the characters to the empty string
//    line+=ch;
//    }
// //confirm the accuracy of the string by outputting it
//   printf("%s",line);
// //the above line outputs blank, please help
//    
//
//
//
//    return 0;
//}


#include<stdio.h>
#include <string.h>
#include<malloc.h>
#include<math.h>
#define MAXLINE 100000
#define BUFLEN 1024
int main()
{
FILE *file;
char buf[BUFLEN];
int len=0,i=0;
char *array[MAXLINE];
file=fopen("K.txt","r");//打开K.TxT文件
if(!file)return -1;
while(fgets(buf,BUFLEN,file))//读取TXT中字符
{
len=strlen(buf);
array[i]=(char*)malloc(len+1);
if(!array[i])break;
strcpy(array[i++],buf);
}
fclose(file);
i--;
while(i>=0&&array[i])
{
	if(len>9){
	array[i]=lower(buf);
printf("%s\n",array[i]);}//打印test文档的字符
else{

printf("%s\n",array[i]);}
free(array[i--]);
}
}











