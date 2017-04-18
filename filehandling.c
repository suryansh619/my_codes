#include<stdio.h>
int main()
{
int i,j;
        struct name{
                char e[100];
char h[100];
        }
        n[100];
        FILE *fp,*fg;
        fp=fopen("file.txt","a+");
        fg=fopen("new file.txt","a+");
        i=0;
int b=8,count=0;
        while(b--)
        {
                fscanf(fp,"%s",n[i].e);
     for(j=0;n[i].e[j]!='\0';j++)
                {
                        if(n[i].e[j]=='@')
                        {
                                fprintf(fg,"%s\n",n[i].e);
count++;
break;
                        }
                }
            i++;
        }
        i=0;
b=8;
printf("%d\n",count);
        while(b--)
        {
                fscanf(fg,"%s",n[i].h);
                printf("%s\n",n[i].h);
                i++;
        }
        return 0;
}
