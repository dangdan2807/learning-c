#include <stdio.h>

int main()
{
    int giaithua(1), n;
    cout <<"Nhap so n: ";
   cin >> n;
    for(int i=1; i<=n; i++)
    {
        giaithua*=i;
    }
    cout << "Giai thua thu "<< n <<" la: " << giaithua;
    return 0;
}
