#include <iostream>
using namespace std;
template <class T> 
class stack{
    private:
    int index=0, sizeStack=0;
    T *arrayS; 
    public:
    stack(int _size){arrayS = new T[_size]; sizeStack = _size;}
    void push(T elem){
        arrayS[index] = elem; 
        index++;
        cout << "Element:  "<<elem<<" added to the stack."<<endl;
        }
    T pop(){
        index--;
        cout << "Output element: "<<arrayS[index]<<endl;
        return arrayS[index];      
        }
    void show(){for (int i = 0; i < index; i++){cout<<arrayS[i]<<endl;}}
    bool isfull(){if (index == sizeStack) {return true;} else{return false;}}
    bool isEmpty(){if(index == 0){return true; }else{return false;}}
};

int main(){
int size = 0;
float dato;
cout << "Enter the stack size: ";
cin >> size;
stack <float> a(size);
int option;
while (1)
{
cout << "\n\nEnter an option: "<<endl; 
cout << "1.- Push"<< endl; 
cout << "2.- Pop"<< endl; 
cout << "3.- Show stack"<<endl;
cout << "4-- Exit" << endl; 
cout << "\t\t\tOption: ";
cin >> option; 
switch (option)
{
case 1:
if(a.isfull() == true){
    cout << "The stack is full."<<endl;
}else{
cout <<"Enter the data: "; 
cin >> dato;
a.push(dato);
}
break;
case 2:
if(a.isEmpty() == true){cout << "Stack is empty"<<endl;}else{a.pop();}
break;
case 3:
cout << "Stack elements: "<<endl;
a.show();
break;
case 4:
exit(1); 
break; 
default:
cout << "Ingresa una option valida" <<endl; 
    break;
}


}




    return 0;
}