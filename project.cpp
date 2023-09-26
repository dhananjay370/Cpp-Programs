#include <iostream>
using namespace std;
int main()
{
    int comp;
    char you;
    srand(time(0));
    comp = rand() % 3 + 1;
    if (comp == 1)
    {
        comp = 's';
    }
    else if (comp == 2)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }
    printf("Enter s(snake), w(water) and g(gun) : ");
    scanf("%c", &you);

    if (you == comp)
    {
        printf("Draw!\nComputer choose %c\nYou choose \t%c", comp, you);
    }
    else if (you == 's' && comp == 'w')
    {
        printf("You Win!\nComputer choose %c\nYou choose \t%c", comp, you);
    }
    else if (you == 'w' && comp == 's')
    {
        printf("You Lose!\nComputer choose %c\nYou choose \t%c", comp, you);
    }
    else if (you == 'g' && comp == 's')
    {
        printf("You Lose!\nComputer choose %c\nYou choose \t%c", comp, you);
    }
    else if (you == 's' && comp == 'g')
    {
        printf("You Lose!\nComputer choose %c\nYou choose \t%c", comp, you);
    }
    else if (you == 'w' && comp == 'g')
    {
        printf("You Win!\nComputer choose %c\nYou choose \t%c", comp, you);
    }
    else if (you == 'g' && comp == 'w')
    {
        printf("You Lose!\nComputer choose %c\nYou choose \t%c", comp, you);
    }
}