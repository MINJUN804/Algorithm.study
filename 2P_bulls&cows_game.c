#include<stdio.h>
#define _CRT_SECURE_NO_WARNNING

int main(void)
{
	int player1[3];
	int player2[3];

	int answer1[3];
	int answer2[3];

	int strike_1 = 0, ball_1 = 0;
	int strike_2 = 0, ball_2 = 0;

	int i, j;
	int count = 0;

	printf("player1은 숫자를 기입하시오: \n");
	scanf("%d%d%d", &player1[0], &player1[1], &player1[2]);

	printf("player2는 숫자를 기입하시오: \n");
	scanf("%d%d%d", &player2[0], &player2[1], &player2[2]);

	while (1)
	{
		count++;
		printf("[%d]회전 \nplayer1부터 시작:",count);
		scanf("%d%d%d", &answer1[0], &answer1[1], &answer1[2]);
		printf("\n");
		printf("player2차례:");
		scanf("%d%d%d", &answer2[0], &answer2[1], &answer2[2]);

		for(i=0;i<3;i++)
			for (j = 0; j < 3; j++)
			{
				if (answer1[i] == player2[j] && i == j)
					strike_1++;
				else if (answer1[i] == player2[j] && i != j)
					ball_1++;
			}
		printf("player1 결과:%dstrike %dball \n", strike_1, ball_1);


		for (i = 0; i < 3; i++)
			for (j = 0; j < 3; j++)
			{
				if (answer2[i] == player1[j] && i == j)
					strike_2++;
				else if (answer2[i] == player1[j] && i != j)
					ball_2++;
			}
		
		printf("player2 결과: %dstrike %dball \n",strike_2,ball_2);

		printf("\n");
		if (strike_1 == 3)
		{
			printf("player1 승리!!");
			break;
		}
		if (strike_2 == 3)
		{
			printf("player2 승리!!");
			break;
		}
		if (count == 10)
		{
			printf("경기끝 무승부.....");
		}
		strike_1 = 0;
		strike_2 = 0;
		ball_1 = 0;
		ball_2 = 0;
	}
	return 0;
}