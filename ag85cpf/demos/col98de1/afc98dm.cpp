
#include <iostream>
#include <typeinfo>

#include "afcdefco.hpp" //AG19850316CppframebraryCorelibraryCpp1998Demo1ProgramCppdefinesconfiguration

#include "..//..//libssrc//ag85cpfl//cpp1998//apfcol98//1//afclsc98.hpp" //AG19850316CppframebraryPartCorelibrary1FramebraryStaticconfigurationCpp1998
#include "..//..//libssrc//ag85cpfl//cpp1998//apfcol98//1//afcbt98.hpp" //AG19850316CppframebraryPartCorelibrary1BufferTypedCpp1998

#include "afc98sco.hpp" //AG19850316CppframebraryPartCoreLibraryCpp1998Demo1ProgramStaticconfiguration

#include "afc98pm.hpp" //AG19850316CppframebraryPartCoreLibraryCpp1998Demo1ProgramMeasurements
#include "afc98psl.hpp" //AG19850316CppframebraryPartLibraryCpp1998Demo1ProgramServiceslocator


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


int main(int argc, char * argv[]) {

    using namespace AG85::Cppframebrary::CoreLibraryCpp1998Demo1;

	try {


        ProgramMeasurements programMeasurements;

        programMeasurements.GetGeneralInsecondstimersRef(ProgramMeasurements::TIMER_TOTAL).Run();
        
        ProgramCommonServicesLocator programServicelocator
        (
            programMeasurements
            , 1
        );

        std::clog
            << "This demo program name:"
            << AG85::Cppframebrary::CoreLibraryCpp1998Demo1::StaticConfiguration::APPLICATION_NAME
            << std::endl;
        std::clog
            << "This demo program version number:"
            << AG85::Cppframebrary::CoreLibraryCpp1998Demo1::StaticConfiguration::APPLICATION_VERSION_NUMBER
            << std::endl;
        std::clog
            << "AG1985CppFramebrary core library part number:"
            << AG85::Cppframebrary::CoreLibrary1::StaticConfiguration::CppVersion1998::LIBRARY_PART_NUMBER
            << std::endl;


        std::clog << "Look at source code for meanings of the following demoes." << std::endl;


        std::clog << "Ids generators values demo:" << std::endl;

        programServicelocator.GetNextIdOfGroup1();
        unsigned int currentIdOfGroup1 = programServicelocator.GetNextIdOfGroup1();
        std::clog 
            << "\tcurrentIdOfGroup1 (programServicelocator.GetNextIdOfGroup1()):"
            << currentIdOfGroup1
            << std::endl;
        if (currentIdOfGroup1 != 2)
        {
            return -4;
        }

        std::clog << "BufferTyped library demo:" << std::endl;

        const DemoBufferTyped demoBufferTyped(1, 2);

        unsigned char demoBufferTypedBuffer[demoBufferTyped.GetSizeInChars()];

        demoBufferTyped.CopyToBuffer(demoBufferTypedBuffer);

        unsigned int value1 = DemoBufferTyped::GetTypedPtr(&(demoBufferTypedBuffer[0]))->GetValue1();
        unsigned int value2 = DemoBufferTyped::GetTypedPtr(&(demoBufferTypedBuffer[0]))->GetValue2();

        std::clog 
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
            return -5;
        }

        std::clog 
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
                return -6;
        }


        programMeasurements.GetGeneralInsecondstimersRef(ProgramMeasurements::TIMER_TOTAL).Pause();
        
        #ifndef AG19850316_1CPPLIBRARY_TIMER_DISABLED
        std::clog << "Inseconds total apllication running time:" 
            << programMeasurements.GetGeneralInsecondstimersRef(ProgramMeasurements::TIMER_TOTAL).GetInsecondsinterval() 
            << "\n";
        #endif //AG19850316_1CPPLIBRARY_TIMER_ENABLED


        return 0;

    } catch (std::bad_alloc& exception) {
        std::clog << "failed to allocate memory (" << exception.what() << ")" << "\n";
        return -1;
    } catch (std::exception& exception) {
        std::clog 
            << "nonexpectederror " 
            << exception.what() 
            << "; "
            << "cppexceptiontype-" 
            << typeid(exception).name() 
            << "\n";
        return -2;
    } catch (...) {
        std::clog << "unknownerror" << "\n";
        return -3;
    }

}

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// This file is a part of AG19850316 C++ Framebrary (ag85cppframebrary)
