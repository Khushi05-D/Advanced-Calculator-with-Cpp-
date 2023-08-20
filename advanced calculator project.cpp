#include<iostream>  
#include<cmath>  
    
using namespace std;  
    
void arithmetic()
{  
    int op = 0;  
    float A = 0;  
    float B = 0;  
         
    cout<<"Select opeartion"<<endl;  
    cout<<"[1] Addition"<<endl;  
    cout<<"[2] Substraction"<<endl;  
    cout<<"[3] Product"<<endl;  
    cout<<"[4] Division"<<endl;  
         
    cin>>op;  
    cout<<"Enter the number:"<<endl;  
    cin>>A;  
         
    cout<<"Enter second number:"<<endl;  
    cin>>B;  
         
    cout<<"Result: "<<endl;  
         
    switch(op)
	{  
        case 1:  
            cout<<(A+B);  
            break;  
        case 2:  
            cout<<(A-B);  
             break;  
        case 3:  
            cout<<(A*B);  
            break;  
        case 4:  
            cout<<(A/B);  
            break;  
        default:  
            cout<<"Invalid operation";  
            break;  
    }  
       cout<< endl;  
}  
    
void trigonometric()
{  
    int op = 0;  
    float val = 0.0;  
    cout<<"Select"<<endl;  
    cout<<"[1] Sine"<<endl;  
    cout<<"[2] Cosine"<<endl;  
    cout<<"Op: ";  
    cin>>op;  
    cout<<"Enter value: ";  
    cin>>val;  
    if(op == 1)
	{  
        cout<<sin(val);  
    }  
    else if(op == 2)
	{  
        cout<<cos(val);  
    }  
    else
	{  
        cout<<"Invalid operation";  
    }  
    cout<<endl;  
}  
    
void exponential()
{  
    float base = 0.0;  
    float eee = 0.0;  
         
    cout<<"Enter base:";  
    cin>>base;  
    cout<<"Enter exponent: ";  
    cin>>eee;  
    cout<<pow(base, eee)<<endl;  
}  
    
  void logarithmic()
{  
    float value = 0.0;  
    cout<<"Enter the value to calculate the log(e): ";  
    cin>>value;  
    cout<<log(value)<<endl;  
}  
    
int main()
{  
    int ch = 0;  
    char choice = 'y';  
    cout<<"Advanced Calculator"<<endl;  
    
    cout<<"[1] Arithmetic"<<endl;  
    cout<<"[2] Trigonometric"<<endl;  
    cout<<"[3] Exponential"<<endl;  
    cout<<"[4] Logarithmic"<<endl;   
         
    while(choice == 'y')
	{  
        cout<<"Enter the type of operation you want to calculate:"<<endl;  
        cin>>ch;  
              
        switch(ch)
		{  
            case 1:  
                arithmetic();  
                break;  
            case 2:  
                trigonometric();  
                break;  
            case 3:  
                exponential();  
                break;  
            case 4:  
                logarithmic();  
                break;  
            default:  
                cout<<"Invalid Operation";  
        }  
              
        cout<<"Do you want to continue? y for yes/n for no"<<endl;  
        cin>>choice;  
        if(choice == 'n')
		{  
            break;  
        }  
    }            
    return 0;  
} 
