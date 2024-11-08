
#include <iostream>
#include <typeinfo>


#include "..//..//..//1998//a85f98cl//1//a85fcecs.hpp" //AG19850316Cppframebrary1PartCorelibrary1EnvironmentCommandlineargumentsStorage

#include "..//..//a85fcfs.hpp" //AG19850316Cppframebrary1PartCore1Framebrarystaticconfiuration
#include "a85fcas.hpp" //AG19850316Cppframebrary1PartCore1Applicationblank1Applicationstaticconfiuration

#include "a85fcam.hpp" //AG19850316Cppframebrary1PartCore1Demo1Applicationmeasurements
#include "a85fcasc.hpp" //AG19850316Cppframebrary1PartCore1Applicationblank1Applicationstartingconfiguration
#include "a85fcasl.hpp" //AG19850316Cppframebrary1PartCore1Demo1Applicationserviceslocator


int main(int argc, char * argv[]) {
    
    using namespace AG85::Cppframebrary1::CppVersion1998::Corelibrary1;
    using namespace AG85::Cppframebrary1::CppVersion2011::Corelibrary1;

    using namespace AG85::Cppframebrary1::CppVersion2011::Application;

	try {

        ApplicationMeasurements applicationMeasurements;

        applicationMeasurements.GetGeneralUptoinnanosecondstimersRef(ApplicationMeasurements::TIMER_TOTAL).Start();
        applicationMeasurements.GetGeneralUptoinnanosecondstimersRef(ApplicationMeasurements::TIMER_CONFIGURING).Start();
        
        EnvironmentCommandlineStringArgumentsStorage environmentCommandlineStringArgumentsStorage(1, argc, argv);

        Applicationstartingconfiguration demoApplicationStartingconfiguration 
        (
            environmentCommandlineStringArgumentsStorage.GetEnvironmentCommandlineArguments().size() > 0
            ? environmentCommandlineStringArgumentsStorage.GetEnvironmentCommandlineArguments()[0]
            : ""
        );

        ApplicationCommonServicesLocator applicationServicelocator
        (
            demoApplicationStartingconfiguration
            , applicationMeasurements
            , 1
        );

        applicationMeasurements.GetGeneralUptoinnanosecondstimersRef(ApplicationMeasurements::TIMER_CONFIGURING).Stop();
        #ifndef AG19850316_1CPPLIBRARY_TIMER_DISABLED
        std::clog << "Innanoseconds total apllication configuring time: " 
            << applicationMeasurements.GetGeneralUptoinnanosecondstimersRef(ApplicationMeasurements::TIMER_CONFIGURING).GetInnanosecondsinterval().count()
            << "\n";
        #endif //AG19850316_1CPPLIBRARY_TIMER_ENABLED


        std::clog 
            << "Demo static configuration application name:"
            << AG85::Cppframebrary1::Application::StaticConfiguration::APPLICATION_NAME
            << std::endl;
        std::clog 
            << "Demo static configuration application version number:"
            << AG85::Cppframebrary1::Application::StaticConfiguration::APPLICATION_VERSION_NUMBER
            << std::endl;


        std::clog 
            << "applicationServicelocator.GetNonconstrefApplicationstartingconfiguration().GetStringDemoParameter1Value(): " 
            << applicationServicelocator.GetNonconstrefApplicationstartingconfiguration().GetDemoParameter1StringvalueRef() 
            << "\n";
        std::clog 
            << "applicationServicelocator.GetApplicationstartingconfiguration().GetStringDemoParameter1Value(): "
            << applicationServicelocator.GetApplicationstartingconfiguration().GetDemoParameter1StringvalueRef()
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


        applicationMeasurements.GetGeneralUptoinnanosecondstimersRef(ApplicationMeasurements::TIMER_TOTAL).Stop();
        
        #ifndef AG19850316_1CPPLIBRARY_TIMER_DISABLED
        std::clog << "Innanoseconds total apllication running time: " 
            << applicationMeasurements.GetGeneralUptoinnanosecondstimersRef(ApplicationMeasurements::TIMER_TOTAL).GetInnanosecondsinterval().count()
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
// The file is a part of AG19850316 C++ Framebrary 1 (ag85cppframebrary1)
