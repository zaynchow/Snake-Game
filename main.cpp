#include <iostream>
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
    fruitX = rand() % width;
    fruitX = rand() % height;
    score = 0;

}

void Draw(){
    system("clear");


    for (int j = 0; j < height ; j++){
        for (int k = 0; k < width; k++){
            if (j == 0 || j == height-1) {
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

void Input(){}

void Logic(){}


int main() {
    // Setup();
    Draw();

    // while(!gameOver){
    //     Draw();
    //     Input();
    //     Logic();

    // }
 
    return 0;
}