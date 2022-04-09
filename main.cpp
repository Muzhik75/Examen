#include <iostream>

int main() {

    short arr[5][5];
    srand(time(nullptr));
    for (short i = 0; i < 5; i++) {
        for (short j = 0; j < 5; j++) {
            arr[i][j] = rand() % 89 + 10;
        }
    }

    for (short i = 0; i < 5; i++) {
        for (short j = 0; j < 5; j++) {
        std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    for (short i = 0; i < 5; i++){
        short maxValue = arr[i][0];
        for(short j = 0; j < 5; j++){
            if(arr[i][j] > maxValue){
                maxValue = arr[i][j];
                short tmp = arr[i][0];
                arr[i][0] = maxValue;
                arr[i][j] = tmp;
            }
        }

    }
    for (short i = 0; i < 5; i++) {
        for (short j = 0; j < 5; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }


    std::cout << "Finish!" << std::endl;
    return 0;
}
