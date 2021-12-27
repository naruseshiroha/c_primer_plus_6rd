#include <stdio.h>

#define BASE_SALARY 1000
#define ADD_SALARY 1500

#define BASE_TIME 40

#define SALAY1 300
#define SALAY2 450

#define LEVEL1 0.15
#define LEVEL2 0.2
#define LEVEL3 0.25

#define TAXI1 (SALAY1 * LEVEL1)
#define TAXI2 (TAXI1 + ((SALAY2 - SALAY1) * LEVEL2))

int main(void)
{
    unsigned int time;
    double salary, taxi;

    printf("Please enter your work time: ");
    scanf("%d", &time);

    if (time <= BASE_TIME)
        salary = BASE_SALARY * time;
    else
        salary = (BASE_SALARY * BASE_TIME) + (time - BASE_TIME) * ADD_SALARY;

    if (salary <= SALAY1)
        taxi = salary * LEVEL1;
    else if (salary <= SALAY2)
        taxi = TAXI1 + (salary - SALAY1) * LEVEL1;
    else
        taxi = TAXI2 + (salary - SALAY2) * LEVEL3;

    printf("Salary is %.2f, taxi is %.2f, gross is %.2f\n", salary, taxi, salary - taxi);

    return 0;
}