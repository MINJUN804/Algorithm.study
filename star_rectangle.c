int main(void)
{
	int i, j;
	int line, row=1;
	printf("i행 j열:");
	scanf("%d %d", &i, &j);
	while (1)
	{
		row++;

		for (row = 1; row <= j; row++)
		{
		
			{
				for (line = 1; line <= i; line++)
					printf("*");
			}
			printf("\n");
		}
		if (row = j)
		{
			break;
		}
		
	}
	return 0;
}
