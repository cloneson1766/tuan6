#include <iostream>
using namespace std;

void arr(int arr[])
{
    cout << "Mang trong ham f: " << endl;
    for(int i=0;i<3;i++)
    {
        cout << "Nhap phan tu thu " << i+1 << ": ";
        cin >> arr[i];
    }
    cout << "Dia chi cua bien mang la: " << &arr<<endl;
    cout << "Dia chi cua phan tu thu nhat la "<<&arr[0] <<endl;

}

int main()
{
    cout << "Mang trong ham main: " <<endl;
    int a[3];
    for(int i=0;i<3;i++)
    {
        cout << "Nhap phan tu thu " << i+1 << ": ";
        cin >> a[i];
    }
    cout << "Dia chi cua bien mang la: " << &a<<endl;
    cout << "Dia chi cua phan tu thu nhat la: " << &a[0]<<endl;
    arr(a);

    //địa chỉ của mảng và phần tử thứ nhất bằng nhau
    //địa chỉ 2 mảng khác nhau
    //địa chỉ phần tử thứ nhất của 2 mảng bằng nhau
}
