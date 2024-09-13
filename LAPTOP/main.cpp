#include <iostream>
#include "Laptop.h"
#include "Cpu.h"
#include "Gpu.h"
#include "Ram.h"
#include "Ssd.h"

using namespace std;

int main()
{
    Ram* ram1 = new Ram("Samsung", 200);
    Gpu* gpu1 = new Gpu("NVIDIA GTX 1660", 500);
    Ssd* ssd1 = new Ssd("Kingston A400", 150);

    Laptop laptop1("Dell XPS", 1000, "Intel i7", 300, ram1, gpu1, ssd1);
    cout << "Laptop 1 Details:" << endl;
    laptop1.Output();
    cout << endl;

    Ram* ram2 = new Ram("Corsair", 250);
    Gpu* gpu2 = new Gpu("AMD Radeon RX 580", 450);
    Ssd* ssd2 = new Ssd("Samsung 970 EVO", 200);

    Laptop laptop2("HP Envy", 900, "AMD Ryzen 5", 280, ram2, gpu2, ssd2);
    cout << "Laptop 2 Details:" << endl;
    laptop2.Output();
    cout << endl;

    Ram* ram3 = new Ram("G.Skill", 300);
    Gpu* gpu3 = new Gpu("NVIDIA RTX 3060", 600);
    Ssd* ssd3 = new Ssd("Crucial MX500", 180);

    Laptop laptop3("Asus ROG", 1500, "Intel i9", 400, ram3, gpu3, ssd3);
    cout << "Laptop 3 Details:" << endl;
    laptop3.Output();
    cout << endl;

    return 0;
} 