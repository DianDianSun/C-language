#include <stdio.h>

typedef struct stu{
	
	char name[10];
	int age ;
	int score;
	
}stu;

void change(stu *a,stu *b){
	stu c;
	c = *a;
	*a = *b;
	*b = c;
}


void sort(stu *p,int n){
	for(int i = 0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if((p+i)->age < (p+j+1+i)->age){
				change(p+i,p+j+1+i);
			}
		}for(int i = 0;i < n-1;i++){
			if((p+i)->age == (p+1+i)->age&&(p+i)->score < (p+1+i)->score){
				change(p+i,p+i+1);
			}
		}
	}
}
int main() {
	
	stu students[5] = {
		{"mike",18,90},
		{"jiang",18,80},
		{"lucy",30,70},
		{"john",22,88},
		{"diandian",33,60}
	};
	sort(students,5);
	for(int i = 0;i<5;i++){
		printf("%s %d %d\n",students[i].name,students[i].age,students[i].score);
	}
	return 0;
}