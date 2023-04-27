#include "../drivers/screen.h"
#include "../lib/string.h"

int gI, gJ, gHeight = 20, gWidth = 20;
int gGameover, gScore;
int gX, gY, gFruitx, gFruity, gFlag;
  

void init()
{
    gGameover = 0;   
}

void draw() 
{

}

void input()
{

}

void game()
{
    
}

void snake()
{
    int m, n;
  
    setup();
  
    while (!gameover) {
        draw();
        input();
        logic();
    }
}
 