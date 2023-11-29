/*==========================================================

 Title:       Assignment 5 - Sum/Difference with Pointer
 Course:      CIS 2252
 Author:      <Mohammed Tanvvir>
 Date:        <08 /1 /23 >
 Description: This program ....

 ==========================================================
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#include <vector>
void Modify(int *x, int *y) {
    *x = *x + *y; //update x to store the sum of the original x and y
    *y = *x - 2 * *y;
    if (*y < 0) {
        *y = *y * -1; //updates y to store dif between original x and y
    }
}

int main() {
    //DO NOT MODIFY ANYTHING IN THE main() !!!
    
    int x, y;
    
    int *ptr_x = &x;
    int *ptr_y = &y;
    
    cin >> x;
    cin >> y;
    
    Modify(ptr_x, ptr_y);
    
    cout << x << endl;
    cout << y;
                 
    return 0;
}
