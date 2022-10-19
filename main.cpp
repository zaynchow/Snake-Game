#include <iostream>
using namespace std;

//Properties

bool gameOver;
int width = 20;
int height =  20;
int pos_x, pos_y, fruitX, fruitY;
enum direction {STOP = 0 , LEFT, RIGHT, UP,DOWN};
direction dir;



void Setup(){
    // gameOver= false;
    // dir = STOP;
    // pos_x = width/2;
    // pos_y


}

void Draw(){}

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