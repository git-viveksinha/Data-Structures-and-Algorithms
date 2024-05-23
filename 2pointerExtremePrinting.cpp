#include <iostream>
#include <climits> // or ye file import karo #include <limits.h>
using namespace std;

void extremePrint(int arr[], int n){
    int start = 0;
    int end  = n-1;

    while(start <= end){
        if( start==end){
          // Print only one time
          cout << arr[start++] << " ";
          break;
        }
        else{
            //Niche jo case likhe h wo else mein aayega
             cout << arr[start++] << " ";
        cout << arr[end--] << " ";
        }
    }


      
     // is case mein do bar print ho raha h ek element in case of odd number 
    // while(start <= end){
    //     cout << arr[start++] << " ";
    //      cout << arr[end--] << " ";

    // }
}

int main(){
    int arr[100 ];
   int size;
   cout<<"Enter the size of the array: ";
   cin >> size;


   for(int i = 0; i<size ; i++){
    cout<<" enter the value at Index " << i << endl;
    cin >> arr[i];
   }

extremePrint(arr, size);


    return 0;
}