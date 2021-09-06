#include <iostream>

using namespace std;

int main()
{
    // define the canvas dimensions
    int canvas[2] {100,100};

    // define the point dimensions that it will check
    int point[2] {25,25};

    // test demensions for rectangles
    int rectangles[5][4] {{20,30,60,70}, // rectangle1
                          {50,80,90,85}, // rectangle2
                          {20,20,30,30}, // rectangle3
                          {10,15,35,40}, // rectangle4
                          {0,10,40,65}}; // rectangle5

    // how many rectangles the point in
    int rectangle_count=0;

    for(int i=0;i<5;i++){
        if(point[0]>rectangles[i][0] && point[0]<rectangles[i][2]){
            if(point[1]>rectangles[i][1] && point[1]<rectangles[i][3]){
                rectangle_count += 1;
            }
        }
    }

    // Expected output is 3
    cout << "Rectangle count that the point inside: " << rectangle_count << endl;

    return 0;
}