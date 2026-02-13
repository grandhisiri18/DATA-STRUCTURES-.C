#include<stdio.h>
struct student {
	int first :2;
	int second :3;
};
int main(){
	struct student s;
	s.first=3;
	s.second=7;
	printf("%d",s.first);
	printf("%d",s.second);
	return 0;
}