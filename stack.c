#define max 5
void push();
void pop();
void peek();
void traverse();
int top=-1;
void main(){
	int stack[max],choice;
	char ch;
	do{
		printf("1.push()\n,2.pop()\n,3.peek()\n,4.traverse()\n");
		printf("ur choice=\n");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
			    peek();
				break;
			case 4:
				traverse();
				break;
			default:
			    printf("Invalid Entry\n");	
		}	
		
			printf("Do u wanna continue?(y || Y)=\n");
			scanf("%c",&ch);	
	while (ch=='Y' ) or (ch=='y');
    }
	void push(){
		int ele;
		if(top==max-1){
			printf("stack is in overflow condition\n");
			exit();
		}
		else{
			printf("elemnets=\n");
			scanf("%d",&ele);
			top+=1;
			stack[top]=ele;
		}
	}
	void pop(){
		int dele;
		if(top==-1){
		    printf("stack is in underflow condition\n");
		    exit();
		}
		else{
			dele=stack[top];
			top-=1;
			printf("deleted element=%d",dele);
		}
	}
	void peek(){
		if(top==-1){
			printf("stack is empty.\n");
		}
		else{
			printf("top most element of stack=%d",stack[top])
		}
	}  
	void traverse(){
		int i;
		if(top==-1){
			printf("stack is empty.\n")
		}
		else{
			printf("stack elemnets=\n");
			for(i=top;i>=0;i--){
				printf("%d\n",stack[top]);
			}
		}
	}
}