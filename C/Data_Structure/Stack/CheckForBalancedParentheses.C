//Parentheses: () or {} or []
//Expression: (A + B), {(A + B) + (C + D)}


//Program to give whether the parenthese on expression are balanced,
//Example of unbalanced: {(x + y) * z, {a + z), )(, [(])


//Solve it by:
//Scan from left to right
//If opening symbol, add it to list
//If closing symbol, remove last opening symbol in list
//Should end with an empty list

#include <stdio.h>
#include <string.h>

char Arr[10];
int top=-1;

void Push(char x){
    Arr[++top]=x;
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

int CheckBalanced(char* Exp, int num){

    for(int i=0;i<num;i++){
        if(Exp[i]=='{' || Exp[i]=='[' ||Exp[i]=='(' ){
            Push(Exp[i]);
        }
        else if(Exp[i]=='}' || Exp[i]==']' ||Exp[i]==')'){
            if(IsEmpty()) return 0;

            char topChar=Top();
            if((Exp[i] == ')' && topChar != '(') ||
                (Exp[i] == ']' && topChar != '[') ||
                (Exp[i] == '}' && topChar != '{')){
                    return 0;
                }
        
            Pop();
        }
    }
    return IsEmpty();
}

int main(){
    char Exp[7];
    printf("Enter an expression: ");
    fgets(Exp,sizeof(Exp),stdin);
    Exp[strcspn(Exp, "\n")] = '\0';
    int num=(int)strlen(Exp);
    if(CheckBalanced(Exp, num)){
        printf("Balanced Expression");
    }
    else{
        printf("Unbalanced Expression");
    }
}