#include<stdio.h>
#include <raylib.h>
#include<math.h>

#define BACKGROUND_COLOR (Color){186,149,127}
#define CAR_COLOR BLACK
#define ROTATION_SPEED 80





int main(){
int width=1300;
int height=1000;

    InitWindow(width, height, "Racer");
    SetTargetFPS(60);
    
    int car_width=60;
    int car_height=100;
    float car_x=width/2-car_width/2;
    float car_y=height/2-car_height/2;
   float car_speed=0;
    float car_max_speed=1000;
    int car_direction=-1;
    float car_rotation=0;
    float car_speedup=10;
    float car_slowdown=20;

    

    
    while (!WindowShouldClose())
    
    {
        float dt=GetFrameTime();
        BeginDrawing();

        ClearBackground(BACKGROUND_COLOR);
        if (IsKeyDown(KEY_UP)){
            car_direction=-1;
            car_speed +=car_speedup*dt;
            if(car_speed>car_max_speed){
                car_speed=car_max_speed;
            }
        }else if (IsKeyDown(KEY_DOWN)){
            car_direction=1;
            car_speed -=car_speedup*dt;
            if(car_speed>car_max_speed){
                car_speed=car_max_speed;
            }
        }
            else {
            car_speed +=car_slowdown*dt*car_direction;
            if (car_direction==-1 && car_speed<0){
                car_speed=0;
            }else{if (car_direction==1 && car_speed>0){
                car_speed=0;
            }

            }
        }
        if(IsKeyDown(KEY_LEFT)){
            car_rotation -=ROTATION_SPEED*dt;

        }else if (IsKeyDown(KEY_RIGHT)){
            car_rotation+=ROTATION_SPEED*dt;
            printf("Rotation:%f\n",car_rotation);
        }
        if (car_rotation>=360){
            car_rotation=0;
        }
        float radians=PI*car_rotation/180;
        float x_move=car_speed*cosf(radians);
        float y_move= car_speed*sinf(radians);
        
        car_x-=x_move;
        car_y-=y_move;
        Rectangle car_rec={
            .x=car_x,
            .y=car_y,
            .width=car_width,
            .height=car_height,
        };
        Vector2 car_origin ={
            .x=car_width/2,
            .y=car_height/2,
        };
        DrawRectanglePro(car_rec,car_origin, car_rotation, CAR_COLOR );
       

       

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
