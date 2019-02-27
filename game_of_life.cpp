 #include <iostream>
 #include <cstdlib>
 #include <cstring>
 #include <windows.h>
 #include <ctime>

 using namespace std;

 #define N 20
 #define M 40
 #define ITERATIONS 50 // two times less than you want

 void countNextArray(int firstArray[N][M], int secondArray[N][M])
 {
     int sum[N][M];
     for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            sum[i][j] = 0;
            int temp = 0;

            for(int k=-1; k<=1; k++){
                for(int l=-1; l<=1; l++){
                    temp = firstArray[(N+i+k)%N][(M+j+l)%M];
                    sum[i][j] += temp;
                }
            }

            sum[i][j] -= firstArray[i][j]; // sum of neighbours = sum of 9 cells - center cell

            int cell = firstArray[i][j];
            int sumOfNeighbours = sum[i][j];

            if(cell == 0 && sumOfNeighbours == 3)
                secondArray[i][j] = 1;
            else if(cell == 0 && sumOfNeighbours != 3)
                secondArray[i][j] = 0;
            else if(cell == 1 && (sumOfNeighbours == 2 || sumOfNeighbours == 3))
                secondArray[i][j] = 1;
            else
                secondArray[i][j] = 0;
        }
     }
 }

 void displayArray(int array[N][M]){
     for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            if(array[i][j] == 0)
                cout << " ";
            else
                cout << "@";
        }
        cout << endl;
    }
    cout << endl;
 }

 int main()
 {
    srand(time(0));
    string decision = "y";
    int evenArray[N][M], oddArray[N][M], firstArray[N][M];

    for(int i=0; i<N; i++){
        for(int j=0; j<M; j++){
            evenArray[i][j] = rand()%2;
            firstArray[i][j] = evenArray[i][j]; // copy of random array for repeat of game
        }
    }

    while (decision == "y"){
        for(int i=0; i<ITERATIONS; i++){
            cout << "Iteration number " << 2*i+1 << endl;
            displayArray(evenArray);
            memset(oddArray, 0, N*M*sizeof(int)); // fill oddArray by 0
            Sleep(200); // sleep for n miliseconds
            countNextArray(evenArray, oddArray);
            system("cls"); // clean console

            cout << "Iteration number " << 2*i+2 << endl;
            displayArray(oddArray);
            memset(evenArray, 0, N*M*sizeof(int));
            Sleep(200);
            countNextArray(oddArray, evenArray);
            system("cls");
        }

        cout << " Once again? Type \"y\" if yes. \n If no, type Enter and goodbye! :)" << endl;
        cin >> decision;

        if(decision == "y"){ // show repeat of game
            for(int i=0; i<N; i++){
                for(int j=0; j<M; j++){
                    evenArray[i][j] = firstArray[i][j];
                }
            }
            system("cls");
        }
    }
    return 0;
 }
