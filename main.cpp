#include <iostream>
#include <ncurses.h>

using namespace std;


bool gameOver;

int height =  10;
int width = height + 2;
int pos_x, pos_y, fruitX, fruitY, score;
enum direction {STOP = 0 , LEFT, RIGHT, UP,DOWN};
direction dir;




void Setup(){
    gameOver= false;
    dir = STOP;
    pos_x = width/2;
    pos_y = height/2;
    generateNewFruit();
    score = 0;

}

void Draw(){
 

    for (int j = 0; j < height ; j++){
        for (int k = 0; k < width; k++){
            if (j == pos_y && k == pos_x){
                mvprintw(j,k,"O");
              
            } else if (j == fruitY && k == fruitX){
                mvprintw(j,k,"F");
          
            }

             else if (j == 0 || j == height-1) {
                mvprintw(j,k,"#");
                
                  
                
            }
            else if (k==0 || k == width - 1){
               mvprintw(j,k,"#");
                   
                
                  
            }
            else {
                mvprintw(j,k," ");
                    
                
            }
        }
    }
    refresh();
  
}

void Input(){
        noecho();
        switch (getch()){

            case 97:
                dir = LEFT;
                cbreak();
                break;
            case 100:
                dir = RIGHT;
                cbreak();
                break;
            case 119:
                dir = UP;
                cbreak();
                break;
            case 115:
                dir = DOWN;
  
                cbreak();
                break;
            case 71:
                gameOver = true;
       
                  cbreak();
                break;
            
        }
  

    }
   



void Logic(){
    switch (dir){
    case LEFT:
        if(pos_x-1>0){
            pos_x--;
        }
        break;
    case RIGHT:
        if(pos_x+1<width-1){
            pos_x++;
        }
     
        break;
    case UP:
        if(pos_y-1>0){
            pos_y--;
        }
        break;
    case DOWN:
        if(pos_y+1<height-1){
            pos_y++;
        }
        break;

    }

    //Checks if the current snake head coordinate is equal to the fruit coordinate, then eats the fruit
    if (pos_x ==fruitX && pos_y==fruitY){
        score++;
        generateNewFruit();
    }
}


void generateNewFruit(){
    fruitX = rand() % (width - 1);
    fruitY = rand() % (height - 1);
}


int main() {
    initscr();
    Setup();
    Draw();

    while(!gameOver){

   
        Input();
        Logic();
        Draw();

    }
 

 
    endwin();


 

    return 0;
}