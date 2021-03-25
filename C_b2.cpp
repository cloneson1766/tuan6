#include <iostream>
using namespace std;

void printSet(char set[], string kitu,
                                    int n, int k)
{
    if (k == 0)
    {
		cout << kitu << endl;
        return;
    }
    for (int i=0; i < n; i++)
    {
        string chuoi;
        chuoi = kitu + set[i];
        printSet(set, chuoi, n, k - 1);
    }

}

int main()
{
	int k,n;
    char set[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    cout << "Nhap n: ";cin >> n;
    cout << "Nhap k: "; cin >> k;
	printSet(set, "", n, k);

}
