#include<stdio.h>
#define _CRT_SECURE_NO_WARNNING

int main(void)
{
	int answer[3];
	int player[3];
	

	int strike, ball;
	int count=0;
	int i, j;
	printf("숫자 야구,[10]회까지 진행 \n");
	printf("answer는 숫자 3개 입력하시오:");
	scanf("%d%d%d", &answer[0], &answer[1], &answer[2]);

	while (1)
	{
		count++;
		printf("[%d]회 player는 예상한 숫자 3개를 써넣으시오:",count);
		scanf("%d%d%d", &player[0], &player[1], &player[2]);

		strike = 0;
		ball = 0;
		
			for (i = 0; i < 3; i++)
			{
				for (j = 0; j < 3; j++)
					if (answer[i] == player[j] && i == j)
						strike++;
					else if (answer[i] == player[j] && i != j)
						ball++;
			}
		

		printf("%d strike  %d ball \n", strike, ball);
		if (strike == 3)
		{
			printf("player승리!!");
			break;
		}

		if (count == 10)
		{
			printf("answer 승리!!");
			break;
		}
		strike = 0;
		ball = 0;
	}

	return 0;
}