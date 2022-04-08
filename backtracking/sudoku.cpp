#include<iostream>
#include<cmath>
using namespace std;

bool canPlacethisnumber(int mat[][9], int row, int col, int number,int n){

    for(int i=0;i<n;i++){
        if((mat[row][i]==number) or (mat[i][col]==number)){
            return false;
        }
    }

    int rn = sqrt(n);
    int subsudoi = (row/rn)*rn;
    int subsudoj = (col/rn)*rn;

    for(int i=subsudoi; i<subsudoi+rn; i++){
        for(int j=subsudoj; j<subsudoj+rn; j++){
            if(mat[i][j]==number){
                return false;
            }
        }
    }
    return true;
}

bool solveSudoku(int mat[][9], int i, int j, int n){
    // base case
    if(i==n){
        for(int row=0;row<n;row++){
            for(int col=0;col<n;col++){
                cout<<mat[row][row]<<" ";
            }
            cout<<"\n";
        }

        return true;
    }
    // case col end
    if(j==n){
        return solveSudoku(mat,i+1,0,n);
    }

    // skip prefilled cells
    if(mat[i][j]!=0){
        return solveSudoku(mat,i,j+1,n);
    }

    // recursive case
    for(int number=1;number<10;number++){

            if(canPlacethisnumber(mat,i,j,number,n)){
                mat[i][j] = number;
                solveSudoku(mat,i,j+1,n);
            }
    }
    mat[i][j] = 0;
    return false;
}

int main(){

    int mat[9][9] = 
    {
        {5,3,0,0,7,0,0,0,9},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9}
    };

    solveSudoku(mat,0,0,9);
    return 0;
}