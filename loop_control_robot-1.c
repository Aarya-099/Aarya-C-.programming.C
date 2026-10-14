#include <stdio.h>

/*
   C Programming Examples - Loop Control
   Robot / Motor related examples
*/

/* 1. FOR LOOP - Robot arm position */
void for_position(void)
{
    int position;

    for (position = 0; position <= 100; position += 10)
    {
        printf("Robot arm position: %d degrees\n", position);
    }
}

/* 2. DO-WHILE LOOP - Motor angle */
void do_while_angle(void)
{
    int angle = 0;

    do
    {
        printf("Motor angle = %d degrees\n", angle);
        angle = angle + 30;
    } while (angle <= 180);
}

/* 3. DO-WHILE LOOP - Motor speed */
void do_while_speed(void)
{
    int speed = 0;

    do
    {
        printf("Motor speed = %d\n", speed);
        speed = speed + 20;
    } while (speed <= 100);
}

/* 4. FOR LOOP - Motor steps */
void for_steps(void)
{
    int i;

    for (i = 1; i <= 5; i++)
    {
        printf("Motor step %d\n", i);
    }
}

/* 5. BREAK - Stop the loop when i becomes 5 */
void break_example(void)
{
    int i;

    for (i = 1; i <= 100; i++)
    {
        if (i == 5)
        {
            break;
        }

        printf("%d\n", i);
    }
}

/* 6. CONTINUE - Skip iteration 3 */
void continue_example(void)
{
    int i;

    for (i = 1; i <= 5; i++)
    {
        if (i == 3)
        {
            continue;
        }

        printf("%d\n", i);
    }
}

/* 7. GOTO - Repeat until i becomes 5 */
void goto_example(void)
{
    int i = 1;

start:
    printf("%d\n", i);
    i++;

    if (i <= 5)
    {
        goto start;
    }
}

int main(void)
{
    int choice;

    printf("C LOOP CONTROL - ROBOT/MOTOR EXAMPLES\n");
    printf("1. For loop - Robot position\n");
    printf("2. Do-while - Motor angle\n");
    printf("3. Do-while - Motor speed\n");
    printf("4. For loop - Motor steps\n");
    printf("5. Break statement\n");
    printf("6. Continue statement\n");
    printf("7. Goto statement\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("\n");

    switch (choice)
    {
        case 1:
            for_position();
            break;

        case 2:
            do_while_angle();
            break;

        case 3:
            do_while_speed();
            break;

        case 4:
            for_steps();
            break;

        case 5:
            break_example();
            break;

        case 6:
            continue_example();
            break;

        case 7:
            goto_example();
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
