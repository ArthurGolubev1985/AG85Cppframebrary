
#pragma once
#ifndef A85FCASL_HPP //AG19850316Cppframebrary1PartCore1Demo1Applicationserviceslocator
#define A85FCASL_HPP //AG19850316Cppframebrary1PartCore1Demo1Applicationserviceslocator

#include <list>
#include <string>

#include "..//..//a85f98cl//1//a85fclig.hpp" //AG19850316Cppframebrary1Part1998Corelibrary1GlobalIncrementingintegeridentificatorsgenerator
#include "..//..//a85f98cl//1//a85fclii.hpp" //AG19850316Cppframebrary1Part1998Corelibrary1InstanceIncrementingintegeridentificatorsgenerator

#include "a85fcasc.hpp" //AG19850316Cppframebrary1PartCore1Applicationblank1Applicationstartingconfiguration
#include "a85fcam.hpp" //AG19850316Cppframebrary1PartCore1Demo1ApplicationMeasurements

namespace AG85{

	namespace Cppframebrary1{

        namespace CppVersion1998{

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
                        , unsigned int demoIdsgrpoup1Startingvalue
                        , unsigned int demoIdsgrpoup2Startingvalue
                    )
                    :demoGeneralDynamicconfiguration(cDemoGeneralDynamicconfiguration)
                    , nonconstrefApplicationstartingconfiguration(cDemoGeneralDynamicconfiguration)
                    , applicationMeasurements(cApplicationMeasurements)
                    , demoIdgroup1(demoIdsgrpoup1Startingvalue)
                    {
                        demoIdgroup2.SetValueforGlobalIncrementalunsignedintegeridentificatorsgenerator(demoIdsgrpoup2Startingvalue);
                    }

                    unsigned int GetNextIdOfGroup1(){

                        return demoIdgroup1.GetNextIdentificator();

                    }

                    unsigned int GetNextIdOfGroup2(){

                        return demoIdgroup2.GetNextIdentificator();

                    }

                private:
                    const Applicationstartingconfiguration & demoGeneralDynamicconfiguration;
                    Applicationstartingconfiguration & nonconstrefApplicationstartingconfiguration;

                    ApplicationMeasurements & applicationMeasurements;

                    InstanceIncrementalunsignedintegeridentificatorsgenerator demoIdgroup1;
                    GlobalIncrementalunsignedintegeridentificatorsgenerator demoIdgroup2;

                }; //class ApplicationCommonServicesLocator

            } //namespace Application

        } //namespace CppVersion1998

	} //namespace Cppframebrary1

} //namespace AG85

#endif //A85CFASL_HPP - AG19850316Cppframebrary1PartCore1Demo1Applicationservicelocator

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
