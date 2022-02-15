#include <stdio.h>
struct complex_1
{
  float a;
  float b;
};
struct complex_2
{
  float a;
  float b;
};

void func(struct complex_1 A, struct complex_2 B)
{
  printf("sum = ");
  printf("%.1f + ", B.a + A.a);
  printf("(%.1fi\n)", B.b + A.b);
}

int main()
{
  struct complex_1 e1;
  printf("For 1st complex number\n");
  printf("Enter real and imaginary part respectively:\n");
  scanf("%f", &e1.a);
  scanf("%f", &e1.b);

  struct complex_2 e2;
  printf("\nFor 2nd complex number\n");
  printf("Enter real and imaginary part respectively:\n");
  scanf("%f", &e2.a);
  scanf("%f", &e2.b);

  func(e1, e2);

  return 0;
}

