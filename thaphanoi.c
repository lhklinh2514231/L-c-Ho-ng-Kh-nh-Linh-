#include <stdio.h>
void thap(int sodia, char x, char y,char z);
void thap (int sodia, char x, char y, char z){
    if (sodia>0){
        if(sodia==1){
            printf ("%c->%c\n",x,y);
            return 0;
        }
        thap(sodia-1,x,y,z);
        thap (1,x,z,y);
        thap(sodia-1,z,x,y);
    }
}
int main(){
    char x='A', y='B', z='C';
    int sodia;
    scanf ("%d",&sodia);
    thap (sodia,x,y,z);
}