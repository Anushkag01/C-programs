#include<stdio.h>
//structure declarartion can be done inide--then local to main or outside a function def.--then global varaible 
//if global then the structured variablecan be used in any userdefined fn
/*
int main(){
    struct Student{
        int rollno;
        char name[20];
        float marks;
};

NOT ALLOWED
struct student s;
s={};
both have to be on same line 

struct Student s={1,"anushka",90.3444};
printf("studnt details\n");
printf("roll no=%d\n",s.rollno);
printf("rmarks=%f\n",s.marks);
printf("rname=%s\n",s.name);
}
*/

struct stud{
        int roll_no;
        char name[20];
        float marks;
};

int main()
{
	//3) read and write using structure-pointer
	struct stud s;
	struct stud *p=&s;
	printf("enter roll_no:");scanf("%d",&(p->roll_no));//or &((*p).roll_no)
	printf("enter name:");scanf("%s",p->name);
	printf("enter marks:");scanf("%f",&(p->marks));
	printf("entered details are\n");
	printf("roll_no = %d\n",p->roll_no);
	printf("name = %s\n",p->name);
	printf("marks = %f\n",p->marks);
	return 0;
}