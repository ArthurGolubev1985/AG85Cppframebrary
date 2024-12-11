
#include <iostream>
#include <typeinfo>

#include "..//..//libssrc//ag85cpfl//cpp2011//apfcol11//1//afclsc11.hpp" //AG19850316CppframebraryPartCorelibrary1FramebraryStaticconfigurationCpp2011

#include "afc11sco.hpp" //AG19850316CppframebraryPartCoreLibraryCpp2011Demo1ProgramStaticconfiguration

#include "afc11pm.hpp" //AG19850316CppframebraryPartCoreLibraryCpp2011Demo1ProgramMeasurements
#include "afc11psl.hpp" //AG19850316CppframebraryPartCoreLibraryCpp2011Demo1ProgramServiceslocator


int main(int argc, char * argv[]) {
    
    using namespace AG85::Cppframebrary::Corelibrary1::CppVersion2011;

    using namespace AG85::Cppframebrary::CoreLibraryCpp2011Demo1;

	try {

        ProgramMeasurements programMeasurements;

        programMeasurements.GetGeneralUptoinnanosecondstimersRef(ProgramMeasurements::TIMER_TOTAL).Run();
        programMeasurements.GetGeneralUptoinnanosecondstimersRef(ProgramMeasurements::TIMER_CONFIGURING).Run();
        
        ProgramCommonServicesLocator programServicelocator
        (
            programMeasurements
            , 1
        );

        programMeasurements.GetGeneralUptoinnanosecondstimersRef(ProgramMeasurements::TIMER_CONFIGURING).Pause();
        #ifndef AG19850316_1CPPLIBRARY_TIMER_DISABLED
        std::clog << "In nanoseconds total apllication configuring time:" 
            << programMeasurements.GetGeneralUptoinnanosecondstimersRef(ProgramMeasurements::TIMER_CONFIGURING).GetInnanosecondsinterval().count()
            << "\n";
        #endif //AG19850316_1CPPLIBRARY_TIMER_ENABLED


        std::clog 
            << "This demo program name:"
            << AG85::Cppframebrary::CoreLibraryCpp2011Demo1::StaticConfiguration::APPLICATION_NAME
            << std::endl;
        std::clog 
            << "This demo program version number:"
            << AG85::Cppframebrary::CoreLibraryCpp2011Demo1::StaticConfiguration::APPLICATION_VERSION_NUMBER
            << std::endl;
        std::clog
            << "AG1985CppFramebrary core library part number:"
            << AG85::Cppframebrary::CoreLibrary1::StaticConfiguration::CppVersion2011::LIBRARY_PART_NUMBER
            << std::endl;


        std::clog << "Look at source code for meanings of the following demo." << std::endl;


        std::clog << "Ids generators values demo:" << std::endl;

        programServicelocator.GetNextAtomicidOfGroup1();
        unsigned int currentAtomicidOfGroup1 = programServicelocator.GetNextAtomicidOfGroup1();
        std::clog 
            << "\tcurrentAtomicidOfGroup1 (programServicelocator.GetNextAtomicidOfGroup1()):"
            << currentAtomicidOfGroup1
            << std::endl;
        if (currentAtomicidOfGroup1 != 2)
        {
            return -4;
        }
        programServicelocator.GetNextAtomicidOfGroup2();
        unsigned int currentAtomicidOfGroup2 = programServicelocator.GetNextAtomicidOfGroup2();
        std::clog 
            << "\tcurrentAtomicidOfGroup2 (programServicelocator.GetNextAtomicidOfGroup2()):"
            << currentAtomicidOfGroup2
            << std::endl;
        if (currentAtomicidOfGroup2 != 1)
        {
            return -5;
        }


        programMeasurements.GetGeneralUptoinnanosecondstimersRef(ProgramMeasurements::TIMER_TOTAL).Pause();
        
        #ifndef AG19850316_1CPPLIBRARY_TIMER_DISABLED
        std::clog << "In nanoseconds total apllication running time:" 
            << programMeasurements.GetGeneralUptoinnanosecondstimersRef(ProgramMeasurements::TIMER_TOTAL).GetInnanosecondsinterval().count()
            << "\n";
        #endif //AG19850316_1CPPLIBRARY_TIMER_ENABLED


        return 0;

    } catch (std::bad_alloc& exception) {
        std::clog << "failed to allocate memory (" << exception.what() << ")" << "\n";
        return -1;
    } catch (std::exception& exception) {
        std::clog 
            << "notexpectederror " 
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

    return -1;

}

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// This file is a part of AG19850316 C++ Framebrary (ag85cppframebrary)
