#include <iostream>
using namespace std;

int main(){
    int olfu[100][100];
    int r,c,p,t;
    cout <<"enter number of rows: ";
    cin >> r;
    cout <<"enter number of columns: ";
    cin >> c;
    
    for (p=0; p<r; p++){
        for (t=0;t<c;t++){
            cout << "enter value of rows["<<p<<"] columns["<<t<<"]";
            cin >>olfu[p][t];
        }
  
    }
    cout <<"the elements are: "<<endl;
    for (int p = 0; p < r; ++p) {
        for (int t = 0; t < c; ++t) {
            cout << "test[" << p << "][" << t << "]= " << olfu[p][t] << endl;
            }
        }
        return 0;
}