
#pragma once
#ifndef AFC11PSL_1_HPP //AG19850316CppframebraryPartCoreLibraryCpp2011Demo1ProgramServiceslocator
#define AFC11PSL_1_HPP //AG19850316CppframebraryPartCoreLibraryCpp2011Demo1ProgramServiceslocator

#include <list>
#include <string>

#include "..//..//libssrc//ag85cpfl//cpp2011//apfcol11//1//afclai11.hpp" //AG19850316CppframebraryPartCorelibrary1AtomicIncrementingintegeridentificatorsgeneratorCpp2011

#include "afc11pm.hpp" //AG19850316CppframebraryPartCoreLibraryCpp2011Demo1ProgramMeasurements

namespace AG85{

	namespace Cppframebrary{

        namespace CoreLibraryCpp2011Demo1{

            //Notes: nonconst version of ProgramCommandlineconfiguration instance is supported
            // just for case some library function require a nonconst reference as an argument

            class ProgramCommonServicesLocator{
            public:

                ProgramMeasurements & GetApplicationMeasurements()
                {
                    return applicationMeasurements;
                }

                explicit ProgramCommonServicesLocator
                (
                    ProgramMeasurements & cApplicationMeasurements
                    , unsigned int demoCounter1Startingvalue
                )
                : applicationMeasurements(cApplicationMeasurements)
                , demoAtomicidOfGroup1(demoCounter1Startingvalue)
                {
                }

                unsigned int GetNextAtomicidOfGroup1(){

                    return demoAtomicidOfGroup1.GetNextIdentificator();

                }

            private:

                ProgramMeasurements & applicationMeasurements;

                InstanceAtomicIncrementalunsignedintegeridentificatorsgenerator demoAtomicidOfGroup1;

            }; //ProgramCommonServicesLocator

        } //ProgramCommonServicesLocator

	} //namespace Cppframebrary

} //namespace AG85

#endif //AFC11PSL_1_HPP - AG19850316CppframebraryPartCoreLibraryCpp2011Demo1ProgramServiceslocator

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// This file is a part of AG19850316 C++ Framebrary (ag85cppframebrary)
