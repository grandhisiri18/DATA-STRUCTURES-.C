#include <stdio.h>
struct student {
	int roll;
	float marks;
	char grade;
	
};
int main(){
	struct student s1,s2;
	s1.roll=101;
	s1.marks=99;
	s1.grade='O';
	s2=s1;
	printf("%d %f %c",s2.roll,s2.marks,s2.grade);
	return 0;
}