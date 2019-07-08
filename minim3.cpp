#include <iostream>

// Alta data
// int maxNumber(int arr[]){
//     int maxim = 0;
//     for (int i = 0; i < 3; i++){
//         if (arr[i] > maxim){
//             maxim = i;
//         }
//     }
//     return arr[maxim];
// }

// int minNumber(int arr[]){
//     int minim = maxNumber(arr);
//     for (int j = 0; j < 3; j++){
//         if (arr[j] < minim){
//             minim = arr[j];
//         }
//     }
//     return minim;
// }

// Gaseste lungimea unui array sizeof(array)/sizeof(array[0]) -> sizeof returneaza numarul de biti

int minNumber(int param[]) {
    int minim = param[0];
    for (int i = 0; i < 3; i++) {
        if (param[i] < minim) {
            minim = param[i];
        }
    }
    return minim;
}

int main() {
    int lista[3];
    for (int i = 0; i < 3; i++) {
        int x;
        std::cin >> x;
        lista[i] = x;
    }
    std::cout << minNumber(lista) << std::endl;
    return 0;
}