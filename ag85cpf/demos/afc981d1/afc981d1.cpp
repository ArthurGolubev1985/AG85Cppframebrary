
#include <iostream>
#include <stdlib.h>

#include "..//..//libssrc//ag85cpfl//cpp1998//apfcol98//1//afcbt98.hpp" //AG19850316CppframebraryPartCorelibrary1BufferTypedCpp1998
#include "..//..//libssrc//ag85cpfl//cpp1998//apfcol98//1//afclii98.hpp" //AG19850316CppframebraryPartCorelibrary1IncrementalIdsGeneratorCpp1998
#include "..//..//libssrc//ag85cpfl//cpp1998//apfcol98//1//afclst98.hpp" //AG19850316CppframebraryPartCorelibrary1InsecondsTimerCpp1998

using namespace AG85::Cppframebrary::Corelibrary1::CppVersion1998;

class DemoBufferTyped 
    : public BufferToTypedAdd<DemoBufferTyped>
    , public TypedToBufferAdd<DemoBufferTyped>
    , public MemoryhelpingAdd<DemoBufferTyped>
{
public:
    DemoBufferTyped 
    (
        unsigned int cValue1
        , unsigned int cValue2
    )
    : value1(cValue1)
    , value2(cValue2)
    {        
    }

    unsigned int GetValue1() const { return value1; }
    unsigned int GetValue2() const { return value2; }

private:
    unsigned int value1;
    unsigned int value2;
};

int main() {

        
    #ifndef AG19850316_AFCLST98_1_TIMER_DISABLED
    InsecondsTimer demoRunningInsecondsTimer;
    #endif

    demoRunningInsecondsTimer.Run();


    std::cout << "Incremental ids generators values demo:" << std::endl;

    IncrementalIdsGenerator<unsigned short> incrementalIdsGroup1Generator(0);

    std::cout 
        << "incrementalIdsGroup1Generator.GetNextId() returned "
        << incrementalIdsGroup1Generator.GetNextId()
        << std::endl;

    IncrementalIdsGenerator<unsigned long> incrementalIdsGroup2Generator(1);

    std::cout 
        << "incrementalIdsGroup2Generator.GetNextId() returned "
        << incrementalIdsGroup2Generator.GetNextId()
        << std::endl;


    std::cout << "BufferTyped demo code values:" << std::endl;

    const DemoBufferTyped demoBufferTyped(1, 2);

    unsigned char demoBufferTypedBuffer[demoBufferTyped.GetSizeInChars()];

    demoBufferTyped.CopyToBuffer(demoBufferTypedBuffer);

    unsigned int value1 = DemoBufferTyped::GetTypedPtr(&(demoBufferTypedBuffer[0]))->GetValue1();
    unsigned int value2 = DemoBufferTyped::GetTypedPtr(&(demoBufferTypedBuffer[0]))->GetValue2();

    std::cout
        << "demoBufferTyped.GetValue1() returned "
        << demoBufferTyped.GetValue1()
        << "\nDemoBufferTyped::GetTypedPtr(demoBufferTyped.GetBufferPtr())->GetValue1() returned "
        << DemoBufferTyped::GetTypedPtr(demoBufferTyped.GetBufferPtr())->GetValue1()
        << "\nvalue1 varuable value is "
        << value1
        << std::endl;

    std::cout 
        << "demoBufferTyped.GetValue2() returned "
        << demoBufferTyped.GetValue2()
        << "\nDemoBufferTyped::GetTypedPtr(demoBufferTyped.GetBufferPtr())->GetValue2() returned "
        << DemoBufferTyped::GetTypedPtr(demoBufferTyped.GetBufferPtr())->GetValue2()
        << "\nvalue2 varuable value is "
        << value2
        << std::endl;


    #ifndef AG19850316_AFCLST98_1_TIMER_DISABLED
    std::cout << "Inseconds total apllication running time:" 
        << demoRunningInsecondsTimer.GetInsecondsinterval() 
        << "\n";
    #endif //AG19850316_1CPPLIBRARY_TIMER_ENABLED

    return EXIT_SUCCESS;
}

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// This file is a part of AG19850316 C++ Framebrary (ag85cppframebrary)
