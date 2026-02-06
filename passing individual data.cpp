#include <stdio.h>
struct student {
	int roll;
	float marks;
};
void display(int a,float b);
int main(){
	struct student s; 
	printf("enter the roll number");
	scanf("%d",&s.roll);
	printf("\nenter the marks of the students");
	scanf("%f",&s.marks);
	display(s.roll,s.marks);
	return 0;
}
void display(int a,float  b){
	printf("%d\n %f",a,b);
}
