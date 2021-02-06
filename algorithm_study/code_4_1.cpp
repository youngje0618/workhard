#include <iostream>
#include <cmath>
using namespace std;
//주어진 배열에서 가장 많이 등장하는 숫자를 반환하기 


int main(){
    int num;
    cout << "put number : ";
    cin >> num;
    int *arr = new int [num];       
    int majority = 0, count =0;
    for(int i =0;i<num;i++){

        arr[i] = rand()%101;
    }

    majority = arr[0];

    for(int i =0; i <num; i++){
        int v = arr[i];
        int tmp_count =0 ;
        for(int j = 0; j<num;j++){
            if(v == arr[j]){
                tmp_count++;
           }
        }

        if(count <tmp_count){
            count = tmp_count;
            majority = arr[i];
        }        
    }

    for(int i = 0; i<num;i++){
        cout<<arr[i] << "  ";
    }
    cout<<endl<<endl<<"majority : "<<majority<<endl <<"count : "<<count;
}