#include <kipr/botball.h>
int lm=3;
int rm=0;
int ls=100;
int rs=100;
void move(int l, int r, int t){
    motor(lm, l);
    motor(rm, r);
    msleep(t);
}
int main()
{
    printf("You thought it was wallaby but it was ME DIO!\n");
    move(ls,rs,3000);
    move(ls,-rs,100);
    move(ls,rs,2000);
    move(-ls,rs,500);
    move(ls,rs,1000);
    while(digital(0)==1){
        move(-ls,-rs,1000);
    }
    
    
    return 0;
}
