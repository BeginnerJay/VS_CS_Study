/*
17-4 2���� �����Ϳ� 2���� �迭
	���� ���� 1���� �����͸� ���� �Ҵ��ϱ�
		short *p[100] // short* ������ 1���� �����͸� 100�� ������
			���� ����ų� ������ ������ ��� �ٽ� �������ؾ� �Ѵ�.
	
	���� ���� 1���� �����͸� ���� �Ҵ��ϱ�	
		2���� �����Ͱ� ����Ű�� ù ��° ��󿡴� 1���� �������� �ּҰ��� �����ؼ� ���� ���� ���� ����.
			������ 4����Ʈ ũ���� �޸𸮿� �ּ� ���� �����ؼ� ����ص� �ȴ�.
			�׷��� malloc �Լ��� 4byte �޸𸮸� �Ҵ��Ͽ� 2���� �����Ϳ� �����ϸ�, �� �޸𸮸� 1���� ������ó�� Ȱ�� ʦ
				short **pp;
				pp = (short **)malloc(sizeof(short *)); // sizeof(short *) = 4
			malloc �Լ��� �Ű������� ���� �Ҵ��� �޸��� ũ�⸦ ���� ������ ����Ӹ� �ƴ϶� ������ ��� ʦ
			���� short * ������ 1���� �����͸� n�� �Ҵ� ����, *(pp+0) ~ *(pp+ n-1)���� ��� ʦ
				int n;
				short **pp;
				scanf_s("%d", &n); // ����� 1���� �������� ������ ����ڿ��� ����
				pp = (short **)malloc(sizeof(short *) * n); // short * ������ 1���� ������ n�� �Ҵ�
		�̷��� 2���� �����Ϳ� malloc �Լ��� ����ϸ� �迭���� �ڵ�� ����������.
			������ ���α׷� ���� �߿� 1���� �������� ������ �ٲ� �ҽ� ������ �ٽ� �������� �ʿ䰡 ����.
			���� ����ڰ� �޸𸮸� ����ϰ� ���� ũ�⸸ŭ ���� ʦ -> �޸� ȿ���� ��
	
	2���� �迭�� ���� �޸� �Ҵ�	
		2���� �迭�� �޸𸮸� �Ҵ��ϴ� ���
			unsigned char count[3][4]; // 3���� �׷쿡 �ִ� 4���� ����� ������		
*/

// 2���� �迭�� ���ɺ� ��������Ű�� Ƚ�� �����ϱ�
#include <stdio.h>
main()
{
	unsigned char limit_table[3] = { 4, 2, 3 };
	unsigned char count[3][4];
	int member, temp, sum, age;
	// ���ɺ��� ���� ����Ű�� Ƚ���� �Է¹���
	for (age = 0; age < 3; age++)
	{
		// �� ������ ���� ����Ű�� Ƚ�� ��� �����
		printf("\n%d0�� ������ ���� ����Ű�� Ƚ��\n", age + 2);
		for ( member = 0; member < limit_table[age]; member++) // �ش� ���� ����� ������� �Է¹���
		{
			printf("%dth : ", member + 1); // 1th, 2th .. ������ �Է¹���
			scanf_s("%d", &temp); 
			// scanf_s�� unsigned char ������ ���� ������ ���� �� ����
				// temp �������� ������ �Է¹��� �Ŀ� count ��ҿ� ����
			count[age][member] = (unsigned char)temp;
		}
	}

	printf("\n\n���ɺ� ��� ���� ����Ű�� Ƚ��");
	// ���ɺ��� �Էµ� Ƚ���� �ջ��Ͽ� ��հ��� �����
	for (age = 0; age < 3; age++)
	{
		sum = 0;
		printf("%d0�� : ", age + 2);
		// �ش� ���ɿ� �Ҽӵ� ������� Ƚ���� �ջ���
		for ( member = 0; member < limit_table[age]; member++)
		{
			sum += count[age][member];
		}
		// �ջ� ���� �ο����� ����� ����� ��
		printf("%5.2f\n", (double)sum / limit_table[age]);
	}
}
// ���� �� �������� ���Ե� �ο����� ���Ѵٸ�??