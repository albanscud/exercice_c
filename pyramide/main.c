#include <stdio.h>
int main()
{
    int basePyramide, spacePyramide, stepPyramide = 0;
    printf("Choisir la base de la pyramide : ");
    scanf("%d", &basePyramide);
    spacePyramide = basePyramide/2;
    if(basePyramide%2==0)
    {
        stepPyramide-=1;
    }
    while(basePyramide>=stepPyramide)
    {
        for(int y=spacePyramide; y>0; y--)
        {
            printf(" ");
        }
        for(int i=0; i<=stepPyramide; i++)
        {
            printf("*");
        }
        spacePyramide-=1;
        stepPyramide+=2;
        printf("\n");
    }
    return 0;
}