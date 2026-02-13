#include<stdio.h>
struct student {
unsigned	int h :2;
unsigned	int m :3;
unsigned	int s :1;
};
int main(){
	struct student s;
	s.h=03;
	s.m=07;
	s.s=01;
	printf("0%d:",s.h);
	printf("0%d:",s.m);
	printf("0%d",s.s);
	return 0;
}