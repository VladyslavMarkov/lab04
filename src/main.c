#include <stdio.h>

int main()
{   
    //Сторони ромба
    int a,b,c,d,res;
    
    a = 10;
    b = 10;
    c = 10;
    d = 10;
    res = 0;

    //Перевіряємо рівні сторони ромба чи ні
    if(a == b && a == c && a == d && res == 0)
    {
     //Якщо сторони рівні, то привласнюємо значення 1 змінній res
      res = 1;
    }
               
    return 0;
}
