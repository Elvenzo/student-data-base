#include<stdio.h>
#include<string.h>
struct studentResult
{
	int no;
	char name[20];
	int sub[3];
	int total;
}stu[3];
 int main()
{
	int i,j,k,l;
 
	for(i=0;i<3;i++)
	{ 
		printf("\n Enter The Data For Student[%d]:>>",i);

		printf("\n Enter No:>>");
		scanf("%d",&stu[i].no);

		printf("\n Enter Name:>>");
		scanf("%s",&stu[i].name);

		printf("\n Enter Subject Marks");
		for(j=0;j<3;j++)
		{
			printf("\nt Subject[%d]:>>",j);
			scanf("%d",&stu[i].sub[j]);
		}
		for(k=0;k<3;k++)
		{
			stu[k].total=0;
			for(l=0;l<3;l++)
			{
				stu[k].total=stu[k].total+stu				[k].sub[i];
			}
		}
	}
	 
	printf("\nSTUDENT TABILAR FORMATE");
	printf("\n");
	printf("\n No  Name\t\t\t Total");
	for(i=0;i<3;i++)
	{
		printf("\n%d%s%d",stu[i].no,stu				[i].name,stu[i].total);
	}
	return 0;
}