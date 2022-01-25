#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <stdexcept>

using namespace std;


class complex{
	
	double re,im;
	
	public:
		complex(double r,double i) : re{r}, im{i}{}
		complex(double r) : re{r}, im{0}{}
		complex() : re{0}, im{0}{}
		
		double real() const {return re;}
		void real(double d){
			re = d;
		}
		double imag() const {return im;}
		void imag(double d){
			im=d;
		}
		
		complex& operator+=(complex z){
			re+=z.re, im+=z.im;
			return *this;
		}
		
		complex& operator-=(complex z){
			re-=z.re, im-=z.im;
			return *this;
		}
		
//		bool operator==(complex a, complex b){
//			return a.real()==b.real() && a.imag()==b.imag();
//		}
//		
//		bool operator!=(complex a, complex b){
//			return !(a==b);
//		}
		
		complex& operator*=(complex);
		complex& operator/=(complex);
};

//void f(complex z){
//	complex a{2.3};
//	complex b{1/a};
//	complex c{a+z*complex{1,2.3}};
//	
//	if(c!=b)
//		c =-(b/a)+2*b;
//}

//class Container{
//	public:
//		virtual double& operator[](int) =0;
//		virtual int size() const=0;
//		virtual ~Container(){}
//};
//
//void use(Container& c){
//	const int sz = c.size();
//	
//	for(int i =0; i!=sz; ++i)
//		cout<<c[i]<<'\n';
//}
//
//class Vector_container : public Container{
//	Vector v;
//public:
//	Vector_container(int s): v(s){}
//	~Vector_container(){}
//	
//	double& operator[](int i){
//		return v[i];
//	}
//	int size()const {return v.size();}
//};
//
//void g(){
//	Vector_container vc{10,9,8,7,6,5,4,3,2,1,0};
//	use(vc);
//}
int main(){
	
	printf("hellp");
	
	return 0;
}
