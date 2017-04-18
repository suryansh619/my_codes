#include<stdio.h>
int main()
{
	struct date{
		int d,m,y;
	};
	struct employee{
		int empcode;
		char empname[20];
		struct date join_date;
		float salary;
	};
	struct employee v;
	struct date u;
	FILE *fp;
	fp=fopen("tar.txt","a+");
	/*scanf("%d%s",&v.empcode,v.empname);
	scanf("%d%d%d",&u.d,&u.m,&u.y);
	scanf("%f",&v.salary);
	fprintf(fp,"%d\n%s\n%d\t%d\t%d\n%f\n",v.empcode,v.empname,u.d,u.m,u.y,v.salary);*/
	printf("%d",v.empcode);
	fclose(fp);
	return 0;
}
