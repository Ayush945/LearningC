#include <stdio.h>
#include <string.h>
#include <ctype.h>


char Arr[20];
int top=-1;

void Push(char num){
    Arr[++top]=num;
}

void Pop(){
    top--;
}

char Top(){
    return Arr[top];
}

int IsEmpty(){
    return top==-1;
}

int GetWeight(char oper){
    int weight=-1;
    switch(oper){
        case '+':
        case '-':
            weight=1;
            break;            
        case '/':
        case '*':
            weight=2;
    }
    return weight;
}

int HasHighPrecedence(char top,char oper){
    int op1=GetWeight(top);
    int op2=GetWeight(oper);
    
    if(op1==op2){
        return 1;
    }
    return op1>op2?1:0;
}

int IsOperator(char oper){
    return (oper=='-'||oper=='+'||oper=='*'||oper=='/')?1:0;
}

int IsOperand(char oper){
    return isdigit(oper) || isalpha(oper);
}

char* InfixToPostfixConverter(char* C, int num){
    static char newExp[10]="";
    int j=0;
    for(int i=0;i<num;i++){
        if(IsOperand(C[i])){
            newExp[j++]=C[i];
        }
        else if(IsOperator(C[i])){
            
            while(!IsEmpty()&& HasHighPrecedence(Top(),C[i])){
                newExp[j++]=Top();
                Pop();
            }   
            Push(C[i]);         
        }
    }
    while(!IsEmpty()){
        newExp[j++]=Top();
        Pop();
    }
    newExp[j]='\0';
    return newExp;
}


int main(){
    char C[10];
    printf("Enter Infix to convert to Postfix: "); // Infix expression: A*B+C (Without Parentheses)
    fgets(C,sizeof(C),stdin);
    C[strcspn(C,"\n")]= '\0';
    int num=(int)strlen(C);
    printf("New Postfix Expression is : %s",InfixToPostfixConverter(C,num));
    //AB*C+
    return 0;
}