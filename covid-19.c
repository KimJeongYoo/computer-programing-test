/* [�ּ� 1 : ���� ����]

  ��ǻ�����α׷��� �� ���� (���� 25��)
  �а� : ��ǻ�Ͱ���
  �й� : 202200896
  �̸� : ������

  ���� ���� : COVID-19
  ���� ���� :

*/


//������ Ȯ���� �迭//
int Total[5] = { 7382,7304,78,18225460,24371 };
int Seoul[5] = { 1160,1159,1,3638248,4853 };
int Busan[5] = { 417,417,0,1098582,2159 };
int Daegu[5] = { 396,391,5,765691,1339 };
int Gyeonggi[5] = { 1690,1684,6,4952525,6248 };
int Gangwon[5] = { 360,357,3,520091,860 };



#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS   //scanf ����//
#define SIZE 6







int main(void)
{
	struct nation {                //������ ��Ȳ�� ���Ǵ� ����ü//
		int grade;
		int people;
		int plusminus;
	};

	struct nation list[3] = { {1,85400000,35373},{2,43200000,8582},{3,31400000,27796} };


//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�//


	FILE* fp;
	fopen_s(&fp, "covid.txt", "r");


//�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�//
	

	int i;
	int num1, num2, num3;




	while (1) {
		printf("\n");
		printf("\n");         //�޴���//
		printf("        �ѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
		printf("	��1. �ڷγ� Ȯ���� ��Ȳ��\n");
		printf("	��2. ��� ���� ��Ȳ    ��\n");
		printf("	��3. ������ ��Ȳ       ��\n");
		printf("	��4. �Ÿ��α� ����     ��\n");
		printf("	��5. ���α׷� ����     ��\n");
		printf("        �ѤѤѤѤѤѤѤѤѤѤѤѤ�\n");
		printf("\n");
		printf("\n");
		printf("����ϰ� ���� ����� ��ȣ�� �Է��Ͻÿ� : \n");

		scanf("%d", &num1);

		switch (num1) {

		case 1:

			printf("1. ������ Ȯ��ȯ�� ���� ��Ȳ\n\n");
			printf("2. ���� Ȯ��, ����� ��Ȳ\n\n");
			printf("����ϰ� ���� ����� ��ȣ�� �Է��Ͻÿ� : ");
			scanf("%d", &num2);
			printf("\n");

			switch (num2) {

			case 1: //1. �ڷγ� Ȯ���� ��Ȳ//
				printf("1.Seoul, 2.Busan, 3.Daegu, 4.Gyeonggi, 5.Gangwon\n");
				printf("���� ��ȣ�� �����Ͻÿ� : ");
				scanf("%d", &num3);
				switch (num3) {

				case 1:
					printf("      �հ�    �����߻�    �ؿ�����   Ȯ��ȯ��   �����  \n");
					printf("%10.d%10.d%10.d%15.d%10.d \n", Seoul[0], Seoul[1], Seoul[2], Seoul[3], Seoul[4]);
					break;

				case 2:
					printf("      �հ�    �����߻�    �ؿ�����   Ȯ��ȯ��   �����  \n");
					printf("%10.d%10.d%10.d%15.d%10.d \n", Busan[0], Busan[1], Busan[2], Busan[3], Busan[4]);
					break;

				case 3:
					printf("      �հ�    �����߻�    �ؿ�����   Ȯ��ȯ��   �����  \n");
					printf("%10.d%10.d%10.d%15.d%10.d \n", Daegu[0], Daegu[1], Daegu[2], Daegu[3], Daegu[4]);
					break;

				case 4:
					printf("      �հ�    �����߻�    �ؿ�����   Ȯ��ȯ��   �����  \n");
					printf("%10.d%10.d%10.d%15.d%10.d \n", Gyeonggi[0], Gyeonggi[1], Gyeonggi[2], Gyeonggi[3], Gyeonggi[4]);
					break;

				case 5:
					printf("      �հ�    �����߻�    �ؿ�����   Ȯ��ȯ��   �����  \n");
					printf("%10.d%10.d%10.d%15.d%10.d \n", Gangwon[0], Gangwon[1], Gangwon[2], Gangwon[3], Gangwon[4]);
					break;
				default:
					printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է¹ٶ��ϴ�.\n");
				}
				break;

			case 2: 
				printf("\n");
				printf("       Ȯ��ȯ��     �����      \n");
				printf("%15.d %10.d\n", Total[3], Total[4]);
				break;
			}
			break;

		case 2: //2. ��� ���� ��Ȳ//
			vaccine();    //�ҽ����� vaccine.c ����Լ�//
			break;

		case 3: //3. ������ ��Ȳ//
			printf("%d���� : �̱�,  Ȯ���� : %d(+%d)\n", list[0].grade, list[0].people, list[0].plusminus);
			printf("%d���� : �ε�,  Ȯ���� : %d(+%d)\n", list[1].grade, list[1].people, list[1].plusminus);
			printf("%d���� : �����,  Ȯ���� : %d(+%d)\n", list[2].grade, list[2].people, list[2].plusminus);
			break;

		case 4: //4. �Ÿ��α� ����//
			for (int i = 0;i < 3;i++)
			{
				int ch = fgetc(fp);
				printf("%c", ch);
			}
			fclose(fp);

			break;
		case 5:
			printf("���α׷��� ����Ǿ����ϴ�.");
			break;
		default:
			printf("�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է¹ٶ��ϴ�.\n");
		}
		if (num1 == 5)
			break;
	}
	return 0;
}


