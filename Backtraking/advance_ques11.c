#include <stdio.h>

struct Start_time
{
    int hour;
    int min;
    int sec;
};

struct End_time
{
    int hour;
    int min;
    int sec;
};

int main()
{
    /// hour should b greater than -1 and less than 24
    /// min should be greater than -1 and less than 60
    /// sec should be greater than -1 and less than 60

    printf("Enter start Time\n");
    int a, b, c;
    int d, e, f;

    printf("Enter hours, minutes and seconds respectively:");
    scanf("%d %d %d", &a, &b, &c);

    printf("\nEnter end Time\n");
    printf("Enter hours, minutes and seconds respectively:");
    scanf("%d %d %d", &d, &e, &f);

    struct Start_time one;
    one.hour = a;
    one.min = b;
    one.sec = c;

    struct End_time two;
    two.hour = d;
    two.min = e;
    two.sec = f;
    /// TIME DIFFERENCE: 12:34:55 - 8:12:15 = 4:22:40

    printf("\nTIME DIFFERENCE: ");
    printf("%d:%d:%d ", two.hour, two.min, two.sec);
    printf(" - ");
    printf("%d:%d:%d ", one.hour, one.min, one.sec);

    int aa = two.hour - one.hour;
    int bb = two.min - one.min;
    int cc = two.sec - one.sec;

    if (aa < 0)
    {
        aa = -1 * aa;
    }
    if (bb < 0)
    {
        bb = -1 * bb;
    }
    if (cc < 0)
    {
        cc = -1 * cc;
    }
    printf(" = %d:%d:%d\n", aa, bb, cc);

    return 0;
}

