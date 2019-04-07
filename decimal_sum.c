int main(void)
{
	int num;
	int i, j;
	int sum = 0;
	printf("2이상의 원하는 정수(N)을 써 넣으세요:");
	scanf("%d", &num);
	if (num < 2)
	{
		printf("다시 기입하세요");
	}
	for (i = 2; i <=num; i++)
	{
		for (j = 2; j <= i; j++)
		{
			
			if (i % j == 0)
				break;
		}
		if (i == j)
		sum += i;
	}
	
	printf("2~N 까지 소수의 합: %d", sum);

	return 0;
}