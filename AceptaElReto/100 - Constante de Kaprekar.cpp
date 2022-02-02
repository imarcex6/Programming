#include <bits/stdc++.h>
using namespace std;

bool checkRepDigits(int num) {
    if (num % 1111 == 0) {
        return true;
    } else {
        return false;
    }
}

int sortDescending(int num) {
    int arr[4];
    arr[0] = num % 10;
    arr[1] = (num/10) % 10;
    arr[2] = (num/100) % 10;
    arr[3] = num/1000;
    int length = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+length, greater<int>());
    return arr[0]*1000 + arr[1]*100 + arr[2]*10 + arr[3];
}

int sortAscending(int num) {
    int arr[4];
    arr[0] = num % 10;
    arr[1] = (num/10) % 10;
    arr[2] = (num/100) % 10;
    arr[3] = num/1000;
    int i, j, temp;
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(arr[i]>arr[j])
            {
                temp  =arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int numero = arr[0]*1000 + arr[1]*100 + arr[2]*10 + arr[3];
    return numero;
}

int Kaprekar (int num) {
    if (num == 6174) return 0;
    return 1 + Kaprekar(sortDescending(num) - sortAscending(num));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int cases; cin >> cases;
    while (cases--) {
        int num; cin >> num;
        if (checkRepDigits(num)) {
            printf("8\n");
        } else {
            printf("%d\n", Kaprekar(num));
        }
    }

    return 0;
}