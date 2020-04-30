
#include <stdio.h> 
//Basada en codigo de geeks4geeks xk mensa como ño https://www.geeksforgeeks.org/function-pointer-in-c/
void operacion(unsigned int a,unsigned int b, char oper){
    unsigned int res = 0;
    oper == '+' ? res = a + b : res == 0;
    oper == '-' ? res = a - b : res == 1;
    oper == '*' ? res = a * b : res == 2;
    oper == '/' ? res = a / b : res == 3;
    oper == '&' ? res = a & b : res == 0;
    oper == '^' ? res = a ^ b : res == 0;
    oper == '|' ? res = a | b : res == 0;
    printf("%u %c %u = %u\n",a,oper,b,res);
}
  
int main() 
{ 
    void (*fun) (int ,int ,char) = &operacion;
    unsigned int a = 0, b = 3 ; 
    char ch;
    
    printf("Escribe:\n+ para Suma\n- para Resta\n* para multiplicacion\n/ para division\n& para AND\n| para OR\n^ para XOR\n"); 
    scanf("%c", &ch);
    printf("Escribe el primer valor\n");
    scanf("%u", &a);
    printf("Escribe el segundo valor\n");
    scanf("%u", &b);
    if (ch == '*' || ch == '/' || ch == '+' || ch == '-' || ch == '&' || ch == '|' || ch == '^'){
        fun(a,b,ch);
    }  
    return 0; 
} 
