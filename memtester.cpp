/**
 * memtester.cpp
 * (c) 2017 YLWS-4617
 *
 * Use this program AT YOUR OWN RISK !
 * DO NOT COMPILE AND USE IT ON ANY
 * PRODUCTION SERVER !
 */

#include <iostream>
#include <unistd.h>
#include <stdlib.h>
using namespace std;

int main()
{
 cout<<"I will try my best to fill your RAM."<<endl
 <<"You have 3 seconds to quit (Ctrl+C)"<<endl;
 sleep(3);
 long allocatedMB = 0;
 while (true)
 {
 unsigned char * leakThisMemoryPlease = new unsigned char[10485760];
 for (int i = 0; i < 10485760; i++)
 leakThisMemoryPlease[i] = i*rand();
 allocatedMB += 10;
 cout<<allocatedMB<<"MB allocated"<<endl;
 }
 return 0;
}
