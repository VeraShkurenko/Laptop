#include "Laptop.h"
#include<iostream>
using namespace std;
 

Laptop::Laptop(const char* n, double pr, const char* mcpu, double prcpu, Ram* r, Gpu* g, Ssd* s)
	: cpu(mcpu, prcpu), ram(r), gpu(g), ssd(s)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	price = pr;

}

double Laptop::GetPrice()
{
	return price + cpu.GetPrice() + gpu->GetPrice() + ram->GetPrice() + ssd->GetPrice();
}

void Laptop::Output()
{
	cout << "Model: " << name << endl;
	cout << "Cpu: " << cpu.GetModel() << endl;
	cout << "Ram: " << ram->GetModel() << " Price: " << ram->GetPrice() << endl;
	cout << "Gpu: " << gpu->GetModel() << " Price: " << gpu->GetPrice() << endl;
	cout << "Ssd: " << ssd->GetModel() << " Price: " << ssd->GetPrice() << endl;
	cout << "Laptop price = " << GetPrice() << " $\n";
}

Laptop::~Laptop()
{
	delete[] name;
	delete ram;
	delete gpu;
	delete ssd;
}