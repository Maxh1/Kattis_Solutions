#include <iostream>

using namespace std;

int main() {
  int x, y, z;
  cin >> x;
  
 
    for(int i= 0; i<x; i++){
        cin>> y;
    if(y%400>0){
     z=(y/400)+1;}
    else{
        z=y/400;}
     
     cout << z << endl;
    }
        return 0;
}
