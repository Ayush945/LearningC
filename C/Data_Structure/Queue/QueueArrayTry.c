#include <stdio.h>
#define MAX_SIZE 5
int Que[MAX_SIZE];

int front=-1;
int rear=-1;

int Front(){
    return Que[front];
}

int IsEmpty(){
    return (front==-1 && rear==-1)?1:0;
}

int IsFull(){
    return ((rear+1)%MAX_SIZE)==front;
}

void EnQueue(int num){
    if(IsFull()){
        printf("The Queue is full");
        return;
    }
    else if(IsEmpty()){
        rear=0;
        front=0;
    }
    else{
        rear=(rear+1)%MAX_SIZE;
    }
    Que[rear]=num;
}

void DeQueue(){
    if(IsEmpty()){
        printf("Queue is empty");
    }
    else if(front==rear){
        front=-1;
        rear=-1;
    }
    else{
        front=(front+1)%MAX_SIZE;
    }
}



void Print(){
    if (IsEmpty()) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");
    int i = front;
    while (1) {
        printf("%d ", Que[i]);
        if (i == rear) break;
        i = (i + 1) % MAX_SIZE;
    }
    printf("\n");
}

int main(){
    EnQueue(1);
    EnQueue(2);
    EnQueue(3);
    DeQueue();
    DeQueue();
    EnQueue(4);
    EnQueue(5);
    EnQueue(6);
    EnQueue(7);
    
    Print();

}