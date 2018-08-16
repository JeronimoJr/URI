#include <stdio.h>
#include <string.h>

int main(){
    char tuite[800];

    gets(tuite);
    if(strlen(tuite)<= 140)
           printf("TWEET\n");
    else
        printf("MUTE\n");

    system("pause");
    return 0;
}
