#include <iostream>
using namespace std;



int main(){

    int arr[]={2,5,6,8,9,10,12};
    int size= 7;
    int key;
    cout<<" enter the key: ";
    cin>>key;


    bool found = false;
    int i;
    for( i=0; i< size; i++){

        if( arr[i]== key){
            found= true;
            break;
        }
    }
    if (found){
        cout<< " element found in the array at index: "<< i<<endl;

    }
    else{
        cout<<" element not found in the array."<<endl;
    }

   
  


}
 