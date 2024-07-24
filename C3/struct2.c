#include<stdio.h>
/*
struct stud{
    int roll_no;
        char name[20];
        float marks;
};

int main(){
    struct stud s;
    struct stud *p=&s;
    printf("enter roll_no: ");scanf("%d",&(p->roll_no)); 
    printf("enter name: ");fflush(stdin);scanf("%[^\n]s",p->name);
    printf("enter marks: ");scanf("%f",&(p->marks));
    printf("Entered details are\n");
    printf("roll_no= %d\n",p->roll_no);
    printf("name= %s\n",p->name);
    printf("marks= %f\n",p->marks);
    return 0;

}


struct stud{
    int roll_no;
        char name[20];
        float marks;
};

void read(int a,int b){
    scanf("%d",&a);
    scanf("%d",&b);
    
}

int main(){
    struct stud s;
    struct stud *p=&s;
    int a,b;
    read(a,b);//no change is observed if pass by varaible doesnt cause any change 
    printf("%d",a);
    printf("%d",b);
}


//using poinyters we can see the cgnages
struct stud{
    int roll_no;
        char name[20];
        float marks;
};

void read(struct stud *s){
    printf("Enter student details \n ");
    printf("enter roll_no: ");scanf("%d",&(s->roll_no)); 
    printf("enter name: ");fflush(stdin);scanf("%[^\n]s",s->name);
    printf("enter marks: ");scanf("%f",&(s->marks));
    

}
void write(struct stud *s){

    printf("Entered details are\n");
    printf("roll_no= %d\n",s->roll_no);
    printf("name= %s\n",s->name);
    printf("marks= %f\n",s->marks);
}

int main(){
    struct stud s1;
    struct stud s2;
    read(&s1); //we pass address as we are receiving by pointers in read and write
    read(&s2);
    write(&s1); //if we can directly give s1 and s2 without (&) and in receiving also remove pointer and normal(struct stud s)  not (struct stud *s)
    write(&s2);
    return 0;
}

*/


struct stud{
    int roll_no;
        char name[20];
        float marks;
};

void read(struct stud *s){
    printf("Enter student details \n ");
    printf("enter roll_no: ");scanf("%d",&(s->roll_no)); 
    printf("enter name: ");fflush(stdin);scanf("%[^\n]s",s->name);
    printf("enter marks: ");scanf("%f",&(s->marks));
    

}
int compare(struct stud s1,struct stud s2){
    //compare and write can be written in short way also here void compare shall be written in short way method
    s1.marks>s2.marks?printf("%d , %s , %f",s1.roll_no,s1.name,s1.marks):printf("%d , %s , %f",s2.roll_no,s2.name,s2.marks);
    
    //the other way
    // if(s1.marks > s2.marks)
    //     return s1.marks;
    // else   
    //     return s2.marks;    

}
void write(struct stud *s){

    printf("Entered details are\n");
    printf("roll_no= %d\n",s->roll_no);
    printf("name= %s\n",s->name);
    printf("marks= %f\n",s->marks);
}

int main(){
    struct stud s1;
    struct stud s2;
    read(&s1); //we pass address as we are receiving by pointers in read and write
    read(&s2);
    compare(s1,s2); //for short way we do this
    //for other way down code:
    // int mark=compare(s1,s2);
    // if (mark==s1.marks)
    //     write(&s1);
    // else    
    //     write(&s2);
    return 0;
}
