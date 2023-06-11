#include <iostream>
using namespace std;
int main(void) {
  int vector[]= {7, -8, 9, 6, -11, 8, 3, 9, -1 };
  int n = sizeof(vector) / sizeof(vector[0]);
  int max=(vector[0]);

  for(int i = 0; i<n; i++){
    if(*(vector+i)>max){
      max = *(vector+i);        
      }
    }
  cout<<max;

  return 0;
}
