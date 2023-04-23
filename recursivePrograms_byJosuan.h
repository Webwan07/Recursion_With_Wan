#include <stdio.h>

void notrecursiveOne(int num, int limit){
    for(int i = num; i<=limit; i++){
        printf(" %d ",i);
    }
}
void recursiveOne(int num,int limit){
    if(num<=limit){
        printf(" %d ",num);
        recursiveOne(num+1,limit);
    }
}

void programOne(){
    int num,limit;
    printf("Input the starting number: ");
    scanf("%d",&num);

    printf("Input the limit: ");
    scanf("%d",&limit);

    printf("The natural numbers are:\n    Recursive:");
    recursiveOne(num,limit);
    printf("\nNot recursive:");
    notrecursiveOne(num,limit);
}

int notrecursiveTwo(int num){
    int sum = 0;
    for(int i = 1; i <= num; i++){
        sum += i;
    }
    return sum;
}
int recursiveTwo(int n){
    if(n == 1){
        return (1);
    }else{
        return n + recursiveTwo(n-1);
    }
}

void programTwo(){
    int n;
    printf("Input the last number of the n starting from 1: ");
    scanf("%d",&n);

    printf("The sum of numbers from 1 to %d is:\n",n);
    printf("Recursive: %d\n",recursiveTwo(n));
    printf("Not recursive: %d",notrecursiveTwo(n));
}

void notrecursiveThree(int num,int term){
    int nxtNo, prNo = 0; 
    for(int i = 1; i < term; i++){
        nxtNo = prNo + num;
        printf("%d  ",nxtNo);
        prNo = num;
        num = nxtNo;
    }
}
void recursiveThree(int prNo, int num, int term){
    if(term > 0){
        int nxtNo = prNo + num;
        printf("%d  ",nxtNo);
        recursiveThree(num,nxtNo,term-1);
    }
}

void programThree(){
    int prNo = 0, num = 1,term;
    printf("Input number terms for the Series (<20): ");
    scanf("%d",&term);
    printf("The Series are:\n    Recursive: 1  ");
    recursiveThree(prNo,num,term-1);
    printf("\nNot recursive: 1  ");
    notrecursiveThree(num,term);
}

void notrecursiveFour(int arr[],int size){
    for(int i = 0; i<size; i++){
        printf("%d  ",arr[i]);
    }
}
void recursiveFour(int arr[], int st, int s){
    if(st>=s){
        return;
    }
    printf("%d  ",arr[st]);

    recursiveFour(arr,st+1,s);
}

void programFour(){
    int arr[] = {1,11,111,1111};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("The elements in the array are:\n    Recursive: ");
    recursiveFour(arr,0,size);
    printf("\nNot recursive: ");
    notrecursiveFour(arr,size);
}

int notrecursiveFive(int num){
    int count = 0;
    for(int i = num; i!=0; i/=10){
        count++;
    }
    return count;
}
int recursiveFive(int num, int count){
    if(num != 0){
        count++;
        return recursiveFive(num/10,count);
    }else{
        return count;
    }
}

void programFive(){
    int num,count = 0;
    printf("Input a number: ");
    scanf("%d",&num);

    printf("The number of digits in the num is:\n");
    printf("    Recursive: %d",recursiveFive(num,count));
    printf("\nNot recursive: %d",notrecursiveFive(num));
}

