/*
#include<iostream>
using namespace std;
int main(){
string arr[3][3];
for(int i=0; i<3; i++){
for(int j=0;j<3;j++){
cin>>arr[i][j];
}
}
cout<<endl<<"Original matrix : "<<endl;
for(int i=0; i<3; i++){
for(int j=0; j<3; j++){
cout<<arr[i][j]<<" ";
}cout<<endl;
}
for(int i=0; i<3; i++){
for(int j=0;j<3;j++){
sort(arr[i][j].begin(),arr[i][j].end());
}
}
cout<<endl<<"After sorting matrix : "<<endl;
for(int i=0; i<3; i++){
for(int j=0; j<3; j++){
cout<<arr[i][j]<<" ";
}cout<<endl;
}
}
*/


#include <stdio.h>
#include <string.h>

#define students 100
#define length 50

void bubbleSort(char arr[students][length], int n) {
    int i, j;
    char temp[length];

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    char names[students][length];
    int num_students, i;

    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    
    printf("Enter the names of students:\n");
    for (i = 0; i < num_students; i++) {
        printf("Student %d: ", i + 1);
        scanf("%s", names[i]);
    }


    bubbleSort(names, num_students);

    
    printf("Sorted names:\n");
    for (i = 0; i < num_students; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

