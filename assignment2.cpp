#include<iostream>
using namespace std;
int main(){
	
	string name="Areeba Ashraf";
	string id="bc260228568";
	
	cout<<"Name: "<<name<<"\n";
	cout<<"Student ID: "<<id<<"\n";
	  
    string num=id.substr(2);
    cout<<"\nDigits in ID: "<<num<<"\n";

    cout<<"Reversed numeric part :"<<"\t";
	 int reverse=0;
	  for(int i = num.length() - 1; i >= 0; i--){
        cout << num[i];
    }
     cout << "\n\nAbsent digits :\t";
    for(char digit = '0'; digit <= '9'; digit++){
        int found = 0;
        for(int i = 0; i < num.length(); i++){
            if(num[i] == digit){
                found = 1;
                break;
            }
        }
        if(found == 0){
            cout << digit << " ";
        }
    }

	   
	
	cout << "\n\nEven digits:\t";
    for(int i = 0; i < num.length(); i++){
        if(num[i] % 2 == 0){
            cout << num[i] << " ";
        }
    }
         cout << "\nOdd digits:\t";
    for(int i = 0; i < num.length(); i++){
        if(num[i] % 2 != 0){
            cout << num[i] << " ";
        }
    }
    
    
    
      char maximum = num[0];
    char minimum = num[0];

    for(int i = 1; i < num.length(); i++){
        if(num[i] > maximum){
            maximum = num[i];
        }
        if(num[i] < minimum){
            minimum = num[i];
        }
    }
    
      cout << "\n\nLargest digit: " << maximum;
    cout << "\nSmallest digit: " << minimum;

    cout << "\n\nMultiplication table of largest digit:\n";

    if(maximum == '0'){
        cout << "Multiplication table cannot be printed for 0.";
    }
    else{
        int n = maximum - '0';
        for(int i = 1; i <= 10; i++){
            cout << n << " x " << i << " = " << n * i << "\n";
        }
    }

  
}

