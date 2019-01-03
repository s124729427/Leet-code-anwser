int top;
char *x;
int isEmpty(){
	if(top==-1){
		return 1; 
	}else{
		return 0;
	}
} 
void push(char data){
    top++;
    x[top]=data;
}
char pop(){
	char data;
    data=x[top];
    top--;
    return data;	
}
bool isValid(char* s){
    bool flag = true;
    top = -1;
    int q=0;
    int i=0;
    while(s[q] != NULL){
        q=q+1;
    }
    x = (char*) malloc(q * sizeof(char));    
    while(s[i] != NULL){
       char a=s[i];
        if(a == '(' || a == '[' || a == '{'){
            push(a);
            i=i+1;
        }else if(a == ')'){
           if('('!= pop()){
               
               flag = false;
               break;
           }
            i=i+1;
        }else if(a == ']'){
           if('['!= pop()){
               
               flag = false;
               break;
           }
            i=i+1;
        }else if(a == '}'){
           if('{'!= pop()){
               
               flag = false;
               break;
           }
            i=i+1;
        }        
    }    
    free(x);
    if(isEmpty() == 0){
        return false;
    }
    return flag;    
}
