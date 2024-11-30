
#include <iostream>
#include <typeinfo>

#include "..//..//libssrc//ag85cpfl//cpp1998//apfcol98//1//afcecs98.hpp" //AG19850316CppframebraryPartCorelibrary1EnvironmentCommandlineargumentsstorageCpp1998

#include "..//..//libssrc//ag85cpfl//cpp2011//apfcol11//1//afclsc11.hpp" //AG19850316CppframebraryPartCorelibrary1FramebraryStaticconfigurationCpp2011

#include "afc11sco.hpp" //AG19850316CppframebraryPartCoreLibraryCpp2011Demo1ProgramStaticconfiguration

#include "afc11pm.hpp" //AG19850316CppframebraryPartCoreLibraryCpp2011Demo1ProgramMeasurements
#include "afc11psc.hpp" //AG19850316CppframebraryPartCoreLibraryCpp2011Demo1ProgramCommandlineconfiguration
#include "afc11psl.hpp" //AG19850316CppframebraryPartCoreLibraryCpp2011Demo1ProgramServiceslocator


int main(int argc, char * argv[]) {
    
    using namespace AG85::Cppframebrary::Corelibrary1::CppVersion1998;
    using namespace AG85::Cppframebrary::Corelibrary1::CppVersion2011;

    using namespace AG85::Cppframebrary::CoreLibraryCpp2011Demo1;

	try {

        ProgramMeasurements programMeasurements;

        programMeasurements.GetGeneralUptoinnanosecondstimersRef(ProgramMeasurements::TIMER_TOTAL).Run();
        programMeasurements.GetGeneralUptoinnanosecondstimersRef(ProgramMeasurements::TIMER_CONFIGURING).Run();
        
        EnvironmentCommandlineStringArgumentsStorage environmentCommandlineStringArgumentsStorage(1, argc, argv);

        ProgramCommandlineconfiguration demoApplicationCommandlineconfiguration 
        (
            environmentCommandlineStringArgumentsStorage.GetEnvironmentCommandlineArguments().size() > 0
            ? environmentCommandlineStringArgumentsStorage.GetEnvironmentCommandlineArguments()[0]
            : ""
        );

        ProgramCommonServicesLocator applicationServicelocator
        (
            demoApplicationCommandlineconfiguration
            , programMeasurements
            , 1
        );

        programMeasurements.GetGeneralUptoinnanosecondstimersRef(ProgramMeasurements::TIMER_CONFIGURING).Pause();
        #ifndef AG19850316_1CPPLIBRARY_TIMER_DISABLED
        std::clog << "Innanoseconds total apllication configuring time:" 
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


        std::clog << "Look at source code for meanings of output values of this demo." << std::endl;


        std::clog 
            << "applicationServicelocator.GetNonconstrefApplicationCommandlineconfiguration().GetStringDemoParameter1Value():" 
            << applicationServicelocator.GetNonconstrefApplicationCommandlineconfiguration().GetDemoParameter1StringvalueRef() 
            << "\n";
        std::clog 
            << "applicationServicelocator.GetApplicationCommandlineconfiguration().GetStringDemoParameter1Value():"
            << applicationServicelocator.GetApplicationCommandlineconfiguration().GetDemoParameter1StringvalueRef()
            << "\n";


        applicationServicelocator.GetNextAtomicidOfGroup1();
        unsigned int currentAtomicidOfGroup1 = applicationServicelocator.GetNextAtomicidOfGroup1();
        if (currentAtomicidOfGroup1 != 2)
        {
            return -1;
        }
        applicationServicelocator.GetNextAtomicidOfGroup2();
        unsigned int currentAtomicidOfGroup2 = applicationServicelocator.GetNextAtomicidOfGroup2();
        if (currentAtomicidOfGroup2 != 1)
        {
            return -1;
        }


        programMeasurements.GetGeneralUptoinnanosecondstimersRef(ProgramMeasurements::TIMER_TOTAL).Pause();
        
        #ifndef AG19850316_1CPPLIBRARY_TIMER_DISABLED
        std::clog << "Innanoseconds total apllication running time:" 
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
