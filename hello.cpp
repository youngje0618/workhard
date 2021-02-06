#include <iostream>

using namespace std;


int main(){
   int test = 5;
   int *ptr_test = &test;
   int &refer_test = test;

   cout << "test : "<<test << endl;
   cout << "ptr_test : "<<ptr_test<<endl;
   cout << "*ptr_test : "<<*ptr_test<<endl; 
   cout << "refer_test : "<<refer_test<<endl;
      cout << "&refer_test : "<<&refer_test<<endl;

   

}