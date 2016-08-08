#include<stdio.h>
void main()
{
FILE *fp;
int i=0,x,y=0,j,k,row,col;
char ch[30],a;
for(j=0;j<30;j++)
ch[j] = ' ';
printf("Enter key \n");
scanf("%d",&col);
fp = fopen("/root/Desktop/trans/inputtrans.txt","r");
while((a = getc(fp))!= EOF)
{
ch[i]=a;
i++;
}
fclose(fp);	
i--;
if(i%col==0)
row = i/col;
else
row = (i/col)+1;
char mat[row][col];
for(j=0;j<row;j++)
for(k=0;k<col;k++)
{
mat[j][k]=ch[y];
y++;
}
for(j=0;j<row;j++)
{
for(k=0;k<col;k++)
printf("%c",mat[j][k]);
printf("\n");
}
fp = fopen("/root/Desktop/trans/output.txt","w+");
for(j=0;j<col;j++)
for(k=0;k<row;k++)
{
printf("%c",mat[k][j]);
putc(mat[k][j],fp);
}
fclose(fp);
}
//Yo buddy
