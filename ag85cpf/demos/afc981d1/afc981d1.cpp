
#include <iostream>

#include "..//..//libssrc//ag85cpfl//cpp1998//apfcol98//1//afclst98.hpp" //AG19850316CppframebraryPartCorelibrary1InsecondstimerCpp1998
#include "..//..//libssrc//ag85cpfl//cpp1998//apfcol98//1//afcbt98.hpp" //AG19850316CppframebraryPartCorelibrary1BufferTypedCpp1998

using namespace AG85::Cppframebrary::Corelibrary1::CppVersion1998;

class DemoBufferTyped 
    : public BufferToTypedAdditive<DemoBufferTyped>
    , public TypedToBufferAdditive<DemoBufferTyped>
    , public MemoryhelpingAdditive<DemoBufferTyped>
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

        #ifndef AG19850316_1CPPLIBRARY_TIMER_DISABLED
        Insecondstimer demoRunningInsecondsTimer;
        #endif

        demoRunningInsecondsTimer.Run();

        std::cout << "DemoBufferTyped demo code values:" << std::endl;

        const DemoBufferTyped demoBufferTyped(1, 2);

        unsigned char demoBufferTypedBuffer[demoBufferTyped.GetSizeInChars()];

        demoBufferTyped.CopyToBuffer(demoBufferTypedBuffer);

        unsigned int value1 = DemoBufferTyped::GetTypedPtr(&(demoBufferTypedBuffer[0]))->GetValue1();
        unsigned int value2 = DemoBufferTyped::GetTypedPtr(&(demoBufferTypedBuffer[0]))->GetValue2();

        std::cout
            << "\t"
            << demoBufferTyped.GetValue1()
            << "-"
            << DemoBufferTyped::GetTypedPtr(demoBufferTyped.GetBufferincharsbegin())->GetValue1()
            << "-"
            << value1
            << std::endl;
        if 
        (
            !(
                    (
                        demoBufferTyped.GetValue1()
                        == DemoBufferTyped::GetTypedPtr(demoBufferTyped.GetBufferincharsbegin())->GetValue1()
                    ) 
                    && 
                    (
                        demoBufferTyped.GetValue1()
                        == value1
                    )
            )
        )
        {
            return -2;
        }

        std::cout 
            << "\t"
            << demoBufferTyped.GetValue2()
            << "-"
            << DemoBufferTyped::GetTypedPtr(demoBufferTyped.GetBufferincharsbegin())->GetValue2()
            << "-"
            << value2
            << std::endl;
        if 
        (
            !(
                    (
                        demoBufferTyped.GetValue2()
                        == DemoBufferTyped::GetTypedPtr(demoBufferTyped.GetBufferincharsbegin())->GetValue2()
                    ) 
                    && 
                    (
                        demoBufferTyped.GetValue2()
                        == value2
                    )
            )
        )
        {
                return -3;
        }


        #ifndef AG19850316_1CPPLIBRARY_TIMER_DISABLED
        std::clog << "Inseconds total apllication running time:" 
            << demoRunningInsecondsTimer.GetInsecondsinterval() 
            << "\n";
        #endif //AG19850316_1CPPLIBRARY_TIMER_ENABLED

        return 0;
}

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// This file is a part of AG19850316 C++ Framebrary (ag85cppframebrary)
