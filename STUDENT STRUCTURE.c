#include<stdio.h>
#include<math.h>
int main()
{
	struct stud
	{
		int rollno;
		char name[50];
		char se[10];
		char dep[50];
		float fee;
		float marks;
	};
	struct stud s[2];
	printf("enter the details of student\n");
	for(int i=0;i<2;i++)
	{
		printf("enter Roll no of student %d\n",(i+1));
		scanf("%d",&s[i].rollno);
		printf("enter the name of student %d\n",(i+1));
		scanf("%s",s[i].name);
		printf("Enter the section of student %d\n",(i+1));
		scanf("%s",s[i].se);
		printf("enter the department of student %d\n",(i+1));
		scanf("%s",s[i].dep);
		printf("Enter the fees paid by student %d\n",(i+1));
		scanf("%f",&s[i].fee);
		printf("enter the marks of student %d\n",(i+1));
		scanf("%f",&s[i].marks);
	}
	int i=0;
	if(s[i].marks>s[i+1].marks)
	{
		printf("Marks of student 1 is greater than student 2\n");
		printf("Roll no of student is %d\n",s[i].rollno);
		printf("Name of student is ");
		puts(s[i].name);
		printf("\nSection of student is ");
		puts(s[i].se);
		printf("\ndepartment of student is ");
		puts(s[i].dep);
		printf("Fees of student is %f\n",s[i].fee);
		printf("Marks of student is %f\n",s[i].marks);
	}
	else
	{
		printf("Marks of student 2 is greater than student 1\n");
		printf("Roll no of student is %d\n",s[i+1].rollno);
		printf("Name of student is ");
		puts(s[i+1].name);
		printf("Section of student is ");
		puts(s[i+1].se);
		printf("department of student is ");
		puts(s[i+1].dep);
		printf("Fees of student is %f\n",s[i+1].fee);
		printf("Marks of student is %f\n",s[i+1].marks);
	}
}
OUTPUT
enter the details of student
enter Roll no of student 1
29
enter the name of student 1
SHREEHARI
Enter the section of student 1
CC
enter the department of student 1
CSE
Enter the fees paid by student 1
58806
enter the marks of student 1
99
enter Roll no of student 2
44
enter the name of student 2
VALLISHA
Enter the section of student 2
CC
enter the department of student 2
CSE
Enter the fees paid by student 2
58806
enter the marks of student 2
100
Marks of student 2 is greater than student 1
Roll no of student is 44
Name of student is VALLISHA
Section of student is CC
department of student is CSE
Fees of student is 58806.000000
Marks of student is 100.000000


------------------
(program exited with code: 0)

Press any key to continue . . .

		
		
		
