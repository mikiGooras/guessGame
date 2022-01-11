
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <unistd.h>




using namespace std;

int x, y, z, g, i=0;
string shot = " shot",shots = " shots", answer, order;


int main() {
    
    cout << "Hello, player!\n" << endl;
    sleep(1);
    system("clear");
    cout << " Do you wanna play a game with me? \n" << endl;
    sleep(1);
    system("clear");
    
    cout<< "The rules are simple, You give me two numbers and i draft one between the range \n" ;
    sleep(1);
    system("clear");
    cout << "Your job is to guess my choise! \n ";
    sleep(1);
    system("clear");
    cout << " Can we start now? pleas choose the first number: \n";
    cin >> x ;
    cout << "great! Now please choose another one: \n";
    cin >> y;
    while (x>y){
        cout << " the second number sholud by bigger then the first pleas try again and choose the second number: \n";
        cin>>y;
    }
    
    srand(time(NULL));
    z = rand()%(y-x+1)+x;
    cout <<z;
    cout << " great now can you guess my choise?";
    
        
   while (g!=z) {
       cin >> g;
       i++;
       if (g>y or g<x){
           cout<< "Your number is out of range, pleas try again \n";
           
       }
           else if(g>z){
           cout << " No man, too much! \n";
           cout << "try again !";
       }
       else if (g<z){
           cout << " No man, more! \n";
           cout << "try again !";
       }
   }
        
    
    
    
    if (i==1){
        answer=shot;
        
    }
    else{
        answer=shots;
    }
    
    cout << "congratulations you won! \n";
    cout << "  you only needed " << i << answer<< endl;
    
    
    return 0;
}
