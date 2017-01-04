// simple program to swap the values of two integers

#include<iostream>
using namespace std;

int box1,box2,swapBox;

int main(){

   cout << "Give me 2 numbers and i will switch them around!"<<endl;
   cout<< "Please,enter the numbers..([ENTER] after each)"<<endl;
   cin >> box1>>box2;

   cout << "Values before the swap: "<<endl;
   cout << "First: "<<box1<<endl;
   cout << "Second: "<<box2<<endl;
   swapBox = box1;
   box1 = box2;
   box2 = swapBox;

   cout << "Values after swap: "<<endl;
   cout << "First: "<<box1<<endl;
   cout << "Second: "<<box2<<endl;

   cout << "That's it! Thanks,for being a sport!"<<endl;
    return 0;
    }
