/*
결론부터 얘기하면, 셋이 아무 차이도 없습니다.
그러나 내부적으로는 큰 차이가 있지요.

함수 정의 앞에 붙는 데이터형은 함수의 리턴값의 데이터형입니다.
int main() 하면 main() 함수가 종료할때 정수형 값을 리턴하겠다는 뜻이고,
void main() 하면 main() 함수가 종료할때 아무 값도 리턴하지 않겠다는 뜻이며,
main() 하면 void main() 과 같습니다.

main() 함수는 프로그램의 엔트리포인트로서, 운영체제가 실행시켜주는 함수입니다.
따라서 main() 함수의 리턴값은 운영체제가 받아보게되죠.
운영체제는 프로그램이 종료할때 main() 함수의 리턴값을 받아보고 프로그램이 왜 종료되었는가를 판단합니다.
보통의 경우, main() 함수가 0 을 리턴하면 프로그램이 정상적으로 실행을 마치고 종료한것으로 간주하고, 0 이외의 값을 리턴할 경우 비정상적으로 종료된것으로 간주합니다.

그러나, 운영체제가 프로그램의 종료사유를 아는것이 사용자 입장에서는 아무 의미가 없는 동작입니다.
그래서 결론적으로, main() 함수가 어떤 값을 리턴하는지는 운영체제에게만 중요할 뿐, 사용자에게는 전혀 중요하지 않습니다.
그러니, int main() 든 void main() 이든 main() 이든 사용자 입장에서는 아무 차이점이 없고, 다만 운영체제의 입장에서는 약간의 의미가 있을수는 있습니다.

참고로, C언어 표준이 제시하는 가장 이상적인 main() 함수의 정의문은 이렇습니다.
int main( int argc, char *argv[], char *env[] )
*/

// 무한 루프 형식의 for 반복문을 통해 1부터 5까지 더하기
#include <stdio.h>
main()
{
	int sum = 0, num = 1; //시작 조건
	for(;;) //무한루프를 만드는 for 반복문
	// 합산하기 전 sum값을 사용하여 'num + sum = ' 이라고 출력함
	{
		printf("num(%d) + sum(%d) = ", num, sum);
		sum = sum + num; // sum에 num을 더함
		printf("%d\n", sum);//더한 후 sum값을 출력하고 줄 바꿈
		num++; // 조건 변화 수식
		if (num > 5) break; //종결 조건 : num > 5가 참이면 반복문 종료
		// if 한 줄로도 가능
	}
	printf("\nResult : num = %d sum = %d\n", num, sum);
}
/*보통 무한 루프는 시작과 종결을 수치로 결정할 수 없는 상황에 사용
	ex) 사용자가 키보드를 이용하여 특정 키를 누르면 반복을 종료
	e.g. 파일이나 외부 장치에서 들어오는 값을 체크하여 반복 중단

*/