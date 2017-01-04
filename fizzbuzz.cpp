// simple fizzbuzz program in C++

#include<iostream>
using namespace std;

int count;

int main(){
  for(count=1;count<=100;count++){
     if(count % 3 == 0 && count % 5 == 0){
           cout << "FizzBuzz!!" << endl;
          }else if(count % 3 == 0){
              cout << "Fizz.." << endl;
                }else if(count % 5 == 0){
              cout << "Buzz.." << endl;
                }else{
                     cout << "Check "<<count<<" .."<<endl;
                   }

       }
                      return 0;
    }
