#pragma once
#include "Cpu.h"
#include "Gpu.h"
#include "Ram.h"
#include "Ssd.h"

class Laptop
{
    char* name;
    double price;
    Cpu cpu;
    Ram* ram;
    Gpu* gpu;
    Ssd* ssd;
public:
    Laptop(const char* n, double pr, const char* mcpu, double prcpu, Ram* r, Gpu* g, Ssd* s);
    double GetPrice();
    void Output();
    ~Laptop();
};
