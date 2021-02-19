#include <iostream>
using namespace std;

int main(){
    //declare an array
    int ROW = 9;
    int data[ROW] = {3,49,1,6,33,13,9,4,6};
    int key, x, i;

    //prompt to search for key
    cout << "What are you searching for?" << endl;
    cin >> key;

    for(i = 0; i<ROW; i++){
        if (key == data[i] and i < ROW){
            x =+ 1;
            break;
        } else {
            x == 0;
        }
    }
    if(x == 1){
        cout << "found in index " << data[i] << endl;
    } else {
        cout << "Not found" << endl;
    }
}