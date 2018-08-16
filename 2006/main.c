#include <stdio.h>

int main(){
    int cha, a,b,c,d,e,win;
    win = 0;

    scanf("%d", &cha);
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    if(a == cha)
        win++;
    else if(b == cha)
        win++;
   else if(c == cha)
         win++;
    else if(d == cha)
        win++;
    else if(e == cha)
        win++;

    printf("%d\n", win);
   system("pause");
    return 0;
}
