
#include <iostream>
#include <typeinfo>

#include "..//..//a85f98cl//1//a85fcbt.hpp" //AG19850316Cppframebrary1Part1998Corelibrary1BufferTyped
#include "..//..//a85f98cl//1//a85fcecs.hpp" //AG19850316Cppframebrary1Part1998Corelibrary1EnvironmentCommandlineargumentsStorage
#include "..//..//a85f98cl//1//a85fclig.hpp" //AG19850316Cppframebrary1Part1998Corelibrary1globalIncrementingintegeridentificatorsgenerator
#include "..//..//a85f98cl//1//a85fclii.hpp" //AG19850316Cppframebrary1Part1998Corelibrary1InstanceIncrementingintegeridentificatorsgenerator
#include "..//..//a85f98cl//1//a85fclst.hpp" //AG19850316Cppframebrary1PartCore1Commaonlibrary1Insecondstimer

#include "..//..//a85fcsc.hpp" //AG19850316Cppframebrary1PartCore1Applicationblank1Applicationstaticconfiuration

#include "a85fcam.hpp" //AG19850316Cppframebrary1PartCore1Demo1Applicationmeasurements
#include "a85fcasc.hpp" //AG19850316Cppframebrary1PartCore1Applicationblank1Applicationstartingconfiguration
#include "a85fcasl.hpp" //AG19850316Cppframebrary1PartCore1Demo1Applicationserviceslocator
#include "a85fcecr.hpp" //AG19850316Cppframebrary1PartCore1Applicationblank1Fromenvironenmentcommandlinedemodynamicconfigurationreader


using namespace AG85::Cppframebrary1::CppVersion1998::Corelibrary1;

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

    using namespace AG85::Cppframebrary1::CppVersion1998::Corelibrary1;

    using namespace AG85::Cppframebrary1::CppVersion1998::Application;

	try {

        ApplicationMeasurements applicationMeasurements;


        applicationMeasurements.GetGeneralInsecondstimersRef(ApplicationMeasurements::TIMER_TOTAL).Start();
        applicationMeasurements.GetGeneralInsecondstimersRef(ApplicationMeasurements::TIMER_CONFIGURING).Start();
        
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
            , 2
        );

        applicationMeasurements.GetGeneralInsecondstimersRef(ApplicationMeasurements::TIMER_CONFIGURING).Stop();
        #ifndef AG19850316_1CPPLIBRARY_TIMER_DISABLED
        std::clog << "Inseconds total apllication configuring time: " 
            << applicationMeasurements.GetGeneralInsecondstimersRef(ApplicationMeasurements::TIMER_CONFIGURING).GetInsecondsinterval() 
            << "\n";
        #endif //AG19850316_1CPPLIBRARY_TIMER_ENABLED


        std::clog 
            << "Application static configuration application name:"
            << StaticConfiguration::APPLICATION_NAME
            << std::endl;
        std::clog 
            << "Application static configuration application version number:"
            << StaticConfiguration::APPLICATION_VERSION 
            << std::endl;


        std::clog << "Application starting configuration demo:" << std::endl;

        std::clog 
            << "\tapplicationServicelocator.GetNonconstrefApplicationstartingconfiguration().GetStringDemoParameter1Value(): " 
            << applicationServicelocator.GetNonconstrefApplicationstartingconfiguration().GetDemoParameter1StringvalueRef() 
            << "\n";
        if 
        (
            argc > 1
            && applicationServicelocator.GetNonconstrefApplicationstartingconfiguration().GetDemoParameter1StringvalueRef() 
            != argv[1]
        )
        {
            return -1;
        }
        std::clog 
            << "\tapplicationServicelocator.GetApplicationstartingconfiguration().GetStringDemoParameter1Value(): "
            << applicationServicelocator.GetApplicationstartingconfiguration().GetDemoParameter1StringvalueRef()
            << "\n";
        if 
        (
            argc > 1
            && applicationServicelocator.GetApplicationstartingconfiguration().GetDemoParameter1StringvalueRef() 
            != argv[1]
        )
        {
            return -1;
        }


        std::clog << "Ids generators values demo:" << std::endl;

        applicationServicelocator.GetNextIdOfGroup1();
        unsigned int currentIdOfGroup1 = applicationServicelocator.GetNextIdOfGroup1();
        std::clog 
            << "\tcurrentIdOfGroup1 (applicationServicelocator.GetNextIdOfGroup1())="
            << currentIdOfGroup1
            << std::endl;
        if (currentIdOfGroup1 != 2)
        {
            return -1;
        }

        applicationServicelocator.GetNextIdOfGroup2();
        unsigned int currentIdOfGroup2 = applicationServicelocator.GetNextIdOfGroup2();
        std::clog 
            << "\tcurrentIdOfGroup2 (applicationServicelocator.GetNextIdOfGroup2())="
            << currentIdOfGroup2
            << std::endl;
        if (currentIdOfGroup2 != 3)
        {
            return -1;
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
            return -1;
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
                return -1;
        }


        applicationMeasurements.GetGeneralInsecondstimersRef(ApplicationMeasurements::TIMER_TOTAL).Stop();
        
        #ifndef AG19850316_1CPPLIBRARY_TIMER_DISABLED
        std::clog << "Inseconds total apllication running time: " 
            << applicationMeasurements.GetGeneralInsecondstimersRef(ApplicationMeasurements::TIMER_TOTAL).GetInsecondsinterval() 
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
