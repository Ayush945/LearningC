#include <stdio.h>
#include <string.h>
#include <ctype.h>


int Arr[20];
int top=-1;

void Push(int num){
    Arr[++top]=num;
}

void Pop(){
    top--;
}

int Top(){
    return Arr[top];
}

int IsEmpty(){
    return top==-1;
}

int GetOperatorResult(int op1, int op2,char oper){
    int result;
    switch(oper){
        case '/':
            result=op1/op2;
            break;
        case '*':
            result=op1*op2;
            break;
        case '-':
            result=op1-op2;
            break;
        case '+':
            result=op1+op2;
            break;
        default:
            printf("Error operator");
            break;
    }
    return result;
}

int ReversePolishNotationEvaluator(char* C,int len){
    for(int i=0;i<len;i++){
        if(isdigit(C[i])){
            int digit_int =C[i]- '0';
            Push(digit_int);
        }
        else if(C[i]=='*'||C[i]=='+'||C[i]=='-'||C[i]=='/'){

            int op2=Top();
            Pop();
            int op1=Top();
            Pop();
            Push(GetOperatorResult(op1,op2,C[i]));
        }
    }
    return Top();
}

int main(){
    char C[10];
    printf("Enter postfix to parse: "); // postfix expression: 23*54*+9-
    fgets(C,sizeof(C),stdin);
    C[strcspn(C,"\n")]= '\0';
    int num=(int)strlen(C);
    
    int result=ReversePolishNotationEvaluator(C,num);
    printf("\n\nThe evaluaion is: %d",result);
    return 0;
}