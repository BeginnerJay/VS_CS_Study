#include <stdio.h>
// 2차원 배열을 사용하여 바둑판 정보를 저장하고 알려주기
main()
{
	char data[3][4] = { { 0, 0, 2, 0 }, { 1, 1, 0, 0 }, { 2, 1, 0, 2 } };
	int x, y;

	for (y = 0; y < 3; y++)
	{
		for (x = 0; x < 4; x++)
		{
			printf("%d행 %d열에", y + 1, x + 1);
		
			if (data[y][x] == 1)
			{
				printf(" 검은 돌이 놓여 있습니다.\n");
			}
			else if (data[y][x] == 2)
			{
				printf(" 흰 돌이 놓여 있습니다.\n");
			}
			else printf("는 돌이 놓여 있지 않습니다.\n");
		
		}
		
		
	}
}
