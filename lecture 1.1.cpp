#include<iostream>
using namespace std;

class Lec{
	public:
		int x;
		int y;
		
		void set(int a,int b){
			this->x=a;
			this->y=b;
		}
		void get(){
			cout<<"x = "<<x<<endl;
			cout<<"y = "<<y<<endl;
		}
		Lec operator<(Lec n){
			Lec temp;
			temp.x=x<n.x;
			temp.y=y<n.y;
			return temp;
		}
};
int main(){
	Lec l1,l2,l3;
	l1.set(34,36);
	l1.get();
	l2.set(36,38);
	l2.get();
	l3=l1<l2;
	l3.get();
	
}

