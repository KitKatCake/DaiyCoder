//#include <stdio.h>
//#include <time.h>
//#include <math.h>
//int frequency_of_primes(int n) {
//	int i, j;
//	int freq = n - 1;
//	for (i = 2; i <= n; n++) {
//		for (j = sqrt(i); j > 1; j--) {
//			if (i % j == 0) {
//				--freq;
//				break;
//			}
//		}
//	}
//	return freq;
//}
//int main() {
//
//	/*
//	int result;
//	char oldname[] = "myfile.txt";
//	char newname[] = "newfile.txt";
//	result = rename(oldname, newname);
//	if (result == 0)
//		puts("File successfully renamed");
//	else
//		perror("Error renaming file");
//	
//	*/
//
//	/*time_t rawtime;
//	struct tm* timeinfo;
//
//	time(&rawtime);
//
//	timeinfo = localtime(&rawtime);
//
//	printf("Current local time and date: %s", asctime(timeinfo));
//
//	clock_t t;
//	int f;
//	t = clock();
//
//	printf("Calculating...\n");
//		f = frequency_of_primes(99999);
//	printf("The number of primes lower than 100,000 is: %d\n", f);
//	t = clock() - t;
//	printf("It took me %d clicks (%f seconds).\n", t, ((float)t) / CLOCKS_PER_SEC);
//	
//	*/
//
//
//
//
//
//	return 0;
//}