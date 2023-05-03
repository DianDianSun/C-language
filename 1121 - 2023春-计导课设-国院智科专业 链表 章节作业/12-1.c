#include <stdio.h>

void TASK1(FILE *p){
	int capital = 0,lowercase = 0,digit = 0,others = 0;
	while(1){
		int ch = getc(p);
		if(ch == -1){
			break;
		}
		if(ch >= 65 && ch <= 90){
			capital++;
		}else if(ch >= 97 && ch <= 122){
			lowercase++;
		}else if(ch >= 48 && ch <= 57){
			digit++;
		}else{
			others++;
		}
	}
	printf("capital: %d\n",capital);
	printf("lowercase: %d\n",lowercase);
	printf("digit: %d\n",digit);
	printf("others: %d\n",others);
	fclose(p);
}
void TASK2(FILE *p){
	int lines = 1,max,min,sum;
	int ch;
	int i = 1;
		while(1){
			sum = 0;
			while(1){
				ch = getc(p);
				if(ch != 10 && ch != -1){
					sum++;
				}else if(ch == 10 && getc(p) != -1){
					fseek(p,-1,SEEK_CUR);
					lines++;
					break;
				}else if(ch == -1){
					break;
				}
			}
			if(i == 1){
				i++;
				max = sum;
				min = sum;
			}
			if(sum > max){
				max = sum;
			}
			if(sum < min){
				min = sum;
			}
			if(ch == -1){
				break;
			}
		}
	printf("line: %d\n",lines);
	printf("%d characters in max line.\n",max);
	printf("%d characters in min line.\n",min);
	fclose(p);
}
void TASK3(FILE *p){
	int ch,sum = 0;
	printf("CAPITAL:\n");
	ch = 65;
	while(1){
		while(1){
			int temp = getc(p);
			if(temp == ch){
				sum++;
			}
			if(temp == -1){
				break;
			}
		}
		printf("%c:%d\n",ch,sum);
		sum = 0;
		ch++;
		rewind(p);
		if(ch == 91){
			break;
		}
	}
	printf("LOWERCASE:\n");
	ch = 97;
	while(1){
		while(1){
			int temp = getc(p);
			if(temp == ch){
				sum++;
			}
			if(temp == -1){
				break;
			}
		}
		printf("%c:%d\n",ch,sum);
		sum = 0;
		ch++;
		rewind(p);
		if(ch == 123){
			break;
		}
	}
	fclose(p);
}
int main() {
	int TASK;
	scanf("%d",&TASK);
	FILE *p = fopen("dict.dic", "r");
	if(TASK == 1){
		printf("Task1:\n");
		TASK1(p);
	}else if(TASK == 2){
		printf("Task2:\n");
		TASK2(p);
	}else if(TASK == 3){
		printf("Task3:\n");
		TASK3(p);
	}
	return 0;
}