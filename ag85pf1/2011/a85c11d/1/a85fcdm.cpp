
#include <iostream>
#include <typeinfo>

#include "..//..//..//1998//a85f98cl//1//a85fcecs.hpp" //AG19850316Cppframebrary1PartCorelibrary1EnvironmentCommandlineargumentsStorage
#include "..//..//a85f11cl//1//a85fclig.hpp" //AG19850316Cppframebrary1PartCorelibrary1globalAtomicIncrementingintegeridentificatorsgenerator
#include "..//..//a85f11cl//1//a85fclii.hpp" //AG19850316Cppframebrary1PartCorelibrary1InstanceAtomicIncrementingintegeridentificatorsgenerator
#include "..//..//a85f11cl//1//a85fclnt.hpp" //AG19850316Cppframebrary1PartCore1Commaonlibrary1Uptonanosecondstimer

#include "a85fcam.hpp" //AG19850316Cppframebrary1PartCore1Demo1Applicationmeasurements
#include "a85fcasc.hpp" //AG19850316Cppframebrary1PartCore1Applicationblank1Applicationstartingconfiguration
#include "a85fcasl.hpp" //AG19850316Cppframebrary1PartCore1Demo1Applicationserviceslocator
#include "a85fcecr.hpp" //AG19850316Cppframebrary1PartCore1Applicationblank1Fromenvironenmentcommandlinedemodynamicconfigurationreader

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
        std::clog << "failed to allocate memory (" << exception.what() << ")!" << "\n";
    } catch (std::exception& exception) {
        std::clog << "notexpectederror " << exception.what() << ": ";
        std::clog << "cppexceptiontype-" << typeid(exception).name() << "\n";
    } catch (...) {
        std::clog << "unknownerror" << "\n";
    }

    return -1;

}

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
