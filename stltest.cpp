#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <stdexcept>
using namespace std;

//struct Vector{
//	int sz;
//	double *elem;
//};

//Vector v;

//void vector_init(Vector& v, int s){
//	
//	v.elem = new double[s];
//	v.sz = s;
//	
//}

//double read_and_sum(int s){
//	Vector v;
//	vector_init(v,s);
//	for(int i =0; i!=s; ++i){
//		cout<<"Input : ";
//		cin>>v.elem[i];
//	}
//	
//	double sum = 0;
//	
//	for(int i= 0; i!=s; ++i){
//		sum+= v.elem[i];
//	}
//	return sum;
//}

//void read_v(Vector v, Vector &rv, Vector *pv){
//	
//	int i1= v.sz;
//	int i2= rv.sz;
//	int i4 = pv->sz;
//	printf("name : %d, reference : %d, pointer :%d", i1,i2,i4);
//}
//
//class Vector{
//	public:
//		Vector(int s) :elem{new double[s]}, sz{s}{}
//		double& operator[](int i){return elem[i];}
//		int size(){
//			return sz;
//		}
//	private:
//		double* elem;
//		int sz;
//};
//
//double read_and_sum(int s){
//	Vector v(s);
//	for(int i=0; i!=v.size();++i){
//		cin>>v[i];
//	}
//	
//	double sum = 0;
//	for(int i =0 ; i!=v.size(); ++i){
//		sum+=v[i];
//	}
//	return sum;
//}

//enum class Color{
//	red,blue,green
//};
//
//enum class Traffic_light{
//	green, yellow,red
//};
//
//double sqrt(double);
//
//double sqrt(double d){
//	return sqrt(d);
//}

void test(){
	try{
		
	}catch(std::length_error){
		
	}catch(std::bad_alloc){
		
	}
}

constexpr double C = 299792.458;
void f(double speed){
	const double local_max = 160.0/(60*60);
	
	static_assert(speed<C,"cant't go that fast");
	static_assert(local_max<C,"cant't go that fast");
}

int main(){
	
	
	string greet = "Hello world";
	cout << greet << endl;

	double d2{2.3};
	double d3 = 4.7;
	d3 = d3+d2;
	cout<<d3<<endl;
	
	int v[] = {0,12,3,4,5,6,7,8,9};
	
//	for(auto x :v){
//		cout<<x<<"\n";
//	}
//	
//	for(auto x :v){
//		cout<<x<<" ";
//	}
	
	
//	int a = 10;
//	int *a_add = &a;
//	int get = *a;
//	printf("A fast : %d\n", &a);
//	printf("A is : %d\nAlamat A : %d\nAlamat Penyimpan Alamat A : %d\n", a, a_add, &a_add);
//	printf("Total sum : %f", read_and_sum(5));



//enumeration
//	Color z = Color::red;
//	cout<<sqrt(25);
	
	return 0;
}
