 #include <stdio.h>
#include <stdlib.h>

//�����Ϳ� �������� Ȱ��//
void vaccine() {     
	int first = 45060612;  
	int* second = &first;
	int** third = &second;
	int*** fourth = &third;

	printf("1������ : %d\n\n", first);
	*second = 44609864;
	printf("2������ : %d\n\n", second);
	**third = 33335934;
	printf("3������ : %d\n\n", third);;
	***fourth = 4257985;
	printf("4������ : %d\n\n", fourth);
}
