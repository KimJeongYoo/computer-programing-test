 #include <stdio.h>
#include <stdlib.h>

//포인터와 포인터의 활용//
void vaccine() {     
	int first = 45060612;  
	int* second = &first;
	int** third = &second;
	int*** fourth = &third;

	printf("1차접종 : %d\n\n", first);
	*second = 44609864;
	printf("2차접종 : %d\n\n", second);
	**third = 33335934;
	printf("3차접종 : %d\n\n", third);;
	***fourth = 4257985;
	printf("4차접종 : %d\n\n", fourth);
}
