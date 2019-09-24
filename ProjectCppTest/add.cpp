//#include <cstdio>
//#include <cstdarg>
//#include <string.h>
//#include <cstdlib>
//struct {
//	char name[40];
//	int age;
//}person,person_copy;
//void fnExit1() {
//	puts("Exit function 1.");
//}
//void fnExit2() {
//	puts("Exit function 2.");
//}
//
//int compareints(const void* a, const void* b) {
//	return *(int*)a - *(int*)b;
//}
//int FindMax(int n, ...) {
//	int i, val, largest;
//	va_list vl;
//	va_start(vl, n);
//	largest = va_arg(vl, int);
//	for (i = 1; i < n; i++) {
//		val = va_arg(vl, int);
//		largest = (largest > val) ? largest : val;
//	}
//	va_end(vl);
//	return largest;
//}
//void PrintLines(const char* first, ...) {
//	const char* str;
//	va_list vl;
//	str = first;
//	va_start(vl, first);
//
//	do {
//		puts(str);
//		str = va_arg(vl, const char*);
//	} while (str != NULL);
//	va_end(vl);
//}
//void PrintFloats(int n, ...) {
//	int i;
//	double val;
//	printf("Printing floats: ");
//	va_list vl;
//	va_start(vl, n);
//
//	for (i = 0; i < n; i++) {
//		val = va_arg(vl, double);
//		printf(" [%.2f]", val);
//	}
//	va_end(vl);
//	printf("\n");
//}
//int main() {
//
//	int a = 10;
//
////	printf("%d\n", &a);
//
//	int* p = &a;
//
//	//printf("%d\n", a);
//
////	printf("%d\n", *p);
//
//	//printf("%d\n", p);
//
//	//printf("%d\n", &p);
//
//	char myname[] = "Pierre de Fermat";
//
//	memcpy(person.name, myname, strlen(myname) + 1);
//
//	person.age = 46;
//
//	memcpy(&person_copy, &person, sizeof(person));
//
//	//printf("person_copy: %s, %d \n", person_copy.name, person_copy.age);
//
//	/*char szInput[256];
//	printf("Enter a sentence: ");
//	gets(szInput);
//	printf("The sentence entered is %u characters long.\n", (unsigned)strlen(szInput));
//	*/
//
//	/*char key[] = "apple";
//
//	char buffer[80];
//
//	do{
//		printf("Guess my favorite fruit? ");
//		fflush(stdout);
//		scanf("%79s", buffer);
//	} while (strcmp(key, buffer) != 0);
//	
//	puts("Correct answer!");
//
//
//	*/
//
//
//	//strcat
//
//	/*char str[80];
//	strcpy(str, "these ");
//	strcat(str, "strings ");
//	strcat(str, "are ");
//	strcat(str, "concatenated.");
//	puts(str);
//	*/
//
//
//	//strncat
//
//	/*char str1[20];
//	char str2[20];
//	strcpy(str1, "To be ");
//	strcpy(str2, "or not to be");
//	strncat(str1, str2, 6);
//	puts(str1);
//	*/
//
//	//strcpy
//
//	/*char str1[] = "Sample string";
//	char str2[40];
//	char str3[40];
//	strcpy(str2, str1);
//	strcpy(str3, "copy successful");
//	printf("str1: %s\nstr2: %s\nstr3: %s\n", str1, str2, str3);
//	*/
//
//
//	//strcspn
//
//	/*char str[] = "fcba73";
//	char keys[] = "1234567890";
//	int i;
//	i = strcspn(str, keys);
//	printf("The first number in str is at position %d.\n", i + 1);
//	*/
//
//	//atexit
//
//	//atexit(fnExit1);
//	//atexit(fnExit2);
//	//puts("Main function.");
//
//
//	//getenv
//
//	/*char* pPath;
//
//	pPath = getenv("PATH");
//
//	if (pPath != NULL) {
//		printf("The current path is: %s", pPath);
//	}
//	*/
//
//	/*
//	int values[] = { 50, 20, 60, 40, 10, 30 };
//
//	int* pItem;
//
//	int key = 40;
//
//	qsort(values, 6, sizeof(int), compareints);
//
//	pItem = (int*)bsearch(&key, values, 6, sizeof(int), compareints);
//
//	if (pItem != NULL)
//		printf("%d is in the array.\n", *pItem);
//	else
//		printf("%d is not in the array.\n", key);
//
//	*/
//
//	//free
//
//
//	/*int* buffer1, * buffer2, * buffer3;
//	buffer1 = (int*)malloc(100 * sizeof(int));
//	buffer2 = (int*)calloc(100, sizeof(int));
//	buffer3 = (int*)realloc(buffer2, 500 * sizeof(int));
//	free(buffer1);
//	free(buffer3);
//	*/
//
////system
///*
//int i;
//printf("Checking if processor is available...");
//if (system(NULL)) puts("Ok");
//else exit(EXIT_FAILURE);
//printf("Executing command DIR...\n");
//i = system("dir");
//printf("The value returned was: %d.\n", i);
//
//*/
//
//PrintFloats(3, 3.14159, 2.71828, 1.41421);
//
//
//
//int m;
//m = FindMax(7, 702, 422, 631, 834, 892, 104, 772);
//printf("The largest value is: %d\n", m);
//
//PrintLines("First", "Second", "Third", "Fourth", NULL);
//
//
//	return 0;
//}