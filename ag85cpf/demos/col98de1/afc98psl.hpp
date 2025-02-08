
#pragma once
#ifndef AFC98PSL_1_HPP //AG19850316CppframebraryPartLibraryCpp1998Demo1ProgramServiceslocator
#define AFC98PSL_1_HPP //AG19850316CppframebraryPartLibraryCpp1998Demo1ProgramServiceslocator

#include <list>
#include <string>

#include "..//..//libssrc//ag85cpfl//cpp1998//apfcol98//1//afclii98.hpp" //AG19850316CppframebraryPartCorelibrary1IncrementingintegeridentificatorsgeneratorCpp1998

#include "afc98pm.hpp" //AG19850316CppframebraryPartCoreLibraryCpp1998Demo1ProgramMeasurements

namespace AG85{

	namespace Cppframebrary{

        namespace CoreLibraryCpp1998Demo1{

            //Note: nonconst version of ProgramCommandlineconfiguration instance is supported
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
                    , unsigned int demoIdsgrpoup1Startingvalue
                )
                : applicationMeasurements(cApplicationMeasurements)
                , demoIdgroup1(demoIdsgrpoup1Startingvalue)
                {
                }

                unsigned int GetNextIdOfGroup1(){

                    return demoIdgroup1.GetNextIdentificator();

                }

            private:

                ProgramMeasurements & applicationMeasurements;

                InstanceIncrementalunsignedintegeridentificatorsgenerator demoIdgroup1;

            }; //class ProgramCommonServicesLocator

        } //namespace CoreLibraryCpp1998Demo1

	} //namespace Cppframebrary

} //namespace AG85

#endif //AFC98PSL_1_HPP - AG19850316CppframebraryPartLibraryCpp1998Demo1ProgramServiceslocator

// Author: Arthur Golubev 1985 (ArthurGolubev1985)
// This file is a part of AG19850316 C++ Framebrary (ag85cppframebrary)
