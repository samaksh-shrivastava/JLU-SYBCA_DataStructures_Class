#include <stdio.h>
int main(){
    int arr[15] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int ind, count = 0;
    printf("Enter the number you want to find : ");
    scanf("%d", &ind);
    for(int i = 0; i < 15; i++){
        if(arr[i] == ind){
            printf("The index of %d is %d.\n", ind, count);
            break;
        }
        count++;
    }
    return 0;
}
