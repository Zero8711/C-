#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct student
{
	int number;
	char name[10];
	double score;
};
typedef struct student Student;

void print_st(Student *st);
void input_st(Student *st);
void save_st(Student* st);
void read_st(Student* st, int count, FILE *rfp);

int main(void)
{
//	Student st[2] = { {1, "KHG", 70.3}, {2, "YGW", 90.5} };
//	strcpy(st[0].name, "ABC");
//	strcpy(st[1].name, "DEF");
//	input_st(st);
//	save_st(st);
	Student* st;
	FILE* rfp;
	rfp = fopen("st.db", "r");
	if (!rfp)
	{
		fputs("st.db 파일을 열수 없습니다.\n", stdout);
		return 1;
	}
	fseek(rfp, 0, SEEK_END);
	int size = ftell(rfp);
	int count = size / sizeof(Student);
	printf(" %d %d \n", size, count);

	st = (Student *)malloc(sizeof(Student) * 2);
	fseek(rfp, 0, SEEK_SET);
	fread(st, sizeof(Student), count, rfp);
//	calloc(count, sizeof(Student));
	read_st(st, count, rfp);
	print_st(st);
	free(st);
//	for (int i = 0; i < 2; i++)
//	{
//		printf("%d %s %.2lf\n", st[i].number, st[i].name, st[i].score);
//	}

	return 0;
}

void read_st(Student* st, int count, FILE *rfp)
{
	fread(st, sizeof(Student), count, rfp);
}

void save_st(Student* st)
{
	FILE* wfp;
	wfp = fopen("st.db", "w");
	if (wfp == NULL)
	{
		fputs("st.db 파일을 열수 없습니다.\n", stdout);
		exit(1);
	}
	fwrite(st, sizeof(Student), 2, wfp);
}

void input_st(Student *st)
{
	strcpy(st[0].name, "PWM");
	strcpy(st[1].name, "ADC");
}

void print_st(Student *st)
{
	for (int i = 0; i < 2; i++)
	{
//		printf("%d %s %.2lf\n", st[i].number, st[i].name, st[i].score);
		printf("%d %s %.2lf\n", (*st).number, (*st).name, (*st).score);//.이 *보다 우선순위가 높기 때문에 ()가 필요
		printf("%d %s %.2lf\n", st->number, st->name, st->score);
		st++;
	}
}