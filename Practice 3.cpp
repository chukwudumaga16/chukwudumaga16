#include<iostream>

using namespace std;

class Phone{
	public:
		string brand;
		int camera;
		string colour;
		
		Phone(string Cbrand, int Ccamera, string Ccolour){
			brand = Cbrand;
			camera = Ccamera;
			colour = Ccolour;
		}
		Phone(){
			brand = "samsung";
			camera = 2;
			colour = "silver";
		}
};
int main(){
	Phone iphone("Iphone",3,"Gold");
	
	Phone iphone2;
	
	cout<<iphone.brand;
	
	cout<<iphone2.camera;
}
