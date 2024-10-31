
#pragma once
#ifndef A85FCASL_HPP //AG19850316Cppframebrary1PartCore1Demo1Applicationserviceslocator
#define A85FCASL_HPP //AG19850316Cppframebrary1PartCore1Demo1Applicationserviceslocator

#include <list>
#include <string>

#include "..//..//a85f11cl//1//a85fclig.hpp" //AG19850316Cppframebrary1PartCorelibrary1GlobalAtomicIncrementingintegeridentificatorsgenerator
#include "..//..//a85f11cl//1//a85fclii.hpp" //AG19850316Cppframebrary1PartCorelibrary1InstanceAtomicIncrementingintegeridentificatorsgenerator

#include "a85fcasc.hpp" //AG19850316Cppframebrary1PartCore1Applicationblank1Applicationstartingconfiguration
#include "a85fcam.hpp" //AG19850316Cppframebrary1PartCore1Demo1ApplicationMeasurements

namespace AG85{

	namespace Cppframebrary1{

        namespace CppVersion2011{

            namespace Application{

                //Notes: nonconst version of Applicationstartingconfiguration instance is supported
                // just for case some library function require a nonconst reference as an argument

                class ApplicationCommonServicesLocator{
                public:

                    const Applicationstartingconfiguration & GetApplicationstartingconfiguration() const
                    {
                        return demoGeneralDynamicconfiguration;
                    }

                    Applicationstartingconfiguration & GetNonconstrefApplicationstartingconfiguration() const
                    {
                        return (Applicationstartingconfiguration &)nonconstrefApplicationstartingconfiguration;
                    }

                    ApplicationMeasurements & GetApplicationMeasurements()
                    {
                        return applicationMeasurements;
                    }

                    explicit ApplicationCommonServicesLocator
                    (
                        Applicationstartingconfiguration & cDemoGeneralDynamicconfiguration
                        , ApplicationMeasurements & cApplicationMeasurements
                        , unsigned int demoCounter1Startingvalue
                    )
                    :demoGeneralDynamicconfiguration(cDemoGeneralDynamicconfiguration)
                    , nonconstrefApplicationstartingconfiguration(cDemoGeneralDynamicconfiguration)
                    , applicationMeasurements(cApplicationMeasurements)
                    , demoAtomicidOfGroup1(demoCounter1Startingvalue)
                    {
                    }

                    unsigned int GetNextAtomicidOfGroup1(){

                        return demoAtomicidOfGroup1.GetNextIdentificator();

                    }

                    unsigned int GetNextAtomicidOfGroup2(){

                        return demoAtomicidOfGroup2.GetNextIdentificator();

                    }

                private:
                    const Applicationstartingconfiguration & demoGeneralDynamicconfiguration;
                    Applicationstartingconfiguration & nonconstrefApplicationstartingconfiguration;

                    ApplicationMeasurements & applicationMeasurements;

                    InstanceAtomicIncrementalunsignedintegeridentificatorsgenerator demoAtomicidOfGroup1;
                    GlobalAtomicIncrementalunsignedintegeridentificatorsgenerator demoAtomicidOfGroup2;

                }; //ApplicationCommonServicesLocator

            } //namespace CppVersion2011

        } //ApplicationCommonServicesLocator

	} //namespace Cppframebrary1

} //namespace AG85

#endif //A85CFASL_HPP - AG19850316Cppframebrary1PartCore1Demo1Applicationservicelocator

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
