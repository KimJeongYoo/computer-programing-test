/* [주석 1 : 과제 설명]

  컴퓨터프로그래밍 평가 과제 (배점 25점)
  학과 : 컴퓨터공학
  학번 : 202200896
  이름 : 김정유

  과제 주제 : COVID-19
  과제 설명 :

*/


//지역별 확진자 배열//
int Total[5] = { 7382,7304,78,18225460,24371 };
int Seoul[5] = { 1160,1159,1,3638248,4853 };
int Busan[5] = { 417,417,0,1098582,2159 };
int Daegu[5] = { 396,391,5,765691,1339 };
int Gyeonggi[5] = { 1690,1684,6,4952525,6248 };
int Gangwon[5] = { 360,357,3,520091,860 };



#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS   //scanf 버그//
#define SIZE 6







int main(void)
{
	struct nation {                //국가별 현황에 사용되는 구조체//
		int grade;
		int people;
		int plusminus;
	};

	struct nation list[3] = { {1,85400000,35373},{2,43200000,8582},{3,31400000,27796} };


//ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ//


	FILE* fp;
	fopen_s(&fp, "covid.txt", "r");


//ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ//
	

	int i;
	int num1, num2, num3;




	while (1) {
		printf("\n");
		printf("\n");         //메뉴얼//
		printf("        ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("	ㅣ1. 코로나 확진자 현황ㅣ\n");
		printf("	ㅣ2. 백신 접종 현황    ㅣ\n");
		printf("	ㅣ3. 국가별 현황       ㅣ\n");
		printf("	ㅣ4. 거리두기 정보     ㅣ\n");
		printf("	ㅣ5. 프로그램 종료     ㅣ\n");
		printf("        ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
		printf("\n");
		printf("\n");
		printf("사용하고 싶은 기능을 번호로 입력하시오 : \n");

		scanf("%d", &num1);

		switch (num1) {

		case 1:

			printf("1. 지역별 확진환자 증감 현황\n\n");
			printf("2. 전국 확진, 사망자 현황\n\n");
			printf("사용하고 싶은 기능을 번호로 입력하시오 : ");
			scanf("%d", &num2);
			printf("\n");

			switch (num2) {

			case 1: //1. 코로나 확진자 현황//
				printf("1.Seoul, 2.Busan, 3.Daegu, 4.Gyeonggi, 5.Gangwon\n");
				printf("지역 번호를 선택하시오 : ");
				scanf("%d", &num3);
				switch (num3) {

				case 1:
					printf("      합계    국내발생    해외유입   확진환자   사망자  \n");
					printf("%10.d%10.d%10.d%15.d%10.d \n", Seoul[0], Seoul[1], Seoul[2], Seoul[3], Seoul[4]);
					break;

				case 2:
					printf("      합계    국내발생    해외유입   확진환자   사망자  \n");
					printf("%10.d%10.d%10.d%15.d%10.d \n", Busan[0], Busan[1], Busan[2], Busan[3], Busan[4]);
					break;

				case 3:
					printf("      합계    국내발생    해외유입   확진환자   사망자  \n");
					printf("%10.d%10.d%10.d%15.d%10.d \n", Daegu[0], Daegu[1], Daegu[2], Daegu[3], Daegu[4]);
					break;

				case 4:
					printf("      합계    국내발생    해외유입   확진환자   사망자  \n");
					printf("%10.d%10.d%10.d%15.d%10.d \n", Gyeonggi[0], Gyeonggi[1], Gyeonggi[2], Gyeonggi[3], Gyeonggi[4]);
					break;

				case 5:
					printf("      합계    국내발생    해외유입   확진환자   사망자  \n");
					printf("%10.d%10.d%10.d%15.d%10.d \n", Gangwon[0], Gangwon[1], Gangwon[2], Gangwon[3], Gangwon[4]);
					break;
				default:
					printf("잘못 입력하셨습니다. 다시 입력바랍니다.\n");
				}
				break;

			case 2: 
				printf("\n");
				printf("       확진환자     사망자      \n");
				printf("%15.d %10.d\n", Total[3], Total[4]);
				break;
			}
			break;

		case 2: //2. 백신 접종 현황//
			vaccine();    //소스파일 vaccine.c 백신함수//
			break;

		case 3: //3. 국가별 현황//
			printf("%d순위 : 미국,  확진자 : %d(+%d)\n", list[0].grade, list[0].people, list[0].plusminus);
			printf("%d순위 : 인도,  확진자 : %d(+%d)\n", list[1].grade, list[1].people, list[1].plusminus);
			printf("%d순위 : 브라질,  확진자 : %d(+%d)\n", list[2].grade, list[2].people, list[2].plusminus);
			break;

		case 4: //4. 거리두기 정보//
			for (int i = 0;i < 3;i++)
			{
				int ch = fgetc(fp);
				printf("%c", ch);
			}
			fclose(fp);

			break;
		case 5:
			printf("프로그램이 종료되었습니다.");
			break;
		default:
			printf("잘못 입력하셨습니다. 다시 입력바랍니다.\n");
		}
		if (num1 == 5)
			break;
	}
	return 0;
}


