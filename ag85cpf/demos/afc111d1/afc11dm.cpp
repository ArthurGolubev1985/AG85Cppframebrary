
#include <cstdlib>
#include <iostream>
#include <typeinfo>

#include "..//..//libssrc//ag85cpfl//cpp2011//apfcol11//1//afclai11.hpp" //AG19850316CppframebraryPartCorelibrary1AtomicIncrementalIdsGeneratorCpp2011
#include "..//..//libssrc//ag85cpfl//cpp2011//apfcol11//1//afclnt11.hpp" //AG19850316CppframebraryPartCorelibrary1UptoinnanosecondsTimerCpp2011

int main() {
    
    using namespace AG85::Cppframebrary::Corelibrary1::CppVersion2011;

	#ifndef AG19850316_AFCLNT11_1_TIMER_DISABLED
    UptoinnanosecondsTimer demoRunningUptoinsecondsTimer;
    #endif

    demoRunningUptoinsecondsTimer.Run();


    std::cout << "Incremental ids generators values demo:" << std::endl;

    AtomicIncrementalIdsGenerator<unsigned short> atomicIncrementalIdsGroup1Generator(0);

    std::cout 
        << "incrementalIdsGroup1Generator.GetNextId() returned "
        << atomicIncrementalIdsGroup1Generator.GetNextId()
        << std::endl;

    AtomicIncrementalIdsGenerator<unsigned long> atomicIncrementalIdsGroup2Generator(1);

    std::cout 
        << "incrementalIdsGroup2Generator.GetNextId() returned "
        << atomicIncrementalIdsGroup2Generator.GetNextId()
        << std::endl;

        
    #ifndef AG19850316_AFCLNT11_1_TIMER_DISABLED
    std::cout << "In nanoseconds total apllication running time: " 
        << demoRunningUptoinsecondsTimer.GetInnanosecondsInterval().count()
        << "\n";
    #endif //AG19850316_AFCLNT11_1_TIMER_DISABLED


    return EXIT_SUCCESS;
}

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// This file is a part of AG19850316 C++ Framebrary (ag85cppframebrary)
