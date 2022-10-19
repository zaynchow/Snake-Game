#include <iostream>
#include "conio.h"
using namespace std;


bool gameOver;

int height =  5;
int width = height + 2;
int pos_x, pos_y, fruitX, fruitY, score;
enum direction {STOP = 0 , LEFT, RIGHT, UP,DOWN};
direction dir;



void Setup(){
    gameOver= false;
    dir = STOP;
    pos_x = width/2;
    pos_y = height/2;
    fruitX = rand() % (width - 1);
    fruitY = rand() % (height - 1);
    score = 0;

}

void Draw(){
    system("clear");

    for (int j = 0; j < height ; j++){
        for (int k = 0; k < width; k++){
            if (j == pos_y && k == pos_x){
                cout<<"O";
            } else if (j == fruitY && k == fruitX){
                cout<<"F";
            }

             else if (j == 0 || j == height-1) {
                cout<<"#";
            }
            else if (k==0 || k == width - 1){
                cout<<"#";
            }
            else {
                cout<<" ";
            }
        }
        cout<<endl;
    }




}

void Input(){
    if (_kbhit()){
        switch (_getch()){
            case 'a':
                dir = LEFT;
                break;
            case 'd':
                dir = RIGHT;
                break;
            case 'w':
                dir = UP;
                break;
            case 's':
                dir = DOWN;
                break;
            case 'q':
                gameOver = true;
                break;
            
        }
    }
}

void Logic(){}


int main() {
    Setup();
    Draw();

    while(!gameOver){
        Draw();
        Input();
        Logic();

    }

    return 0;
}