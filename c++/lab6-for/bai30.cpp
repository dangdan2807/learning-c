/* De bai: 
    Viet chuong trinh in ta man hinh tat ca cac uoc so cua 1 so nguyen duong n cho truoc
    |   input   |   output      |
    |   8       |   1, 2, 4, 8  |
    |   6       |   1, 2, 3, 6  |
*/
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout <<"nhap n: ";
    do{
        cin >> n;
        if(n <= 0){
            cout <<"\nnhap n: ";
        }
    }while(n <= 0);
    for(int i=1; i<=n; i++){
        if(n%i==0){
           cout << i << "\t";
        }
    }
    return 0;
}