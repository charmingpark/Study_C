#include <stdio.h>
// int main() {
//   int calc, x=40, y=60 , z=80;
//   calc = x < y ? y++ : --z;
//   printf("%d//%d//%d", calc, y, z);
//   return 0;
//   // 0 이 찍히지는 않음.
//   }

// int main() {
//   int num1 = 16, num2 = 80;
//   printf("%d", num1 > num2 ? num1 & num2 : num1^ num2);
// }

// int main() {
//   int num;
//   num = 0b1001;
//   printf("%d", num);
// }

// int main() {
//   char str[2];

//   scanf("%s", str);
//   printf("%s", str);
// }

// int main() {
//   int num;
//   num = 1640;
//   printf("%d", num >> 3);
// }

// int main() {
//   int a = 15;
//   printf("%o", a);
//   return 0;
// }

// int main(void) {
//   int i = 200;
//   float a = 123.6f;

//   i = (int)a;
//   printf("%d, %8.2f", i, a);
//   // %3.2f 소숫점까지 모든 자리가 3자리 하지만 정수자리에서 초과시 무시하고 다 출력, 2자리 소수점, 반올림.
//   // i에 %d이 적용되고, a에 %3.2f 이 적용되서 출력됨
//   // 앞에 %8.2f 은 8자리로 출력 (스페이스키의 띄어쓰기가 남은 5자리만큼 생김), 2자리 소수점
//   // 만약 %-8.2f로 출력하면 빈공간 상관없이 왼쪽으로 정렬되서 평범하게 나옴.
//   return 0;
// }

// 부동소숫점을 표현하는 double 이 무조건 정확하지는 않아 오차가 발생하여 flase 가 뜨는 형태이다.
//
// 이 문제는 부동 소수점 연산에서 발생할 수 있는 오차로 인한 것입니다. double 타입은 8바이트(64비트) 부동 소수점 숫자를 표현하지만,
// 모든 실수를 정확하게 표현할 수 있는 것은 아닙니다. 특히, 0.01과 같은 숫자는 이진수로 정확하게 표현할 수 없어서 근사값으로 저장됩니다.
// int main() {
//   double num = 0.01;
//   // double 은 8bit.
//   double res = 0;
//   int cnt = 0;
//   while (cnt < 100) {
//     res += num;
//     //1.000000//0.010000 까지 찍는다.
//     printf("%f//%f\n", res, num);
//     cnt++;
//   }
//   printf(res == 1 ? "True" : "False");
//   return 0;
// }

// int main() {
//   int num = 1;
//   for (int i = 1; ;i++){
//     num *= i;
//     printf("%d//%d\n", num, i);

//     if(i > 5)
//     break;
//   }
//   printf("%d", num);
// }

// #define N 100
// const 같은 역할임.
// int main() {
//   int i = 1;
//   int cnt = 0;

//   while(i <= N){
//     if ((i % 3) == 0 && (i % 7) == 0){
//       cnt++;
//       printf("%d x %d = %d*%d*\n",i, cnt, cnt, i);
//       //*는 연산을 해주는게 아니라, 그대로 프린트 해 줌.
//     }
//     i++;
//   }
// }

// int main()
// {
//   int n1 = 172;
//   int n2 = 387;

//   while (n1 != n2)
//   {
//     printf("%s // %d // %d \n", n1 != n2 ? "True" : "False", n1, n2);

//     if (n1 > n2)
//     {
//       n1 -= n2;
//     }
//     else
//     {
//       n2 -= n1;
//     }
//   }
//     printf("%d\n", n1);
//   return 0;
// }

// int main() {
//   char a[] = {'1','B','C','D','E'};
//   char *p;

//   // p는 포인터 변수 : 주소값을 참조한다.

//   p = &a[2];

//   // &는 옆의 배열에 주소를 준다.
//   // 2번째 자리. (C)

//   printf("%c//%c", *p, *(p-2));
//   // c "1" -> 주소값에 할당값과 2-2를 한 주소값
//   return 0;
// }

// int main() {
//   int i, a[5], temp;
//   for (i = 0; i < 5; i++) {
//     a[i] = i + 1;
//     printf("%d ", a[i]);
//   }
//   printf("\n");
//   temp = a[0];
//   for (i = 0; i < 4; i++) {
//     a[i] = a[i + 1];
//   }
//   a[4] = temp;
//   for (i = 0; i < 5; i++) {
//     printf("%d ", a[i]);
//   }
// }
// 배열의 자리를 혼동하지 말라.

// int main() {
//   int a[5] = { 3, 2, 5, 1, 4};
//   int temp, i;
//   for (i = 0; i < 4; i++) {
//     temp = a[i];
//     printf("1{%d,%d,%d,%d,%d,%d} [%d] \n", a[0],a[1],a[2],a[3],a[4],a[5], temp);

//     a[i] = a[i + 1];
//     a[i + 1] = temp;
//     printf("2{%d,%d,%d,%d,%d,%d}\n", a[0],a[1],a[2],a[3],a[4],a[5]);
//     // printf("*%d* ", temp);

//   }
//   for (i = 0; i < 5; i++) {
//     printf("%d ", a[i]);
//   }
// }

// 문제와 함께 주어진 단어는 'Korea50'임.
// int main()
// {
//   int len = 0;
//   char str[50];
//   gets(str);
//   for (int i = 0; str[i]; i++)
//   {
//     len += 1;
//   printf("%d", len);
//   }
// }

// int main()
// {
//   int i = 0, sum = 0;
//   int a[10] = {47, 104, 30, 65, 46, 80, 51, 106, 61, 62};
//   for (i = 0; i < 10; i += 2)
//   {
//     printf("i = %d, a[i]= %d\n", i, a[i]);
//     sum = sum += a[i];
//     printf("%d\n", sum);
//   }
// }