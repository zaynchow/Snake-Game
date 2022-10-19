#include <iostream>
using namespace std;

//Properties

bool gameOver;
int width = 20;
int height =  20;
int pos_x, pos_y, fruitX, fruitY, score;
enum direction {STOP = 0 , LEFT, RIGHT, UP,DOWN};
direction dir;



void Setup(){
    gameOver= false;
    dir = STOP;
    pos_x = width/2;
    pos_y = height/2;
    fruitX = rand() % width;
    fruitX = rand() % height;
    score = 0;

}

void Draw(){
    system("clear");
    // for (int i = 0; i < width ; i++){

    // }

}

void Input(){}

void Logic(){}


int main() {
    Setup();
    while(!gameOver){
        Draw();
        Input();
        Logic();

    }
 
    return 0;
}