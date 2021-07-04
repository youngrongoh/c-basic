#include <stdio.h>

int main(void)
{
  /* 
  블럭 
  주석 
  */
  // 인라인 주석

  /* 정수형 변수
  int age = 12;
  printf("%d\n", age); // %d 정수형 값에 대한 플레이스홀더
  age = 13;
  printf("%d\n", age);
   */

  // 실수형 변수
  // 표시할 소수점 이하 자릿수 지정하면 지정한 자릿수 바로 아래에서 반올림, 5는 버림
  float f = 46.56;
  printf("%.1f\n", f); // 소수점 아래 1번째 자리까지 표시

  double d = 4.428;
  printf("%.2lf\n", d); // 소수점 아래 2번째 자리까지 표시
  return 0;
}