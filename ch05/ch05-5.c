// **********************************************
// 제 목 : 함수에서의 Call-By-Value와 Call-By-Reference의 차이
// 날 짜 : 2026년 9월 22일
// 작성자 : 2600065 문성준
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>

int HundredByValue(int num);
void HundredByReference(int* num);

int main(void)
{
    int num;
    int original;

    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    original = num;

    // Call-by-value 방식
    num = HundredByValue(num);
    printf("Call-by-value 결과: %d\n", num);

    // 동일한 값으로 비교하기 위해 원래 값으로 복원
    num = original;

    // Call-by-reference 방식
    HundredByReference(&num);
    printf("Call-by-reference 결과: %d\n", num);

    return 0;
}

int HundredByValue(int num)
{
    return num * 100;
}

void HundredByReference(int* num)
{
    *num = *num * 100;
}
