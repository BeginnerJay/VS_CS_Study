// continue���� �̿��� �ݺ����� ���� �帧 �����ϱ�
/* 
break�� �ݺ����� ����. But continue�� 1ȸ�� ���
-> ���� ���ɹ��� �������� �ʰ� ���� ��ȭ �������� ȸ��
-> �׷��� ���� ���� ������ check �� �� �ٽ� ���������� �ݺ��� ����
*/
#include <stdio.h>

main()
{
	int m;
	for ( m = 5; m < 8; m++)
	{
		if (m == 6)
		{
			continue;
		}
		printf("m(%d)\n", m);
	}
}