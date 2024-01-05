#include <stdio.h>
#include <stdlib.h>


void sudokuDraw (int arr[9][9]);

int main(){
    int level;
    int condition=1;
    int row,column,number;
    printf("Please choose level\n1.Easy\n2.Medium\n3.Hard\n");
    scanf("%d",&level);
    int arrEasy[9][9]={7, 3, 0,    9, 5, 0,    0, 0, 0,
                       2, 0, 0,    6, 7, 0,    5, 8, 0,
                       0, 0, 5,    0, 1, 0,    4, 0, 0,

                       1, 9, 0,    0, 6, 3,    2, 0, 5,
                       0, 4, 0,    0, 0, 0,    6, 0, 0,
                       5, 6, 8,    2, 0, 7,    0, 0, 0,

                       0, 2, 0,    0, 8, 1,    3, 0, 0,
                       0, 0, 1,    0, 0, 9,    7, 6, 0,
                       0, 7, 0,    5, 2, 0,    8, 0, 9 };
    int arrMedium[9][9]={0, 1, 9,    0, 0, 2,    0, 0, 0,
                       4, 7, 0,    6, 9, 0,    0, 0, 1,
                       0, 0, 0,    4, 0, 0,    0, 9, 0,

                       8, 9, 4,    5, 0, 7,    0, 0, 0,
                       0, 0, 0,    0, 0, 0,    0, 0, 0,
                       0, 0, 0,    2, 0, 1,    9, 5, 8,

                       0, 5, 0,    0, 0, 6,    0, 0, 0,
                       6, 0, 0,    0, 2, 8,    0, 7, 9,
                       0, 0, 0,    1, 0, 0,    8, 6, 0 };
    int arrHard[9][9]={4, 0, 0,    0, 0, 0,    0, 0, 8,
                       0, 1, 0,    0, 9, 6,    0, 0, 0,
                       0, 0, 3,    2, 0, 0,    6, 0, 1,

                       5, 3, 1,    6, 0, 0,    0, 0, 0,
                       6, 0, 0,    0, 3, 0,    0, 0, 0,
                       0, 0, 0,    0, 4, 9,    0, 0, 0,

                       1, 8, 5,    0, 6, 0,    0, 0, 4,
                       0, 6, 2,    4, 0, 5,    0, 7, 0,
                       0, 0, 0,    9, 0, 0,    0, 0, 0 };
switch (level)
{

case 1:
    while(condition){
        int temp=0,condrow=0,condcolumn=0,cond=1;
        sudokuDraw(arrEasy);
        printf("please enter row,column,number: ");
        scanf("%d,%d,%d",&row,&column,&number);
        row--;
        column--;
        if(arrEasy[row][column]!=0){
            printf("\nwrong place\n\n");
            cond=0;
        }
        else if(cond==1){
            for(int i=0;i<9;i++){
                if(arrEasy[row][i]==number)
                    condrow++;
            }
            if(condrow>0){
            printf("\nwrong place\n\n");
            cond=0;
            }
        }
        if(cond==1){
            for(int i=0;i<9;i++){
                if(arrEasy[i][column]==number)
                    condcolumn++;
            }
            if(condcolumn>0){
            printf("\nwrong place\n\n");
            cond=0;
            }
        }
        if(cond==1){
            int pos,i,j;
            if(-1<row&&row<3)
                i=0;
            else if(2<row&&row<6)
                i=3;
            else if(5<row&&row<9)
                i=6;
            if(-1<column&&column<3)
                j=0;
            else if(2<column&&column<6)
                j=3;
            else if(5<column&&column<9)
                j=6;
            for(int o=i;o<(i+3);o++){
                for(int z=j;z<(j+3);z++){
                    if(i==row&&j==column)
                        continue;
                    if(arrEasy[o][z]==number){
                        printf("\nwrong place\n\n");
                        cond=0;
                    }
                }
            }
        }
        if(cond==1)
            arrEasy[row][column]=number;

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(arrEasy[i][j]==0)
                    temp++;
            }
        condition=0;
        }
        if(temp>0)
            condition=1;
    }
    printf("You won");
    break;
case 2:
    while(condition){
        int temp=0,condrow=0,condcolumn=0,cond=1;
        sudokuDraw(arrMedium);
        printf("please enter row,column,number: ");
        scanf("%d,%d,%d",&row,&column,&number);
        row--;
        column--;
        if(arrMedium[row][column]!=0){
            printf("\nwrong place\n\n");
            cond=0;
        }
        else if(cond==1){
            for(int i=0;i<9;i++){
                if(arrMedium[row][i]==number)
                    condrow++;
            }
            if(condrow>0){
            printf("\nwrong place\n\n");
            cond=0;
            }
        }
        if(cond==1){
            for(int i=0;i<9;i++){
                if(arrMedium[i][column]==number)
                    condcolumn++;
            }
            if(condcolumn>0){
            printf("\nwrong place\n\n");
            cond=0;
            }
        }
        if(cond==1){
            int pos,i,j;
            if(-1<row&&row<3)
                i=0;
            else if(2<row&&row<6)
                i=3;
            else if(5<row&&row<9)
                i=6;
            if(-1<column&&column<3)
                j=0;
            else if(2<column&&column<6)
                j=3;
            else if(5<column&&column<9)
                j=6;
            for(int o=i;o<(i+3);o++){
                for(int z=j;z<(j+3);z++){
                    if(i==row&&j==column)
                        continue;
                    if(arrMedium[o][z]==number){
                        printf("\nwrong place\n\n");
                        cond=0;
                    }
                }
            }
        }
        if(cond==1)
            arrMedium[row][column]=number;

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(arrMedium[i][j]==0)
                    temp++;
            }
        condition=0;
        }
        if(temp>0)
            condition=1;
    }
    printf("You won");
    break;
case 3:
    while(condition){
        int temp=0,condrow=0,condcolumn=0,cond=1;
        sudokuDraw(arrHard);
        printf("please enter row,column,number: ");
        scanf("%d,%d,%d",&row,&column,&number);
        row--;
        column--;
        if(arrHard[row][column]!=0){
            printf("\nwrong place\n\n");
            cond=0;
        }
        else if(cond==1){
            for(int i=0;i<9;i++){
                if(arrHard[row][i]==number)
                    condrow++;
            }
            if(condrow>0){
            printf("\nwrong place\n\n");
            cond=0;
            }
        }
        if(cond==1){
            for(int i=0;i<9;i++){
                if(arrHard[i][column]==number)
                    condcolumn++;
            }
            if(condcolumn>0){
            printf("\nwrong place\n\n");
            cond=0;
            }
        }
        if(cond==1){
            int pos,i,j;
            if(-1<row&&row<3)
                i=0;
            else if(2<row&&row<6)
                i=3;
            else if(5<row&&row<9)
                i=6;
            if(-1<column&&column<3)
                j=0;
            else if(2<column&&column<6)
                j=3;
            else if(5<column&&column<9)
                j=6;
            for(int o=i;o<(i+3);o++){
                for(int z=j;z<(j+3);z++){
                    if(i==row&&j==column)
                        continue;
                    if(arrHard[o][z]==number){
                        printf("\nwrong place\n\n");
                        cond=0;
                    }
                }
            }
        }
        if(cond==1)
            arrHard[row][column]=number;

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(arrHard[i][j]==0)
                    temp++;
            }
        condition=0;
        }
        if(temp>0)
            condition=1;
    }
    printf("You won");
    break;
}
}

void sudokuDraw (int arr[9][9]){

    for(int i=0;i<9;i++){
        if(i==0||i==3||i==6)
            printf("-------------------------------\n");
        for(int j=0;j<9;j++){
            if(j==0||j==3||j==6)
                printf("| ");
            printf("%d  ",arr[i][j]);
        }
        printf("| ");
        printf("\n");
    }
    printf("-------------------------------\n");


}
