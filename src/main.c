#include <stdio.h>

int main()
{
    int x1,x2,x3,x4,yy1,yy2,zz1,zz2;
    
    //Сторони ромба
    x1 = 10;
    x2 = 10;
    x3 = 10;
    x4 = 10;
    
    //Кути ромба
    yy1 = 30;
    yy2 = 30;
    zz1 = 20;
    zz2 = 20;
    
    if(yy1 > 90 || yy2 > 90 || zz1 > 90 || zz2 > 90)
    {
       printf("Такого ромба не існує");
    }
    else if(yy1 == zz1 || yy1 == zz2 || yy2 == zz1 || yy2 == zz2)
    {
       printf("Такого ромба не існує");
    }
    else if(yy1 == 90 && yy2 == 90 && zz1 == 90 && zz2 == 90 )
    {
       printf("Такого ромба не існує");
    }
    
    
    if(x1 == x2 && x1 == x3 && x1 == x4 && yy1 == yy2 && zz1 == zz2)
    {
        printf("Такий ромб існує");
    }
    else
    {
        printf("Такого ромба не існує");
    }
    
    
    

    return 0;
}
