#include <iostream>
#include <cmath>


struct task6_3_data
{
  unsigned int minRange = 10;
  const unsigned int maxRange = 100;
  const unsigned int devider = 2;
};

struct task6_4_data
{
  unsigned int i = 0;
  const unsigned int minRange = 190;
  const unsigned int devider = 17;
};

struct task6_5_data
{
    unsigned int max = 0;
    unsigned int i = 0;
    const unsigned int maxRange = 5000;
    const unsigned int devider = 139;
};

struct task6_7_data
{
    signed int n = 0;
    signed int i = 0;
};


unsigned int get_data_task6_2(unsigned int n = 0)
{
    std::cout << "enter n:\t"; std::cin>> n; std::cout << "\n";
    return n;

}

void task6_2()
{
    std::cout << "task 6.2\n";
        unsigned int n = get_data_task6_2();
        unsigned int i = 0;
        while(i<n)
        {
            std::cout << i << "\n";
            i++;
        }
    std::cout << "\n\n\n";
}



void task6_3()
{
   std::cout << "task 6.3\n";
   task6_3_data task_data;
   while (task_data.minRange<task_data.maxRange)
   {
       if (task_data.minRange%task_data.devider==0)
       {
           std::cout << task_data.minRange << "\n";
           task_data.minRange++;
       }
       else
           task_data.minRange++;
   }
   std::cout << "\n\n\n";
}

void task6_4()
{
    std::cout << "task 6.4\n";
    task6_4_data data;
    while (true)
    {
        if(data.i>190 && data.i%data.devider==0)
        {
            std::cout << data.i << "\n";
            break;
        }
    data.i++;
    }

    std::cout << "\n\n\n";
}

void task6_5()
{
    std::cout << "task 6.5\n";
    task6_5_data data;
    while(data.i<data.maxRange)
    {
        if(data.i%data.devider==0)
        {
            data.max = data.i;
            data.i++;
        }
        data.i++;
    }
    std::cout << data.max << "\n\n\n";
}

long factorial_n(int n)
{
    int fact = 1;
    int i = 1;
    while (i<n)
    {
        fact = i*(i+1);
        i++;
    }
    return fact;
}

int task6_6_get_data(signed int n = 0)
{
    std::cout << "enter n:\t"; std::cin>> n; std::cout << "\n";
    return n;
}

void task6_6()
{
    std::cout << "task 6.6\n";
    int n = task6_6_get_data();
    long i = factorial_n(n);
    std::cout << i << "\n";
    std::cout << "\n\n\n";
}

int task6_7_get_data(signed int n = 0)
{
    std::cout << "enter n:\t"; std::cin>> n; std::cout << "\n";
    return n;
}

void task6_7()
{
    std::cout << "task 6.7\n";
    task6_7_data data;
    data.n = task6_7_get_data();
    while(data.i<data.n)
    {
        if(pow(data.i,2)<data.n)
            std::cout << data.i << "\n";
        data.i++;
    }
    std::cout << "\n\n\n";

}

void task6_8()
{

}

int task6_9_get_data(signed int n = 0)
{
    std::cout << "enter n:\t"; std::cin>> n; std::cout << "\n";
    return n;
}

task6_9()
{
    int n = task6_9_get_data();
    if(n%2!=0)
    {
        std::cout << "its not even!\n";
        task6_9();
    }
    else
        std::cout << "its even!";
}

int task6_10_get_data(signed int n = 0)
{
    std::cout << "set password:\t"; std::cin>> n; std::cout << "\n";
    return n;
}

bool password_check(int n)
{
    bool check = false;
    int password = 0;
    std::cout << "enter password:"; std::cin >> password; std::cout << ":\n";
    if(password == n)
    {
        check = true;
    }
    return check;

}

task6_10()
{
    int n = task6_10_get_data();
    bool check = password_check(n);
    if(check == false)
    {
        std::cout << "incorrect password!\n";
        task6_10();
    }
    else
    {
        std::cout << "password is correct!\n";
    }

}

task6_11()
{
    int counter = 0;
    int number = 0;
    while(counter<10)
    {
      std::cin >> number;
      if (number == 0)
      {
          break;
      }
    }
}

int main()
{
    task6_2();
    task6_3();
    task6_4();
    task6_5();
    task6_6();
    task6_7();
    task6_9();
    task6_10();
    task6_11();
}
