#include <stdio.h>
main()
{
	short student[20];

	student[1] = 10; // 배열의 두 번째 요소(0부터 시작)에 10을 대입한다.
	printf("%d\n", student[1]);
}
// [] 안에 상수 넣지 않고 변수 넣고 선언하면 변수에 저장된 값에 따라 student 변수의 크기가 달라짐
// -> 컴파일러가 컴파일하는 시점에 student 변수의 크기를 결정할 수 없기 때문에 오류 발생
// 변수가 어떤 값을 갖고 있는지는 프로그램이 실행될 때 필요한 것이지, 컴파일 작업과는 상관이 없기 때문에
// 컴파일 시점에서 컴파일러는 변수에 어떤 값이 들어 있는지 몰라서 에러 나는 것

// 배열을 선언할 때와는 달리, 배열의 특정 요소에 값을 대입할 때에는 [] 안에 변수 사용 가능(배열의 크기를 결정하지 않으므로)
// 변수 사용 가능 -> 제어문 사용 가능