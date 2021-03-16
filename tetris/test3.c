#define _CRT_SECURE_NO_WARNINGS 1
#define H 20  //定义高度
#define W 30  //定义宽度

void printframe1()
{
	int i, j;
	//打印第一行
	for (i = 0; i < W; i++)
		printf("* ");
	printf("\n");
	//打印中间行
	for (j = 0; j < H - 2; j++)
	{
		printf("* ");
		for (i = 0; i < W - 2; i++)
			printf("  ");
		printf("* ");
		printf("\n");
	}
	//打印最后一行
	for (i = 0; i < W; i++)
		printf("* ");
	printf("\n");
}