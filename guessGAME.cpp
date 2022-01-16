#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main(){
    int number;
    int response;
    int score = 0;

    srand(time(NULL));

    number = rand() % 10 +1 ;
    do {
        cout<<"enter your guess (1 to 10)";
        cin>>response;

if (response > number ){
    cout<<"that was too high \n";

}
else if (response < number){
    cout<<"that was low \n ";

}
else{
    cout<<"that was a perfect guess!! \n";
}
score++;
    } while (number != response);

    cout<<"\n Number is  " <<number;
    cout<< "\n the guesses are " << score;
    return 0;
}
