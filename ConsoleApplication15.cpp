#include <iostream>
#include <string>
using namespace std;

class CPU 
{
    string str;
public:
    CPU() 
    {
        str = "CPU_ON";
    }
    CPU(const char* N) 
    {
        str = N;
    }
    CPU(CPU& obj) 
    {
        str = obj.str;
    }

    void Show() 
    {
        cout << str << "\n";
    }
};

class RAM
{
    int ram;
public:
    RAM()
    {
        ram = 4;
    }
    RAM(int val)
    {
        ram = val;
    }

    void Show()
    {
        cout << ram << "\n";
    }
};

class Mouse
{
    string name;
public:
    Mouse()
    {
        name = "Mouse";
    }
    Mouse(const char* N)
    {
        name = N;
    }
    Mouse(Mouse& obj)
    {
        name = obj.name;
    }

    void Show()
    {
        cout << name << "\n";
    }
};

class Veb_Cam
{
    string name;
public:
    Veb_Cam()
    {
        name = "Veb Cam";
    }
    Veb_Cam(const char* N)
    {
        name = N;
    }
    Veb_Cam(Veb_Cam& obj)
    {
        name = obj.name;
    }

    void Show()
    {
        cout << name << "\n";
    }
};

class Printer
{
    string name;
public:
    Printer()
    {
        name = "Printer";
    }
    Printer(const char* N)
    {
        name = N;
    }
    Printer(Printer& obj)
    {
        name = obj.name;
    }

    void Show()
    {
        cout << name << "\n";
    }
};

class VideoCard
{
    string name;
public:
    VideoCard()
    {
        name = "Video card";
    }
    VideoCard(const char* N)
    {
        name = N;
    }
    VideoCard(VideoCard& obj)
    {
        name = obj.name;
    }

    void Show()
    {
        cout << name << "\n";
    }
};

class Laptop 
{
    int year;

    Mouse* obj;
    Printer* obj1;
    
    CPU cpu;
    RAM ram;
    Veb_Cam cam;
    VideoCard v_card;
public:
    Laptop(int z,Mouse* x,Printer* x1,CPU y,RAM y1,Veb_Cam y2,VideoCard y3)
    {
        year = z;
        
        obj = x;
        obj1 = x1;

        cpu = y;
        ram = y1;
        cam = y2;
        v_card = y3;
    }
    void Show() 
    {
        cout << "Year: " << year << "\n";
        obj->Show();
        obj1->Show();
        
        cpu.Show();
        ram.Show();
        cam.Show();
        v_card.Show();
    }
    ~Laptop() 
    {
        cout << "\nDelete";
    }
};

int main()
{
    Mouse mouse{ "Mouse" };
    Printer printer{ "Printer" };
    
    CPU cpu{ "CPU" };
    RAM ram = 1024;
    Veb_Cam cam{ "Cam" };
    VideoCard v_card{ "Video Card" };
    
    Laptop *lap = new Laptop(2024, &mouse, &printer, cpu, ram, cam, v_card);
    lap->Show();
    delete lap;

}

