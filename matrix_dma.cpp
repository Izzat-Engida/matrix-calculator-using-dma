#include <iostream>
using namespace std;
int main() {
    int** pdr;
    int** arry;
    int** ptr;
    int row, column;
    int choice,coun1=0,coun2=0;
    cout<<"welcome choose from the following to calclulate: "<<endl;
    cout<<"1.Sum of two matrices\n";
    cout<<"2. transpose of a matrix\n";
    cout<<"3. multiplication of two matrice\n";
    cin>>choice;
if(choice==1){
    cout << "enter the row: ";
    cin >> row;
    cout << "enter the column: ";
    cin >> column;
    cout << "enter for the first matrix" << endl;
    arry = new int* [row];
    for (int i = 0; i < row; i++) {
        arry[i] = new int[column];
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << "enter :" << i + 1 << " " << j + 1 << ": ";
            cin >> arry[i][j];
        }
    }
    cout << endl
        << "enter for the second matrix " << endl;
    pdr = new int* [row];
    for (int i = 0; i < row; i++) {
        pdr[i] = new int[column];
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << "enter, " << i + 1 << "," << j + 1 << " : ";
            cin >> pdr[i][j];
        }
    }
    ptr = new int* [row];
    for (int i = 0; i < row; i++) {
        ptr[i] = new int[column];
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            ptr[i][j] = 0;
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            ptr[i][j] = pdr[i][j] + arry[i][j];
        }
    }
    cout << "the sum of the two matrices is" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }}
    else if(choice==2){ 
    cout << "enter the row: ";
    cin >> row;
    cout << "enter the column: ";
    cin >> column;
    cout << "enter for the first matrix" << endl;
    arry = new int* [row];
    for (int i = 0; i < row; i++) {
        arry[i] = new int[column];
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << "enter :" << i + 1 << " " << j + 1 << ": ";
            cin >> arry[i][j];
        }
    }cout<<"the transpose is"<<endl;
    for(int i=0;i<column;i++){
        for(int j=0;j<row;j++){
          cout<<arry[j][i]<<" ";
            }cout<<endl;
        }
    }
 else if(choice==3){

cout << "enter the row: ";
    cin >> row;
    cout << "enter the column: ";
    cin >> column;
    cout << "enter for the first matrix" << endl;
    arry = new int* [row];
    for (int i = 0; i < row; i++) {
        arry[i] = new int[column];
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << "enter :" << i + 1 << " " << j + 1 << ": ";
            cin >> arry[i][j];
        }
    }
    cout << endl
        << "enter for the second matrix " << endl;
    pdr = new int* [row];
    for (int i = 0; i < row; i++) {
        pdr[i] = new int[column];
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            cout << "enter, " << i + 1 << "," << j + 1 << " : ";
            cin >> pdr[i][j];
        }
    }
    ptr = new int* [row];
    for (int i = 0; i < row; i++) {
        ptr[i] = new int[column];
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            ptr[i][j] = 0;
            for(int k=0;k<column;k++){
                ptr[i][j]+=arry[i][k]*pdr[k][j];
            }
        }
    } for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<ptr[i][j]<<" ";
        }cout<<endl;
    } 

    }
for(int i=0;i<row;i++){
    delete[]arry[i];
    delete[]pdr[i];
    delete[]ptr[i];
    
}
    delete[] arry;
    delete[] pdr;
    delete[] ptr;
    ptr = 0;
    pdr = 0;
    arry = 0;

    return 0;
}
