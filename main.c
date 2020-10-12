/*
       Name         : Venkata Sreeram Kumar Gorthy
       Employee ID  : 214865
       E.mail       : venkatasreg@kpit.com
       Location     : Bangalore
*/
#include<stdio.h>
// Void Functions. A void function cannot return any values. But we can use the return statement.
void engine_off();
void engine_idle();
void engine_gear1();
void engine_gear2();
void engine_gear3();
void engine_reverse();

int main() // main() function is the entry point of any C program. It is the point at which execution of program is started.
{
    printf("        Happy Driving\n"); // "printf" is the name of one of the main C output functions, and stands for "print formatted".
    printf("#drivewithlove\t #lovetodrive\n");
    engine_off(); // Calling a function.
}
void engine_off() // Defining Function.
{
    int off_value; // int variable.
    printf("   \n");
    printf("Engine is Off.\n");
    printf("Enter \"1\" to Start Engine:\n");
    scanf("%d",&off_value);



    switch(off_value) // Switch statement in C tests the value of a variable and compares it with multiple cases.
    {
    case 1:
        engine_idle();
        break;
    case 0:
        engine_off();
        break;
    default:
        printf("Wrong Operation!\n");
        engine_off();
    }
 printf("\n");
}

void engine_idle()
{
    int idle_value;
    printf("Engine is in Neutral.\n");
    printf("Enter \"0\" for Engine Off.\nEnter \"1\" for Reverse Gear.\nEnter \"2\" to gear up to Gear 1.\n");
    scanf("%d",&idle_value);

    switch(idle_value) // Switch statement in C tests the value of a variable and compares it with multiple cases.
    {
    case 2:
        engine_gear1();
        break;
    case 1:
        engine_reverse();
        break;
    case 0:
        engine_off();
        break;
    default:
        printf("Wrong Operation!\n");
        engine_idle();
    }
    printf("\n");
}
void engine_gear1() // Defining Function.
{
    int gear1_value;
    printf("Engine is in Gear 1.\n");
    printf("Enter \"0\" to gear down to Neutral.\nEnter \"1\" to gear up to Gear 2.\n");
    scanf("%d",&gear1_value);

    switch(gear1_value) // Switch statement in C tests the value of a variable and compares it with multiple cases.
    {
        case 1:
            engine_gear2();
            break;
        case 0:
            engine_idle();
            break;
        default:
            printf("Wrong Operation!\n");
            engine_gear1();
    }
    printf("\n");
}
void engine_gear2() // Defining Function.
{
    int gear2_value;
    printf("Engine is in Gear 2.\n");
    printf("Enter \"0\" for Neutral.\nEnter \"1\" to gear down to Gear 1.\nEnter \"2\" to gear Up to Gear 3.\n");
    scanf("%d",&gear2_value);

    switch(gear2_value) // Switch statement in C tests the value of a variable and compares it with multiple cases.
    {
        case 2:
            engine_gear3();
            break;
        case 1:
            engine_gear1();
            break;
        case 0:
            engine_idle();
            break;
        default:
            printf("Wrong Operation!\n");
            engine_gear2();
    }
    printf("\n");
}
void engine_gear3() // Defining Function.
{
    int gear3_value;
    printf("Engine is in Gear 3.\n");
    printf("Enter \"0\" for Neutral.\nEnter \"1\" to gear down to Gear 2.\n");
    scanf("%d",&gear3_value);

    switch(gear3_value) // Switch statement in C tests the value of a variable and compares it with multiple cases.
    {
        case 1:
            engine_gear2();
            break;
        case 0:
            engine_idle();
            break;
        default:
            printf("Wrong Operation!\n");
            engine_gear3(); // Calling a function.
    }
    printf("\n");
}
void engine_reverse() // Defining Function.
{
    int reverse_value;
    printf("Engine is in Reverse Gear. \n");
    printf("Press \"0\" for Neutral :\n");
    scanf("%d",&reverse_value);

    switch(reverse_value) // Switch statement in C tests the value of a variable and compares it with multiple cases.
    {
    case 0:
        engine_idle(); // Calling a function.
        break;
    default:
        printf("Wrong Operation!\n");
        engine_reverse(); // Calling a function.
    }
    printf("\n");
}
