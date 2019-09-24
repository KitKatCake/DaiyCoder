//#include <stdio.h>
//int facttail(int n, int a) {
//	if (n < 0) {
//		return 0;
//	}
//	else if (n == 0) {
//		return 1;
//	}
//	else if (n == 1) {
//		return a;
//	}
//	else {
//		return facttail(n, n * a);
//	}
//}
//
//typedef struct Date {
//	int year;
//	int month;
//	int day;
//}Dd;
//typedef struct Student {
//	char name[20];
//	int age;
//	char sex;
//	char num[20];
//}Stu;
//
//struct student {
//	int num;
//	char name[20];
//	float score;
//}st[3] = {{101,"Zhang san",45},
//{102,"Li si",62.5},
//{103,"Wang wu",92.5}
//};
//int main() {
//
//
////	int p = facttail(10,9);
//
//	//1 1 2 3 5 8 13 21 34 55 
//
////	printf("%d\n", p);
//
//	//struct Date data;
//
//	Dd dd;
//
//	//struct Date* d = &data;
//
//	Dd* d = &dd;
//
//	d->year = 2019;
//	d->month = 10;
//	d->day = 1;
//
//	//printf("%d/%d/%d\n", d->year, d->month, d->day);
//
//	Stu stu[3] = { {"小红", 22, 'F', "Z1207031"}, {"小明", 21, 'M', "Z1207035"}, {"小七", 23, 'F', "Z1207022"} };
//
//	Stu* s = stu;
//	for (int i = 0; i < 3; i++) {
//		//printf("%s %d %c %s\n",(s+i)->name, (s+i)->age, (s+i)->sex, (s+i)->num);
//		
//		//printf("%s %d %c %s\n",s[i].name, s[i].age, s[i].sex, s[i].num);
//	}
//
//	int i, num = 0;
//	float ave, sum = 0;
//	for (i = 0; i < 3; i++) {
//		sum += st[i].score;
//		if (st[i].score < 60) {
//			num++;
//		}
//	}
//	ave = sum / 5;
//
//	printf("average=%f\nnum=%d\n", ave, num);
//
//
//	return 0;
//}