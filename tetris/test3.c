#define _CRT_SECURE_NO_WARNINGS 1
#define H 20  //����߶�
#define W 30  //������

void printframe1()
{
	int i, j;
	//��ӡ��һ��
	for (i = 0; i < W; i++)
		printf("* ");
	printf("\n");
	//��ӡ�м���
	for (j = 0; j < H - 2; j++)
	{
		printf("* ");
		for (i = 0; i < W - 2; i++)
			printf("  ");
		printf("* ");
		printf("\n");
	}
	//��ӡ���һ��
	for (i = 0; i < W; i++)
		printf("* ");
	printf("\n");
}